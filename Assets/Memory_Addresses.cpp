// Either array size should be constant or and it should be run at compile time
// Solution : CPP memeory management 

#include <iostream>
using namespace std;


//int main() {
//
//	int age = 21;
//	cout << "The value : " << age << endl;
//	cout << "The memory address : " << &age << endl;
//	return 0;
//
//}



// Pointer : a variable that stores the memory address of another variable

//int main() {
//
//
//	int year = 2025;  // Normal variable
//	int* addr = &year;
//	//int paddr = &year; Pointer variable (int* paddr is a pecial box that can store an address of an int.
//	// It is empty before being assigning any address to it (&year).
//	int* paddr = &year; // 	Go to the address stored in pYear and fetch the value there
//                   
// 
//
//	cout << "The value : " << year << endl;
//	cout << "The memory address of year variable : " << &year << endl;
//	cout << "The memory address stored in the pointer : " << addr << endl; // pointing at the memory address of year variable
//	cout << "The memory address getstored in the pointer vriable 'paddr' : " << paddr << endl; // pointing at the memory address of year variable : should show memory address
//	cout << "The value stored at pointer variable int* paddr : " << *paddr << endl; // Should get 2025
//}


//int main() {
//	int someNumber = 1992;
//	int* year = &someNumber;
//
//	cout << "The value of someNumber : " << someNumber << endl;
//	cout << "The memory address of someNumber : " << &someNumber << endl;
//	cout << "The memory address stored in pointer variable year after creating it : " << year << endl;
//	cout << "The value stored at the memory address stored in pointer variable year : " << *year << endl;
//
//	// Changing the value of someNumber just like normal variable
//	someNumber = 2017;
//	cout << "\nAfter changing the value of someNumber to " << someNumber << ".  " << endl;
//
//	cout << "Using Dereference pointer to get the value of the change year [expect 2017] : " << *year << endl;
//    
//	//Changing the values again using dereference pointer
//	*year = 2024;
//	cout << "\nAfter changing the value using dereference pointer *year to 2024.  " << endl;
//
//}

//Conclusion : Two seperate methods to changing the value of the variable someNumber.



//Alternative way of assigning values (through dereference pointer)

//int main() {
//	int myear = 2019;
//	int* pyear = &myear; // Pointer variable storing the address of myear variable
//	cout << "The value of myear : " << myear << endl;
//	cout << "The memory address of myear variable : " << &myear << endl;
//	cout << "The memory address stored in pointer variable pyear : " << pyear << endl; // pointing at the memory address of myear variable
//	cout << "The value stored at pointer variable int* pyear : " << *pyear << endl; // Should get 2019
//
//	//after changin 
//	pyear = new int; // Dynamically allocating memory for an integer and assigning its address to pyear
//	*pyear = 6; // Assigning value to the memory location pointed to by pyear
//	// You can do this *pyear = new int if it is the for the fist time 
//	cout << "" << endl;
//
//	cout << "After changing the value using dynamic memory allocation. " << endl;
//	cout << "The memory address stored in pointer variable pyear : " << pyear << endl; // pointing at the memory address of myear variable
//	cout << "The value stored at pointer variable int* pyear : " << *pyear << endl; // Should get 6
//
//	delete pyear; // Freeing the dynamically allocated memory
//}


//Example for above application

//struct personal { string emaiAddress;
//                                     };
//
//int main() 
//{
//    // Assigning instances for a struct
//    personal Neo, Nimuthu, Partali; 
//
//    //Assiging instances with their own email address
//    Neo.emaiAddress = "Neo@gmai.com";
//    Nimuthu.emaiAddress = "Nimuthu@gmai.com";
//    Partali.emaiAddress = "Partalie@gmail.com";


    // differentiating between Managers and worker
    //Using arrays + Instances created for the struct 

 //   personal Manager[] = { Partali };
 //   personal Employee[] = { Neo, Nimuthu }; // Copies of the orginal address

 //   // changin the email address of the Neo
 //   Neo.emaiAddress = "Newneo@gmail.com"; // Only changes the orginal value 

 //   cout << Neo.emaiAddress << endl; // shows only the change in the orginal address
	//cout << Employee[0].emaiAddress << endl; // Copy still contains the old value
	//return 0;


	//correct way using pointers
 //   personal* Manager[] = {&Partali};
	//personal* Employee[] = { &Neo, &Nimuthu }; // Pointers to the orginal address

	////changing the email address of the Neo
 //   Neo.emaiAddress = "Newneo@gmail.com"; // Changes the orginal value + all copies
	//cout << Neo.emaiAddress << endl; //Orginal value
	//cout << Employee[0]->emaiAddress << endl; // Pointer to the orginal value + shows the change


//}




int main() 
{
   
}