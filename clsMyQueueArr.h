#pragma once

#include <iostream>

#include "MyDynamicArray.h"

using namespace std;

template <class T> class clsMyQueueArr
{

	MyDynamicArray <T> _OriginalArr;

public:

	void push(T value) {

		_OriginalArr.InsertAtEnde(value);

	}

	void pop() {

		_OriginalArr.DeleteFirstItem();

	}

	void Print() {

		_OriginalArr.PrintList();

	}

	int Size() {

		return _OriginalArr.Size();

	}

	T front() {

		return _OriginalArr.GetItem(0);

	}

	T back() {

		return _OriginalArr.GetItem(Size() - 1);

	}

	T GetItem(int Index) {

		return _OriginalArr.GetItem(Index);

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

	void InsertAtFront(T value) {

		_OriginalArr.InsertAtBeginn(value);

	}

	void InsertAtBack(T value) {

		_OriginalArr.InsertAtEnde(value);

	}

	void Clear() {

		_OriginalArr.Clear();

	}


};

