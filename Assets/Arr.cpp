// ARRAYS and STRING

#include <iostream>
using namespace std;

//int main() {
//    // Initializing arrays
//    int numbers[5] = { 1, 2, 3, 4, 5 };
//    double scores[5] = { 98.5, 87.5, 78.5, 88.5, 92.5 };
//    char name[6] = "ABCDE";               // null-terminated C-string
//    char phrase[20] = "Hello, World!";
//
//    // Displaying arrays
//    cout << "Numbers: " << numbers[4] << endl;
//    cout << "Scores: " << scores[2] << endl;
//    cout << "Name char: " << name[3] << endl;
//    cout << "Phrase char: " << phrase[1] << endl;
//
//    return 0;
//}
//
//


//Using Loops to process arrays

//int main() {
//	//Initializing an array
//	int numbers[5] = { 10, 20, 30, 40, 50 };
//	cout << numbers[2] << endl; // Printing 30
//	//Using a for loop to process the array
//
//	for (int i = 0; i < 5; i++) {
//		cout << numbers[i] << endl;
//	}
//	return 0;
//}

//Using parallel arrays to get heigh weight info of person 1 - 5

int main() {
	const int num_parts = 4;
	int Client_Input;

	//Defining which number validates which user
	const char Janith = 1;
	const char Kuara = 2;
	const char Senna = 3;
	const char Jan = 4;
	const char Anik = 5;

	//Row of Person and two culomn of height and weight
	double person_height[num_parts] = { 7.2, 6.8, 6.5, 7.0 };
	int person_weight[num_parts] = { 180, 150, 120, 160 };

	cout << "Janith = 1" << endl;
	cout << "Kuara = 2" << endl;
	cout << "Senna = 3" << endl;
	cout << "Jan = 4" << endl;
	cout << "Anik = 5" << endl;
	cout << "" << endl;
 
	cout << "Which person, do you need the info on: ";
	cin >> Client_Input;

	switch (Client_Input) {
	case 1: cout << "Janith's height is " << person_height[0] << " feet and weight is " << person_weight[0] << " pounds." << endl; break;
	case 2: cout << "Kuara's height is " << person_height[1] << " feet and weight is " << person_weight[1] << " pounds." << endl; break;
	case 3: cout << "Senna's height is " << person_height[2] << " feet and weight is " << person_weight[2] << " pounds." << endl; break;
	case 4: cout << "Jan's height is " << person_height[3] << " feet and weight is " << person_weight[3] << " pounds." << endl; break;
	}

	}




