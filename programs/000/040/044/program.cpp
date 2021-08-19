#include <iostream>
#include <string>
#include <memory>

#include "head.h"

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print() {
		std::cout << "Printed" << std::endl;
	}
};

int main()
{
	{
		// unique pointers live until the the end of the scope
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();

		entity->Print();
	}

	std::cin.get();
}