// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << "cows size : " << cows.size() << endl << "cows sum: " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << "cows size : " << cows.size() << endl << "cows sum: " << cows.sum() << endl << endl;
	
	cows.insertAsLast(3);
	cout << "insert as last" << endl;
	cout << "cows list  :  " << cows << endl << "cows size : " << cows.size() << endl << "cows sum: " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list:  " << cows << endl << cows.size() << endl << "cows sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << horses.size() << endl << "horses sum: " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl << "cows size : " << cows.size() << endl << "cows sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << "horses size : " << horses.size() << endl << "horses sum: " << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << "pigs size : " << pigs.size() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "cows size : " << cows.size() << endl;
	cout << "horses size : " << horses.size() << endl;
	cout << "pigs size : " << pigs.size() << endl;

	cout << "End of code" << endl;
	cout  << endl;
	system("pause");

	return 0;
}
