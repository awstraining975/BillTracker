// BillTracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>
#include <iomanip>
#include<string>
using namespace std;

int main()
{

    //Read a file
    //Initialize an array of Bill and populate date from the file
    //Construct the main menu
    //Construct detailed functions
    //User input and validation
    //Saving file after done


  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //Example for user input and validation
    /*  int a;

    cout << "Enter an integer number\n";
    cin >> a;
    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered wrong input" << endl;
            cin >> a;
        }
        if (!cin.fail())
            break;
    }

    cout << "the number is : " << a << endl;
    return 0;*/




}

/*
1st menu:

1.Add a bill
2.Delete a bill
3.Show a bill
4.Show all bills
5.Quit

*/

class DateTime {
    int Day;
    int Month;
    int Year;
public :
    int GetDay() { return Day; }
    int GetMonth() { return Month; }
    int GetYear() { return Year; }
};

class Bill {
    string Name;
    double Balance;
    DateTime DueDate;
    bool IsPaid;

public:
    string GetName() { return Name; }
    double GetBalance() { return Balance; }
    DateTime GetDueDate() { return DueDate; }
    bool GetIsPaid() { return IsPaid; }

    string GetDueDateString() {
        string s = "";
        s = to_string(DueDate.GetYear()) + "/" + to_string(DueDate.GetMonth()) + "/" + to_string(DueDate.GetDay());
        return s;
    }


};
