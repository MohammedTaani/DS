#pragma once

#include <iostream>
using namespace std;

template<class T> class clsDblLinkedList
{

	int _Size = 0;

public:


	class Node {

	public:

		T Num;

		Node* Next;
		Node* Pev;

	};


	Node* Head = new Node();

	void InsertAtBeginning(T Num) {

		Node* NewLink = new Node();

		NewLink->Num = Num;
		NewLink->Next = Head;
		NewLink->Pev = NULL;

		if (Head != NULL)
			Head->Pev = NewLink;

		Head = NewLink;

		_Size++;

	}

	Node* Find(T Num) {

		Node* NewLinked = Head;

		while (NewLinked->Num != Num) {

			NewLinked = NewLinked->Next;
			
			if (NewLinked == NULL) {
				return NULL;
			}


		}

		return NewLinked;

	}


	void InsertAfter(Node*& GefundeneNode, T Num) {


		if (GefundeneNode == NULL)
			return;

		Node* NewNode = new Node();

		NewNode->Num = Num;
		if (GefundeneNode == NULL) {
			NewNode->Next = NULL;
		}
		else {
			NewNode->Next = GefundeneNode->Next;

		}


		NewNode->Pev = GefundeneNode;
		
		Node* Temp = NULL;


		if (GefundeneNode != NULL && GefundeneNode->Next != NULL) {
			Temp = GefundeneNode->Next;
			Temp->Pev = NewNode;

		}



		GefundeneNode->Next = NewNode;
		
		_Size++;
		
	}

	void InsertAtEnde(T Num) {

		if (Head == NULL) {

			Head->Num = Num;
			Head->Pev = NULL;
			Head->Next = NULL;

			return;

		}

		Node* NewNode = Head;

		while (NewNode->Next != NULL)
			NewNode = NewNode->Next;

		Node* N1 = new Node();

		N1->Num = Num;
		N1->Next = NULL;
		N1->Pev = NewNode;

		NewNode->Next = N1;

		_Size++;

	}

	void Delete(Node*& GefundeneNode) {


		if (GefundeneNode == NULL)
			return;

		if (Head == NULL)
			return;

		Node* NewNode = Head;
		

		while (NewNode->Next != GefundeneNode) {
			
			NewNode = NewNode->Next;

		}

		NewNode->Next = GefundeneNode->Next;

		Node* Temp = GefundeneNode->Next;

		Temp->Pev = NewNode;

		delete GefundeneNode;

		_Size--;

	}

	void DeleteFirstNode() {

		if (Head == NULL) {
			return;
		}

		Node* NewNode = Head;

		Head = NewNode->Next;

		if (Head != NULL)
			Head->Pev = NULL;
		

		delete NewNode;

		_Size--;

	}

	void DeleteLastNode() {

		if (Head == NULL || Head->Next == NULL) {
			
			Head = NULL;

			return;
		}

		

		Node* N1 = Head;
		Node* N2 = Head;

		while (N1->Next != NULL) {

			N2 = N1;
			
			N1 = N1->Next;

		}

		N2->Next = NULL;

		delete N1;

		_Size--;

	}

	int LinkedSize() {

		return _Size;

	}

	bool IstEmpty() {

		return (_Size == 0 ? true : false);

	}

	void Clear() {

		while (_Size > 0)
			DeleteFirstNode();

	}


	void Revers() {

		Node* Current = Head;

		Node* N1 = NULL;

		while (Current != NULL) {

			N1 = Current->Pev;
			Current->Pev = Current->Next;
			Current->Next = N1;
			Current = Current->Pev;

		}

		if (N1 != NULL)
			Head = N1->Pev;


	}

	int GetNumVonBestimmteNode(int Value) {

		Node* GewalteNode = GetNode(Value);

		return GewalteNode->Num;

	}


	Node* GetNode(int Value) {

		Node* NewNode = new Node();
		NewNode->Num = 0;

		if (_Size == 0 || Value < 0) {
			return NewNode;
		}

		Node* Temp = Head;

		for (int Num = 0; Num < Value; Num++) {

			Temp = Temp->Next;

			if (Temp == NULL) {

				return NewNode;

			}


		}

		return Temp;

	}

	void UpdateItem(int NodeNumber, T NewValue) {

		Node* N1 = GetNode(NodeNumber);

		if (N1 != NULL)
			N1->Num = NewValue;



	}

	void InsertAfter(int NodeNumber, T NewValue) {

		Node* NewNode = GetNode(NodeNumber);

		if (NewNode != NULL) {
			InsertAfter(NewNode, NewValue);
		}

	}


	void Print() {

		if (Head == NULL)
			return;

		Node* Current = Head;

		while (Current != nullptr) {

			cout << Current->Num << " ";

			Current = Current->Next;

		}

		cout << endl;

	}


};

