// Includes standard input/output stream library
#include <iostream>
// Includes time library for getting time and localtime functions
#include <ctime>
// Includes string library for manipulation strings
#include <string>
// Includes Windows library for console text attribute manipulation
#include <Windows.h>
using namespace std;

// Main function
int main() {
	// Get handle to console window
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // Set console text color to blue
    SetConsoleTextAttribute(hConsole, 10);
    
    // Welcome message
    cout << "Hello!!!\nWelcome to my project!\n\nShort description:\nThis C++ code makes a description about you based on informations you entered!" << endl;
    
    // Enter last name
	cout << "Please enter your last name: ";
	string last_name;
	cin >> last_name;
	
	// Enter first name
	cout << "Please enter your first name: ";
	string first_name;
	cin >> first_name;
	
	// Enter age
	cout << "Please enter your age: ";
	string age;
	cin >> age;
	
	// Enter scgool group
	cout << "Please enter your school group: ";
	string school_group;
	cin >> school_group;

    cout << "Done! We are ready to show you the information you entered." << endl;
    cout << "Your name is " << first_name << " " << last_name << ".\n";
    cout << "You are " << age << " years old and you are from school group " << school_group << ".\n";
    
	// End program
    cout << "Press any key to continue...";
    cout << "--------------------------------\n";
    
    // Get current time
    time_t current_time = time(nullptr);
    // Convert current time to local time
    struct tm* local_time = localtime(&current_time);
    int year = local_time->tm_year + 1900;
    
    // End program
    cout << "Thank you for using my program!\n\nCode by: D4rK;\nVersion: 1.0;\nProgramming language: C++;\n\nCopyright " << year << " by D4rK, made with <3 in Romania!";
    return 0;
}