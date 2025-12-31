//  Using if statements 

//#include <iostream>
//#include <string>
//using namespace std;

//if (condition)
//    action ;

//Single alternative if statements

//int main() {
//    int driverAge, numTickets;
//    double premiumDue = 75.32;
//
//    cout << "Enter driver's age: ";
//    cin >> driverAge;
//
//    cout << "Enter traffic tickets issued: ";
//    cin >> numTickets;
//
//    if (driverAge < 26)
//        premiumDue += 100;
//
//    if (driverAge > 50)
//        premiumDue -= 50;
//
//    if (numTickets == 2)
//        premiumDue += 60.25;
//
//    cout << "Premium due is: " << premiumDue << endl;
//
//    system("pause");
//    return 0;
//}



//Single ALternative 
//int main() {
//
//    int Blance = 5000;
//
//    if (Blance > 0) {
//
//        cout << "Your account has funds " << endl;
//    }
//
//    cout << "Program continues ..." << endl;
//    return 0;
//}


////Dual Alternative 
//int main() {
//	int balance = -50;
//
//	// Dual alternative if else 
//	if (balance >= 0) { cout << "YOUR A/C IS IN GOOD STANDING" << endl; }
//	else { cout << "YOUR  ACCOUNT IS OVERDRWAN" << endl; }
//	return 0;
//
//
//}


// Nested If 

//int main() {
//
//	int balance = 1200;
//	bool isVIP = true;
//
//	if (balance > 0) 
//	{
//		cout << "YOUR AC HAS FUNDS" << endl;
//
//		if (isVIP) { cout << "YOUR AC HAS VIP BENEFITS" << endl; }
//		else { cout << "STANDARD AC PRIVILEDGES" << endl; }
//	}
//	else { cout << "Your account has been overdrawn" << endl; }
//	return 0;
//}
//	

//SWITCH statements

//int main() {
//	int day = 32;
//	switch (day) {
//	case 1: cout << "Monday"; break;
//	case 2: cout << "Tuesday"; break;
//	case 3: cout << "Tuesday"; break;
//	case 4: cout << "Tuesday"; break;
//	case 5: cout << "Tuesday"; break;
//	case 6: cout << "Tuesday"; break;
//	case 7: cout << "Tuesday"; break;
//	defualt: cout << "Tuesday"; break;
//
//	}
//	return 0;
//}

//Conditional Operators 

//int main() {
//	int x = 10, y = 20;
//	int max_val = (x > y) ? x : y;
//
//	cout << "The maximum values is " << max_val;
//	return 0;
//}


//Nested Conditional Operators

//int main() {
//	int age = 20;
//	bool hasID = true;
//
//	if (age = 18 && hasID) {
//		cout << "Access granted";
//	}
//	else {
//		cout << "Access denied";
//	}
//	return 0;
//
//}


//Usinf Structures to make decision 

//struct Doctor {
//	int rating; // 1 to 5  (5 being the most qualifies)
//	string field; // Any field of specialization
//	string name; // Name of the doctor
//};
//
//int main() {
////creating an instance of Doctor
//	Doctor Doctor_exact; //Instance of a doctr 
//	
//	
//
////Constants to define a good doctor
//
//	const int LOW_RATING = 1;
//	const int MDEDIUM_RATING = 2;
//	const int HIGH_RATING = 3;
//	const int EXPERT_RATING = 4;
//	const int MASTER_RATING = 5;
//
//	cout << "Enter your Name: ";
//	getline(cin, Doctor_exact.name);
//
//	cout << "Enter your speacilized field of work: ";
//	getline(cin, Doctor_exact.field);
//
//	cout << "Enter the rating given by customer [1 -5]: ";
//	cin >> Doctor_exact.rating;
//
//	
//	switch (Doctor_exact.rating) {
//	case 1: cout << "MR/MRS " << Doctor_exact.name << ", you are a less experienced doctor in the feild of " << Doctor_exact.field << endl; break;
//	case 2: cout << "MR/MRS " << Doctor_exact.name << ", you are a moderately experienced doctor in the feild of " << Doctor_exact.field << endl; break;
//	case 3: cout << "MR/MRS " << Doctor_exact.name << ", you are a highly experienced doctor in the feild of " << Doctor_exact.field << endl; break;
//	case 4: cout << "MR/MRS " << Doctor_exact.name << ", you are an expert doctor in the feild of " << Doctor_exact.field << endl; break;
//	case 5: cout << "MR/MRS " << Doctor_exact.name << ", you are a master doctor in the feild of " << Doctor_exact.field << endl; break;
//	
//	}
//
//	return 0;
//
//}
