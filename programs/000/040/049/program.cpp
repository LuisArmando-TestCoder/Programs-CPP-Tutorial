// C++ program to demonstrate that when std::vectors
// are passed to functions without &, a copy is
// created.
#include <head.h>

int main()
{
    std::vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);

    func(&vect);

    // vect remains unchanged after function
    // call
    for (uint32_t i = 0; i < vect.size(); i++)
    {
        std::cout << vect[i] << " ";
    }

    std::cin.get();

    return 0;
}

// Template functions have to be defined in the same file
// template <typename Element>
// void func(std::vector<Element> *vect)
// {
//     (*vect).push_back(30);

//     std::cout << (*vect)[2] << std::endl;
// }