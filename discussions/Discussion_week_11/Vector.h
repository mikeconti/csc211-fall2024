#pragma once

// vector to store any data type
// templated classes must be implemented in the header file

template <typename T>
class Vector
{
public:
	Vector<T>()
		: m_Capacity(2), m_Length(0), m_Data(nullptr)
	{
		std::cout << "Constructor\n";
		m_Data = new T[m_Capacity];
	}

	~Vector<T>()
	{
		std::cout << "Destructor\n";
		delete[] m_Data;
	}

	void PushBack(T value)
	{
		if (m_Length == m_Capacity)
		{
			// resize array
			Resize(m_Capacity * 2);
		}

		m_Data[m_Length++] = value;
	}

	void Resize(size_t newCapacity)
	{
		T* temp = new T[newCapacity];
		for (int i = 0; i < m_Length; i++)
		{
			temp[i] = m_Data[i];
		}
		//memcpy(temp, m_Data, m_Length * sizeof(T));
		delete[] m_Data;
		m_Data = temp;
		m_Capacity = newCapacity;
	}

	inline size_t GetLength() const { return m_Length; }

	inline T& operator[](size_t i) { return m_Data[i]; }
	inline const T& operator[](size_t i) const { return m_Data[i]; }

private:
	T* m_Data;
	size_t m_Capacity;
	size_t m_Length;
};
