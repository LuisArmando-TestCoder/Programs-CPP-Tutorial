#include <bits/stdc++.h>

// // The vect here is a copy of vect in main()

void func(std::vector<int> *vect)
{
    (*vect).push_back(30);

    std::cout << (*vect)[2] << std::endl;
}