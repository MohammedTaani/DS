
#include <iostream>


#include "clsString.h"

using namespace std;

int main() {


    clsString S1;

    S1.Value = "Mohammed";
    cout << S1.Value << endl;
    S1.Value = "M2";
    cout << S1.Value << endl;

    S1.Value = "M3";

    cout << S1.Value << endl;


    cout << "Undo : " << endl;

    S1.Undo();

    cout << S1.Value << endl;

    S1.Undo();

    cout << S1.Value << endl;


    cout << "Redo : " << endl;

    S1.Redo();

    cout << S1.Value << endl;




}






/*

#include <iostream>

#include "clsMyStack.h"

using namespace std;

int main() {

    clsMyStack<int> _MyList;

    _MyList.Push(10);
    _MyList.Push(20);
    _MyList.Push(30);
    _MyList.Push(40);
    _MyList.Push(50);

    _MyList.Print();

    return 0;

}

*/

/*

#include <iostream>
#include"clsMyQueue.h"

using namespace std;

int main() {

    clsMyQueue<int> _MyList;

    _MyList.push(1);
    _MyList.push(2);
    _MyList.push(3);
    _MyList.push(4);
    _MyList.push(5);

    _MyList.Print();

    cout << _MyList.front() << endl;

    cout << _MyList.back() << endl;

    _MyList.Pop();
    _MyList.Pop();

    _MyList.Print();

    


}

*/

/*

#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main()
{

    clsDblLinkedList<int> MyDblLinkedList;

    //Insert at Beginning
    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);


    //IstEmpty

    if (MyDblLinkedList.IstEmpty()) {
        cout << "Linked List is Empty\n";
    }
    else {
        cout << "Linked list ist nicht Leer\n";
    }

    //Print
    cout << "Linked List Content : " << endl;
    MyDblLinkedList.Print();
    cout << "---------------------" << endl;


    //Find
    clsDblLinkedList<int>::Node* N1 = MyDblLinkedList.Find(2);
    if (N1 != NULL) {
        cout << "Node with value " << N1->Num << " is Found\n";
    }
    else {
        cout << "Node is not Found\n";
    }

    //Size
    cout << "Size : " << MyDblLinkedList.LinkedSize() << endl;


    //Get Node
    clsDblLinkedList<int>::Node* N2 = MyDblLinkedList.GetNode(3);
    cout << "Value : " << N2->Num << endl;

    MyDblLinkedList.UpdateItem(3, 500);
    MyDblLinkedList.Print();
    cout << "---------------------" << endl;


    //Insert After
    MyDblLinkedList.InsertAfter(6, 200);
    MyDblLinkedList.Print();


    //Reverse
    MyDblLinkedList.Revers();
    MyDblLinkedList.Print();
    cout << "---------------------" << endl;



    //Clear
    MyDblLinkedList.Clear();
    cout << MyDblLinkedList.LinkedSize() << endl;


    return 0;

}

*/