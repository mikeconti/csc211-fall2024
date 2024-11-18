#pragma once
#include <iostream>
class IntVector
{
public:
	IntVector();
	~IntVector();

	void PushBack(int value);
	void Resize(size_t newCapacity);

	void PrintVector();

	inline size_t GetLength()const { return m_Length; }
	
	inline int& operator[](size_t i) { return m_Data[i]; }
	inline const int& operator[](size_t i) const { return m_Data[i]; }


private:
	int* m_Data;
	size_t m_Capacity;
	size_t m_Length;
};

