#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include <stack>

using namespace std;

template <class T> class clsMyStack :public clsMyQueue <T>
{


public:


	void Push(T Value) {

		clsMyQueue <T>::_MyList.InsertAtBeginning(Value);

	}

	T Top() {

		return clsMyQueue <int>::front();

	}
	
	T Botton() {

		return clsMyQueue<int>::back();

	}



};

