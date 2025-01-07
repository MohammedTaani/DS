#pragma once

#include<queue>
#include<iostream>
#include"clsDblLinkedList.h"

using namespace std;


template <class T> class clsMyQueue
{

protected:

	clsDblLinkedList <T> _MyList;

public:

	void push(T Item) {
		_MyList.InsertAtEnde(Item);
	}

	
	void Pop() {
		_MyList.DeleteFirstNode();
	}


	void Print() {
		_MyList.Print();
	}


	int Size() {
		return _MyList.LinkedSize();
	}


	bool IstEmpty() {

		return _MyList.IstEmpty();

	}

	T front() {

		return _MyList.GetNumVonBestimmteNode(0);

	}


	T back() {

		return _MyList.GetNumVonBestimmteNode(Size());

	}

	T GetItem(int Index) {

		return _MyList.GetNode(Index);

	}


	void Reverse() {

		_MyList.Revers();

	}

	void UpadteItem(int Index, T NewValue) {

		_MyList.UpdateItem(Index, NewValue);

	}

	void InsertAfter(int Index, T NewValue) {

		_MyList.InsertAfter(Index, NewValue);

	}


	void InsertAtFront(T NewValue) {

		_MyList.InsertAtBeginning(NewValue);

	}


	void InsertAtEnde(T NewValue) {

		_MyList.InsertAtEnde(NewValue);

	}


	void Clear() {

		_MyList.Clear();

	}


};

