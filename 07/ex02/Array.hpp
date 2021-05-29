#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <assert.h>
#include <iostream>
 
template <class  T>

class Array
{
	private:
		unsigned int	_size;
		T				*_data;
	
	public:
		Array() : _size(0), _data(nullptr) {}
	
		Array(unsigned int length) : _size(length)
		{
			_data = new T[length];
			memset(_data, T(), _size * sizeof(T));
		}
	
		Array(Array const &other)
		{
			_data = NULL;
			_size = other._size;
			_data = new T[_size];
			for (unsigned int i = 0; i < _size; ++i) {
				_data[i] = other._data[i];
			}
		}

		~Array() {
			delete[] _data;
		}
		
		Array &operator = (const Array &other)
        {
            if (this != &other)
            {
                if (_data != nullptr)
                    delete _data;
                _size = other._size;
                _data = new T[_size];
                for (unsigned int i = 0; i < this->_size; i++)
                    _data[i] = other._data[i];
            }
            return (*this);
        }

		void Erase()
		{
			delete[] _data;
			_data = nullptr;
			_size = 0;
		}
	
		T& operator[](unsigned int index)
		{
			if (index < 0 || index >= _size)
				throw std::exception();
			return *(_data + index);
		}
	
		void print()
		{
			for (unsigned int i = 0; i < _size; i++)
				std::cout << *(_data + i) << " ";
			std::cout << std::endl;
		}

		unsigned int size() { return _size; }
};

#endif