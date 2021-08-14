#include <iostream>
#include <cstdint>

/**
 * The union is only as big
 * as necessary to hold its
 * largest data member.
 * 
 * The other data members are
 * allocated in the same bytes
 * as part of that largest member.
 * 
 * The details of that allocation
 * are implementation-defined but
 * all non-static data members will
 * have the same address (since C++14).
 * 
 * It's undefined behavior to read from
 * the member of the union that wasn't
 * most recently written. Many compilers
 * implement, as a non-standard language
 * extension, the ability to read inactive
 * members of a union.
 */
union S
{
    std::int32_t n;     // occupies 4 bytes
    std::uint16_t s[2]; // occupies 4 bytes
    std::uint8_t c;     // occupies 1 byte
};                      // the whole union occupies 4 bytes
 
int main()
{
    S s = {0x12345678}; // initializes the first member, s.n is now the active member
    // at this point, reading from s.s or s.c is undefined behavior
    std::cout << std::hex << "s.n = " << s.n << '\n';
    s.s[0] = 0x0011; // s.s is now the active member
    // at this point, reading from n or c is UB but most compilers define it
    std::cout << "s.c is now " << +s.c << '\n' // 11 or 00, depending on platform
              << "s.n is now " << s.n << '\n'; // 12340011 or 00115678

	std::cin.get();
}