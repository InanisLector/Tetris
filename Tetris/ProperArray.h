#ifndef PROPER_ARRAY_H_
#define PROPER_ARRAY_H_

template<typename T>
class Array {
private:
	T* _array;
	unsigned int _length;

	inline unsigned length() { return _length; }

	Array(unsigned int length){
		_length = length;
		_array = new T[length];
	}

	~Array() {
		delete[] _array;
	}

	T operator[] (unsigned int i) { return _array[i]; }
};

template<typename T>
class TwoDimArray {
private:
	T** _array;
	unsigned int _width;
	unsigned int _height;
	unsigned int _length;

	inline unsigned int width() { return _width; }
	inline unsigned int height() { return _height; }
	inline unsigned int length() { return _length; }

	TwoDimArray(unsigned int width, height) {
		_width = width;
		_height = _height;
		_length = width * height;
		
		_array = new T*[height];

		for (unsigned int i = 0; i < _height; i++) {
			_array[i] = new T[width];
		}
	}

	~TwoDimArray() {
		for (unsigned int i = 0; i < _height; i++) {
			delete[] _array[i];
		}

		delete[] _array;
	}

	T operator[] (unsigned int x, unsigned int y) { return _array[x][y]; }
};

#endif