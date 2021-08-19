#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include "head.h"

typedef std::vector<std::string> Connectors;
typedef std::vector<
    std::tuple<
        std::string,
        Connectors
    >
> AssemblyConnections;

int main()
{
    AssemblyConnections assemblyConnections = {
        std::make_tuple("designed", (Connectors){"approved", "rejected"}),
        std::make_tuple("rejected", (Connectors){"designed"}),
        std::make_tuple("approved", (Connectors){"ready", "rejected"}),
        std::make_tuple("ready", (Connectors){"launched", "vault"}),
        std::make_tuple("launched", (Connectors){"vault"}),
        std::make_tuple("vault", (Connectors){"ready"})
    };

    // get approved from designed
    std::cout << std::get<1>(assemblyConnections[0])[0] << std::endl;
    
    // get launched from ready
    std::cout << std::get<1>(assemblyConnections[3])[0] << std::endl;

    // get approved of approved
    std::cout << std::get<0>(assemblyConnections[2]) << std::endl;

	std::cin.get();
}