//Imagine a small student club program.The program stores the names of the club president and club vice president as C - style strings().The programmer wants to check if both positions are held by the same person.
//But they accidentally use  to compare the arrays, which doesn’t compare the contents — it compares memory addresses.

# include <iostream>
#include <string>
using namespace std;

//Wrong coding 

//int main(){
//	//Storing names of the club president and vice president
//	char clubPresident[] = "Alice";
//	char clubVicePresident[] = "Alice";
//	
//
//	//Comparing if both are same using "==" operator
//
//	if (clubPresident == clubVicePresident) {
//		cout << "They are the same person" << endl;
//	}
//	else {
//		cout << "They are different" << endl;
//	}
//	return 0;
//	}

//Correct coding 
//int main(){
//	//Storing names of the club president and vice president
//	char clubPresident[] = "Alice";
//	char clubVicePresident[] = "Alice";
//	
//
//	//Comparing if both are same using "==" operator
//
//	if (strcmp(clubPresident,clubVicePresident)) {
//		cout << "They are the same person" << endl;
//	}
//	else {
//		cout << "They are different" << endl;
//	}
//	return 0;
//	}


//Using string class 

//int main() {
//	string name1 = "Mary";
//	string naame2 = "Diane";
//
//	cout << "The name1 = " << name1 << endl;
//	cout << "The name2 = " << naame2 << endl;
//
//	//Assiging different value to name2
//	name1 = "Different";
//	cout << "After assigning different value to name2" << endl;
//	cout << "The name1 = " << name1 << endl;
//    
//	return 0;
//}

// Good solution to managing buffer sizes and string comparissons 
// Using getline(cin, Variable_Name, '\n');




//int main() {
//	string myVar;
//	cout << "Enter your name: ";
//	getline(cin, myVar, '\n');
//	cout << "HEllo, " << myVar << "!" << endl;
//
//}

