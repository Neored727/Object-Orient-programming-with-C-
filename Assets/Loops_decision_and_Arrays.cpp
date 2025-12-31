#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//2.01
//int main() 
//{
//// Intitialize variables 
//	int User_input;
//	int i;
//
////Get the user input
//
//	cout << " Enter num: ";
//	cin >> User_input;
//	
//	for (i = 0; i < User_input; i++) {
//	
//		cout << "hello" << endl;
//	}
//
//}

//2.02
//int main() 
//{
//// Intitialize variables 
//	int User_input;
//	int i;
//
////Get the user input
//
//	cout << " Enter num: ";
//	cin >> User_input;
//	
//	for (i = User_input; i >= 0; --i) {
//	
//		cout << i << endl;
//	}
//
//	cout << "Bast OFF!!!" << endl;
//


//2.03
//int main()
//{
//	// Intitialize variables 
//	int User_input;
//	int i;
//
//
//
//	//Get the user input
//
//	cout << " Enter num for times table: ";
//	cin >> User_input;
//
//	for (i = 0; i < User_input; i++) {
//
//		cout << i << "x" << User_input << " = " << (i * User_input) << endl;
//	}
//	return 0;
//}

	
//2.04
//int main()
//{
//	// Intitialize variables 
//	int User_input;
//	int i;
//	int j;
//
//
//
//
//	//Get the user input
//
//	cout << " Enter num for times table: ";
//	cin >> User_input;
//
//	for (i = 0, j = 0; i < User_input; i++, j=i * User_input) {
//
//		cout << i << "x" << User_input << " = " << j << endl;
//	}
//	return 0;
//}


//2.05

//Array od 20 random integers between 1 and 10

//int main() {
//
//	
//
//	//Initializing 
//	int Array_size; //Size of Array of 20 integers
//
//	//Let the user decide the size of array
//	cout << " Enter size of array: ";
//	cin >> Array_size;
//
//	int* Array = new int [Array_size];
//	int i;
//
//	srand(time(0));
//
//	//Creating random numbers
//
//	for (i = 0; i < Array_size; i++) 
//	{
//		Array[i] = rand() % 11; // generates a random number ad divide it by 11 to get a number between 0 and 10 as the remainder
//	}
//
//
//	cout << "The random numbers are: [";
//	// For loop to disppplay
//	for (i = 0; i < Array_size; i++)
//	{
//
//		cout << Array[i] << " ";
//	}
//
//	cout << " ]";
//
//}


//2.06
//Creating the fibanachi sequence 

//int main() {
//
//	//initialize variables
//
//	
//	const int Array_size = 20;
//	int Array[Array_size];
//
//	//Two initial fiv=banchi numbers 
//	Array[0] = 0;
//	Array[1] = 1;
//	int i;
//
//	//Gen sequence 
//	for (i = 2; i < Array_size; i++)
//	{
//		Array[i]  = Array[i - 1] + Array[i - 2];
//	}
//
//	cout << "The fibancachi sequence Array [ 0 1 ";
//
//	//Displaying the fibanacchi sequence
//
//	for (i = 0; i < Array_size; i++)
//	{
//		cout << Array[i] << " ";
//	}
//
//	cout << " ]";
//}



