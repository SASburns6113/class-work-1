#include <iostream>
#include <string>

using namespace std;

void showMyAge(int myAge, int age);


int main()
{
	cout << "\n\n\tWelcome\n" << endl;
	// wok with just plain int
	int age = 21;
	showMyAge(age, age); 
	//cout << "The age of Luke Skywalker is " << age << ".\n";
	//// Wee are reference free, and pointer free!
	//cout << "the age of Luke Skywalker is kept secret at location " << &age << " in memory of the Jedi database!\n";

	//int *ptrAge = &age; // declaring pointer and initializing it to the address of age!

	//cout << "ptrAge gives us the value of the data our pointer is holding, which is a memory address.\n";
	//cout << "The pointer ptrAge contains a value of " << ptrAge << endl;
	//cout << "The pointer ptrAge lives at memory address " << &ptrAge << endl;
	//cout << "to find Skywalker's age, we deref this pointer ptrAge and it gives us value " << *ptrAge << endl;

	system("pause");
	return 0;
}

void showMyAge(int myAge, int age)
{
	cout << "The age of Luke Skywalker is " << age << ".\n";
	// Wee are reference free, and pointer free!
	cout << "the age of Luke Skywalker is kept secret at location " << &age << " in memory of the Jedi database!\n";

	int *ptrAge = &age; // declaring pointer and initializing it to the address of age!
	cout << "ptrAge gives us the value of the data our pointer is holding, which is a memory address.\n";
	cout << "The pointer ptrAge contains a value of " << ptrAge << endl;
	cout << "The pointer ptrAge lives at memory address " << &ptrAge << endl;
	cout << "to find Skywalker's age, we deref this pointer ptrAge and it gives us value " << *ptrAge << endl;

	
}