//
//  main.cpp
//  Assignment_1
//
//  Created by Noah Honickman on 12/25/20.
//This program asks for your first name and last name. It also asks for a grade and age and // prints them out. 

#include <iostream>

int main() {
    using namespace std;
    char firstname [20];
    char lastname [20];
    char grade [3];
    char age [4];
    
    cout << "What is your first name? ";
    cin.getline(firstname, 20);
    cout << "\n";
    cout << "What is your last name?";
    cin.getline(lastname, 20);
    cout << "\n";
    cout << "What letter grade do you deserve?";
    cin.getline(grade, 3);
    cout << "\n";
    cout << "What is your age?\n";
    cin.getline(age, 4);
    cout<<"Your first name is "<<  firstname <<". \n";
    cout << "Your last name is " << lastname << ". \n";
    cout << " Your grade is: " << grade << "\n";
    cout << "Your age is: " << age << "\n";
    
    
    
    
    return 0;
}
