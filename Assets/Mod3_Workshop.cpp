// For modulo 3 
//Workshop 3 – Pointers, References & STL

// 3.02

#include <iostream>
#include <cstdlib>
#include <chrono>
using namespace std;	
using namespace std::chrono;

//int main() {
//
//	const int Size = 10;
//	int x;
//
//	double A[Size];
//	double B[Size];
//	double C[Size];
//
//	for (x = 0; x < Size -1; x++) 
//	{
//		A[x] = static_cast<float>(rand()) / RAND_MAX;
//		B[x] = static_cast<float>(rand()) / RAND_MAX;
//		C[x] = static_cast<float>(rand()) / RAND_MAX;
//
//	}
//
//
//	//Display
//	//A
//	cout << "Array A before sorting: [";
//	for (x = 0; x < Size - 1; x++)
//	{
//		cout << A[x] << " ";
//	}
//	cout << endl;
//	//B
//	cout << "Array B before sorting: [";
//	for (x = 0; x < Size - 1; x++)
//	{
//		cout << B[x] << " ";
//	}
//
//	cout << endl;
//	//C
//
//	cout << "Array C before sorting: [";
//	for (x = 0; x < Size - 1; x++)
//	{
//		cout << C[x] << " ";
//	}
//
//	//Multiplication 
//
//	for (x = 0; x < Size - 1; x++)
//	{
//		C[x] = A[x] * B[x];
//	}
//	cout << endl;
//	cout << "Array C after multiplication: [";
//	for (x = 0; x < Size - 1; x++)
//	{
//		cout << C[x] << " ";
//	}
//}

//3.03 Dynamic Array with pointer / 
//int main() {
//
//
//	
//	int Size;
//	cout << "Enter size of the arrays: ";
//	cin >> Size;
//	int x;
//	//3.04
//	double *A = new double[Size];
//	double *B = new double[Size];
//	double *C = new double [Size];
//
//	for (x = 0; x < Size - 1; x++)
//	{
//		A[x] = static_cast<float>(rand()) / RAND_MAX;
//		B[x] = static_cast<float>(rand()) / RAND_MAX;
//		C[x] = static_cast<float>(rand()) / RAND_MAX;
//
//	}
//
//
//	//Display
//	//A
//	cout << "Array A before sorting: [";
//	for (x = 0; x < Size - 1; x++)
//	{
//		cout << A[x] << " ";
//	}
//	cout << endl;
//	//B
//	cout << "Array B before sorting: [";
//	for (x = 0; x < Size - 1; x++)
//	{
//		cout << B[x] << " ";
//	}
//
//	cout << endl;
//	//C
//
//	cout << "Array C before sorting: [";
//	for (x = 0; x < Size - 1; x++)
//	{
//		cout << C[x] << " ";
//	}
//
//	//Multiplication 
//
//	for (x = 0; x < Size - 1; x++)
//	{
//		C[x] = A[x] * B[x];
//	}
//	cout << endl;
//	cout << "Array C after multiplication: [";
//	for (x = 0; x < Size - 1; x++)
//	{
//		cout << C[x] << " ";
//	}
//
//	delete[] A;
//	delete[] B;
//	delete[] C;	
//}
//


//3.05 Instrumentation
// Measuring time taken to execute a loop that only prints once ----0 mil

int Second() {

	int x;
	int loop1 = 100;
	// Starting timing
	auto start1 = chrono::high_resolution_clock::now();

	for (x = 0; x < 100; x++)
	{
		if (x == 0) { cout << "test" << endl; }

	}

	// Ending time
	auto stop1 = chrono::high_resolution_clock::now();
	auto duration1 = chrono::duration_cast<chrono::milliseconds>(stop1 - start1);

	cout << "Time taken for the second operation: " << duration1.count() << " milliseconds\n";

	return 0;
}
// Measuring time taken to execute a loop that prints "test" 100 times -- 5 mil
int main() {

	int x;
	int loop = 100;
	// Starting timing
	auto start = chrono::high_resolution_clock::now();
	
	for (x = 0; x < 100; x++)
	{
		cout << "test" << endl;
	}

	// Ending time
	auto stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);

	cout << "Time taken for the operation: " << duration.count() << " milliseconds\n";
	cout << " " << endl;


	Second();
}




