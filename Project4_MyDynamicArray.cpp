// Project4_MyDynamicArray 
#include <iostream>
#include "clsDynamicArray.h";
using namespace std;

int main()
{
	clsDynamicArray <int> MyDynamicArray1(5);

	MyDynamicArray1.SetItem(0, 10);
	MyDynamicArray1.SetItem(1, 20);
	MyDynamicArray1.SetItem(2, 30);
	MyDynamicArray1.SetItem(3, 40);
	MyDynamicArray1.SetItem(4, 50);



	cout << "\nArray1 before: \n";
	MyDynamicArray1.Print();
	cout << "\n\nArray1 Size: " << MyDynamicArray1.Size();
	
	cout << "\n\n---------------------------\n";

	cout << "\nArray1 InsertAtBeginning(99): \n";
	MyDynamicArray1.InsertAtBeginning(99);
	MyDynamicArray1.Print();

	cout << "\nArray1 InsertAtEnd(99): \n";
	MyDynamicArray1.InsertAtEnd(99);
	MyDynamicArray1.Print();
	
	cout << "\nArray1 InsertBefore(2, 77): \n";
	MyDynamicArray1.InsertBefore(2, 77);
	MyDynamicArray1.Print();

	cout << "\nArray1 InsertAfter(2, 88): \n";
	MyDynamicArray1.InsertAfter(2, 88);
	MyDynamicArray1.Print();



	system("pause>0");
	return 0;
}
