// gravity.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <random>;



int main()
{
	std::random_device rd;
	std::mt19937 mersenne(rd());

	for (int x = 0; x < 52; x++)
	{
		std::cout << mersenne() << "\t";

		if ((x + 1) % 4 == 0)
		{
			std::cout << "\n";
		}
	}
	// comment
	int z = 0;
	std::cin >> z;

    return 0;
}

