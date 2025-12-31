#include <iostream>
#include "HEader_FUNCTION.h"
using namespace std;

//
//int adder(int _a, int _b) 
//{
//	int c = _a + _b;
//	return c;
//
//}
//
//void main() {
//	int a;
//	int b;
//	
//	cout << "Print the number (a) ";
//	cin >> a;
//	cout << "Print the number (b) ";
//	cin >> b;
//
//	int result = adder(a, b);
//	cout << result << endl;
//}

// Worksop task 1

//void printHello() {
//	cout << "Hello!" << endl;
//}
//
//
//void main() 
//{
//	int Yime = 0;
//	cout << "enter the loop times: ";
//	cin >> Yime;
//
//	for (int i = 0; i < Yime; i++) {
//		printHello();
//
//	}
//
//}

//task2 
//void printHi(int n) {
//	for (int i = 0; i < n; i++) {
//		cout << "H!" << endl;
//	}
//}
//
//
//void main() 
//{
//	int Yime = 0;
//	cout << "enter the loop times: ";
//	cin >> Yime;
//	printHi(Yime);
//}


//task3

//int printHi() {
//	int n = 0;
//	bool again = false;
//
//	cout << "Do you want tot say Hello ! ? [yes = 1 , No = 0]: ";
//	cin >> again;
//	while (again == true) {
//		cout << "Hello !" << endl;
//		n++;
//		cout << "Do you want tot say Hello ! ? [yes = 1 , No = 0]: ";
//		cin >> again;
//	}
//	return n;
//		
//	}
//	
//	
//int main() 
//	{
//	int total = 0;
//	total = printHi();
//	cout << "Hello was printed " << total << " times." << endl;
//	}


// Task 4

struct  Pizza {
	string name;
	double cost;
	bool Islarge;
};

void makePizza(string name_) {

}

int main() {

	vector<Pizza> pizza;
	bool morePizza = true;
	string _name;
	double _cost;
	bool _Large;
	cout << "want to order more Pizza ? : [1 or 0] : ";
	cin >> morePizza;

	while (morePizza = true) {
		cout << "Name of the pIzza" << endl;
		cin >> _name;
		cout << "Cost of the pIzza" << endl;
		cin >> _cost;
		cout << "Size of the pIzza" << endl;
		cin >> _Large;
		pizza.push_back(makePizza(_name
		))

		cout << "Do you want tot say Hello ! ? [yes = 1 , No = 0]: ";
		cin >> morePizza;
	}



}

