#include "IntVector.h"

IntVector::IntVector()
	: m_Capacity(2), m_Length(0), m_Data(nullptr)
{
	std::cout << "Constructor\n";
	m_Data = new int[m_Capacity];
}

IntVector::~IntVector()
{
	std::cout << "Destructor\n";
	delete[] m_Data;
}

void IntVector::PushBack(int value)
{
	if (m_Length == m_Capacity)
	{
		// resize array
		Resize(m_Capacity * 2);
	}
	
	m_Data[m_Length++] = value;		
}

void IntVector::Resize(size_t newCapacity)
{
	//allocate new memory
	// copy old values into the new memory
	// delete the old memory
	
	int* temp = new int[newCapacity];
	memcpy(temp, m_Data, m_Length * sizeof(int));
	delete[] m_Data;
	m_Data = temp;
	m_Capacity = newCapacity;
}

void IntVector::PrintVector()
{
	for (int i = 0; i < m_Length; i++)
	{
		std::cout << m_Data[i] << ' ';
	}
	std::cout << '\n';
}
