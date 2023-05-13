// InputOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    //initialize variable as user's input
    string answer;
    string takeClass;
    //Title page
    cout << "------ Science Class ------" << endl;
    // ask user question
    cout << "What is you favorite science class? " << endl;
    ///do not endl on user input
    cin >> answer;
    cout << "Your favorite science class is: " << answer << endl;
    cout << "Are you ready to take " << answer << " this semester?" << endl;

    cin >> takeClass;
    // this will output different registration statements depending on if user says yes or no
    if (takeClass == "yes")
    {
        cout << "You have been registered for " << answer << endl;

    }
    else
    {
        cout << "You have not been registered for " << answer << endl;

    }
    return(0);
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
