// (c) Tivole

#include <iostream>
#include "Ti_AVL_Tree.hpp"
using namespace std;

void Test_1();
void Test_2();

int main() {

	getchar();

	Test_1(); // Adding Elements and show Tree
	getchar();
	system("clear");

	Test_2(); // Adding and deleting elements
	getchar();
	system("clear");

	return 0;
}

void Test_1() {
	cout << "\t\t\t\tTest 1 \n" << endl;
	int i, j, element;
	Ti_AVL_Tree avl;
	for (i = 0; i < 20; i++) {

		if (i%2) element = i;
		else element = 20 - i;

		// avl.root = avl.AddElement(element, avl.root, &grow);
		avl.AddElement(element);

		cout << endl;
		for(j = 0; j < 80; j++) cout << "-";
		cout << endl;
		cout << "Adding " << element;

		cout << endl << " Up Down: ";
		avl.UpDown();
		cout << endl << " Left Right: ";
		avl.LeftRight();
		cout << endl << " Down Up: ";
		avl.DownUp();

		avl.Ti_Show();
	}
	cout << endl << endl;
}

void Test_2() {
	cout << "\t\t\t\tTest 2 " << endl;
	Ti_AVL_Tree avl;
	int i;
	int list[] = {20, 1, 18, 3, 16, 5, 14, 7, 12};
	int rem[] = {7, 20};
	for(i = 0; i < 9; i++) {
		avl.AddElement(list[i]);
	}
	for(i = 0; i < 2; i++) {
		avl.DeleteElement(rem[i]);
	}
	cout << endl;
	avl.LeftRight();
	avl.Ti_Show();
}
