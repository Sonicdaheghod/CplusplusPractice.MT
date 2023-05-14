// HPLCRegister.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program is to work on file storage for registering and activating one's appointment when using a machine that natural products chemistry researchers have to schedule to use

//source files
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool HPLCregistered() {

    //this is where program asks for user's name, HPLC name, time, and date of usage

    string name, HPLCname, time, dateUse;
    // comparison strings
    string comp_name, comp_HPLCname, comp_time, comp_dateUse;

    cout << "Enter name: " << endl;
    cin >> name;

    cout << "Enter HPLC name: " << endl;
    cin >> HPLCname;

    cout << "Enter time for usage: " << endl;
    cin >> time;

    cout << "Enter date of usage: " << endl;
    cin >> dateUse;

    //comparing function as bool

    if (comp_name == name && comp_HPLCname == HPLCname && comp_time == time && comp_dateUse == dateUse)
    {
        return true;
    }
    else {
        return false;
    }
}

//main function for program to carry out bool
int main(){

    //user chooses to either register or activate appointment
    int choice;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
