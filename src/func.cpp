#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "func.hpp"

namespace mt
{
	int line_number(std::string filename)
	{
		std::ifstream file(filename);

		if (!file.is_open())
		{
			std::cout << "error" << '/n';
		}
		else
		{
			std::string line;
			int count = 0;
			while (!file.eof())
			{
				getline(file, line);
				count++;
			}

			if (size(line) == 0)
				return count;
			else
			{
				count++;
				return count;
			}
		}
	}
	void out(std::string filename, int counter)
	{
		std::ofstream file(filename, std::ios_base::app);

		auto time = std::time(nullptr);
		
		if (counter == 1)
		{
			file << std::to_string(counter) << std::put_time(std::localtime(&time), " %F-%H-%M-%S");
		}
		else
		{
			file << std::endl << std::to_string(counter) << std::put_time(std::localtime(&time), " %F-%H-%M-%S");
		}
	}
}