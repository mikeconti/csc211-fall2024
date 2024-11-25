#pragma once
#include <iostream>

namespace {
	template <typename T>
	void Print(const T& data)
	{
		std::cout << data;
		std::cout << '\n';

	}

	template <typename ... Args, typename T>
	void Print(const T& data, Args&&... args)
	{
		std::cout << data;
		Print(args...);
	}


	void Print()
	{
		std::cout << '\n';
	}
}