#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "head.h"

typedef std::vector<std::string> Paths;
typedef std::tuple<std::string, Paths> Branch;
typedef std::vector<Branch> AssemblyConnections;

int main()
{
    AssemblyConnections assemblyConnections = {
        std::make_tuple("designed", (Paths){"approved", "rejected"}),
        std::make_tuple("rejected", (Paths){"designed"}),
        std::make_tuple("approved", (Paths){"ready", "rejected"}),
        std::make_tuple("ready", (Paths){"launched", "vault"}),
        std::make_tuple("launched", (Paths){"vault"}),
        std::make_tuple("vault", (Paths){"ready"})
    };

    // get approved from designed
    std::cout << std::get<1>(assemblyConnections[0])[0] << std::endl;
    
    // get launched from ready
    std::cout << std::get<1>(assemblyConnections[3])[0] << std::endl;

    // get approved of approved
    std::cout << std::get<0>(assemblyConnections[2]) << std::endl;

	std::cin.get();
}