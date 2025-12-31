// For modulo 3 
//Workshop 3 – Pointers, References & STL

// 3.02

#include <iostream>
#include <cstdlib>
using namespace std;	

int main() {

	const int Size = 10;
	int x;

	double A[Size];
	double B[Size];
	double C[Size];

	for (x = 0; x < Size -1; x++) 
	{
		A[x] = static_cast<float>(rand()) / RAND_MAX;
		B[x] = static_cast<float>(rand()) / RAND_MAX;
		C[x] = static_cast<float>(rand()) / RAND_MAX;

	}


	//Display
	//A
	cout << "Array A before sorting: [";
	for (x = 0; x < Size - 1; x++)
	{
		cout << A[x] << " ";
	}
	cout << endl;
	//B
	cout << "Array B before sorting: [";
	for (x = 0; x < Size - 1; x++)
	{
		cout << B[x] << " ";
	}

	cout << endl;
	//C

	cout << "Array C before sorting: [";
	for (x = 0; x < Size - 1; x++)
	{
		cout << C[x] << " ";
	}

	//Multiplication 

	for (x = 0; x < Size - 1; x++)
	{
		C[x] = A[x] * B[x];
	}
	cout << endl;
	cout << "Array C after multiplication: [";
	for (x = 0; x < Size - 1; x++)
	{
		cout << C[x] << " ";
	}
}