#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <exception>


template<class T> class Array {
private:
	unsigned int _arraySize;
	T* _array;
public:
	Array( void )			: _arraySize(0), _array(new T[_arraySize]) {};

	Array( unsigned int n )	: _arraySize(n), _array(new T[_arraySize]) {
		for (unsigned int i = 0; i < _arraySize; ++i)
			this->_array[i] = T();
	};

	Array( const Array& other ) : _arraySize(other._arraySize), _array(new T[_arraySize]) {
		for (unsigned int i = 0; i < _arraySize; ++i)
			this->_array[i] = other._array[i];
	};

	Array& operator=( const Array& other ) {
		if (this == &other) {return(*this);}
		delete[] this->_array;
		this->_array = new T[this->_arraySize];
		for (unsigned int i = 0; i < _arraySize; ++i) {
			this->_array[i] = other._array[i];
		}
	};

	~Array() { delete[] this->_array; };

	unsigned int size( void ) { return(this->_arraySize); };

	class outOfBoundsException : public std::exception {
	public:
		const char* what() const throw() {
			return("Index is out of bounds of array.");
		}
	};

	T& operator[](unsigned int index) {
		if (index >= this->_arraySize)
			throw (outOfBoundsException());
		return (_array[index]);
	};
};

#endif
