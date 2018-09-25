// Created by Mateusz Zaremba

#include <iostream>
#include <string>
#include <type_traits>



int main() 
{
	if (std::is_signed<char>::value)
	{
		std::cout << std::is_same<char, signed char>::value;
	}
	else
	{
		std::cout << std::is_same<char, unsigned char>::value;
	}

	std::cin.get();
}