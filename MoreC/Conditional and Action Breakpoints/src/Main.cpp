// Created by Mateusz Zaremba

#include <iostream>

class Entity {
public:
	Entity() = delete;
	~Entity() = default;

};

int main() 
{
	Entity e{};	
	

	std::cin.get();
}
