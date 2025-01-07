#pragma once

#include <iostream>

using namespace std;



template <class T> class MyDynamicArray
{

protected:

	int _Size = 0;

	T* _TempArray;

public:

	T* OriginalArray;

	MyDynamicArray(int Size = 0) {

		if (Size < 0)
			Size = 0;

		_Size = Size;

		OriginalArray = new T[_Size];

	}

	~MyDynamicArray()
	{
		delete[] OriginalArray;

	}

	bool SetItem(int Index, T value) {


		if (Index >= _Size || Index < 0) {
			return false;
		}


		OriginalArray[Index] = value;

		return true;

	}
	
	int Size() {

		return _Size;

	}

	bool IsEmpty() {

		return (_Size == 0 ? true : false);

	}

	void Resize(int NewSize) {

		if (NewSize < 0)
			return;

		_TempArray = new T[NewSize];

		for (int i = 0; i < NewSize; i++) {

			_TempArray[i] = OriginalArray[i];

		}

		_Size = NewSize;

		delete[] OriginalArray;

		OriginalArray = _TempArray;

	}

	T GetItem(int Index) {

		if (Index < 0 || Index >= _Size)
			return false;

		return OriginalArray[Index];

	}

	void Reverse() {

		_TempArray = new T[_Size];

		for (int i = 0; i < _Size; i++) {

			_TempArray[i] = OriginalArray[_Size - i - 1];

		}
		
		delete[] OriginalArray;

		OriginalArray = _TempArray;

	}

	void DeleteFirstItem() {

		DeleteItem(0);

	}

	void DeleteLastItem() {

		DeleteItem(_Size - 1);

	}

	int FindIndex(T Value) {

		for (int i = 0; i < _Size; i++) {

			if (OriginalArray[i] == Value) {
				return i;
			}

		}

		return -1;

	}

	void DeleteValue(T Value) {

		int Index = FindIndex(Value);

		if (Index == -1)
			cout << "Diese Value existiert nicht" << endl;
			return;

		DeleteItem(Index);

	}

	void InsertAt(int Index, T Value) {

		if (Index > _Size || Index < 0)
			return;

		_Size++;

		int counter = 0;

		_TempArray = new T[_Size];

		for (int i = 0; i < _Size; i++) {

			if (i == Index) {
				_TempArray[i] = Value;
				i++;
			}

			_TempArray[i] = OriginalArray[counter];

			counter++;

		}

		delete[] OriginalArray;

		OriginalArray = _TempArray;

	}

	void InsertAtBeginn(T Value) {

		InsertAt(0, Value);

	}

	void InsertAtEnde(T Value) {

		InsertAt(_Size , Value);

	}

	void InsertAfter(int Index, T Value) {

		InsertAt(Index + 1, Value);

	}

	void InsertBefore(int Index, T Value) {

		InsertAt(Index-1, Value);

	}

	void Clear() {

		_Size = 0;

		_TempArray = new T[0];

		delete[] OriginalArray;

		OriginalArray = _TempArray;

	}

	void DeleteItem(int Index) {

		if (Index >= _Size || Index < 0)
			return;

		_TempArray = new T[_Size - 1];

		int counter = 0;

		for (int i = 0; i < _Size; i++) {

			if (i != Index) {

				_TempArray[counter] = OriginalArray[i];

				counter++;

			}

		}

		delete[] OriginalArray;

		_Size--;

		OriginalArray = _TempArray;

	}

	void PrintList() {

		for (int i = 0; i < _Size; i++) {

			cout << OriginalArray[i] << " ";

		}

		cout << endl;

	}


};

