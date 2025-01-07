#pragma once

#include <iostream>

#include "MyDynamicArray.h"

template <class T> class clsMyStackArr
{


protected:

	MyDynamicArray <T> _OriginalArr;

public:

	void push(T value) {

		_OriginalArr.InsertAtBeginn(value);

	}

	void pop() {

		_OriginalArr.DeleteFirstItem();

	}

	int Size() {

		return _OriginalArr.Size();

	}

	T Top() {

		return _OriginalArr.GetItem(Size - 1);

	}

	T Bottom() {

		return _OriginalArr.GetItem(0);

	}

	T GetItem(int Index) {

		return _OriginalArr.GetItem(Index);

	}

	void Print() {

		_OriginalArr.PrintList();

	}

	void Reverse() {

		_OriginalArr.Reverse();

	}

	void UpdateItem(int Index, T value) {

		_OriginalArr.SetItem(Index, value);

	}

	void InsertAfter(int Index, T value) {

		_OriginalArr.InsertAfter(Index, value);

	}

	void InsertBefore(int Index, T value) {

		_OriginalArr.InsertBefore(Index, value);

	}

	void InsertAtTop(T value) {

		_OriginalArr.InsertAtBeginn(value);

	}

	void InsertAtBotton(T value) {

		_OriginalArr.InsertAtEnde(value);

	}

	void Clear() {

		_OriginalArr.Clear();

	}




};

