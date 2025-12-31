// The While lops 

# include <iostream>
#include <string>
using namespace std;

//int main() {
	//	int const NUMBER = 5;
	//	int count = 0;
	//
	//	while (count < NUMBER) {
	//		cout << "This is while loops" << endl;
	//		count++;
	//	}


	//	char Answer;
	//	cout << "Give an input that is either 'T' or 'F' : ";
	//	cout << "Answer: ";
	//	cin	>> Answer;
	//
	//	while (Answer != 'T' && Answer != 'F') {
	//		cout << "The answer is Invalid...Please try again"<< endl;
	//		cout << "Answer: ";
	//		cin >> Answer;
	//	}
	//
	//	if (Answer == 'T') {
	//		cout << "Your response is True" << endl;
	//	}
	//	else  cout << "Your response is False ";



	// Testing find string function

//int main() {
//	//Intitialize variables
//	string input;
//	string Stringpattern = "Neo";
//	int StringAppearance = 0;
//	// Questions 
//	cout << "Type some text and include " << Stringpattern << "in it: ";
//	
//	//Get users input and store it in the variabe 
//	getline(cin, input);
//
//	// Searching fo how many times the Stringpattern has been seen in the input text
//
//	for (int i = input.find(Stringpattern, 0); // Starting point of the search -->produce either index or strin::npos
//		i != string::npos; // Condition in which determines if the patern was found or not (If found --> True)
//		i = input.find(Stringpattern, i)) // New starting point of the next search if condition is true
//	{
//		StringAppearance++; // Increment the counter each time the pattern is found
//		i++; // Move to the next character to avoid infinite loop
//     }
//
//	// i has been iterated when the pattern was found and not found in both times (needs to be studied further)
//
//	cout << "Pattern: " << Stringpattern << endl;
//	cout << "Number of Appearances " << StringAppearance << endl;
//
//	return 0;
//
//
//}

// For loops through Arrays 

//int main() 
//{
//	//Intitializing variables
//	const int NUM_PRICES = 10;
//	double price[NUM_PRICES];
//	int sub;
//
//	//Looping point'
//
//	for (sub = 0; sub < NUM_PRICES; ++sub)
//	{
//		cout << "Enter Price: $";
//		cin >> price[sub]; //Sub is the index of the array
//	}
//
//	// Displaying the prices entered
//	cout << "The prices you entered are: ";
//	for (sub = 0; sub < NUM_PRICES; ++sub)
//	{
//		cout << price[sub] << " ";
//	}
//	
//	// Reversing order if the pricess 
//	cout << "\nThe prices in reverse order are: ";
//	for (sub = NUM_PRICES - 1; sub >= 0; --sub)
//	{
//		cout << "Enter Price: $";
//		cin >> price[sub]; //Sub is the index of the array
//	}
//
//	// Displaying the prices entered
//	cout << "The prices you entered are: ";
//	for (sub = 0; sub < NUM_PRICES; ++sub)
//	{
//		cout << price[sub] << " ";
//	}
//
//
//	return 0;
//
//}

// Range Based for loops 
int main() 
{
	double prices[] = { 9.99,14.5,8.6 };
	cout << "The prices are : ";

	for (double p : prices)
	{
		cout << p << " ";
	}
}