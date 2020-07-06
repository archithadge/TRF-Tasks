#include<bits/stdc++.h>
using namespace std;

// Initializing Variable in student class
class Student
{
    public: //Making variable public
    // Initializing variable to default value
    string stud_name = "default_name";
    int stud_roll = NULL;
    int stud_id = NULL;
};

// Function to print only rank
void showRank(int r)
{
    cout << r;
}

// Function to print Student Details
void showRank(string stud_name,int stud_roll,int stud_id)
{
    cout << "Since no rank has passed Student Detais are : " << endl;
    cout << "Student Name : " << stud_name << endl;
    cout << "Student Roll Number : " << stud_roll << endl;
    cout << "Student ID : " << stud_id << endl;
}

// Function to print both Rank and Student Details
void showRank(string stud_name,int stud_roll,int stud_id,int r)
{
    cout << "Rank and Student Details are : " << endl;
    cout << "Student Name : " << stud_name << endl;
    cout << "Student Roll Number : " << stud_roll << endl;
    cout << "Student ID : " << stud_id << endl;
    cout << "Student Rank : " << r << endl;
}

int main()
{
    int rank;
    Student s;
    int n;

    cout << "Enter---\n(1) For printing only rank. \n (2) For printing student details. \n(3) For printing both rank and student details \n" << endl;
    cin >> n ; //Taking User Input for choice

    // switch condition for printing required data
    switch (n)
    {
    case 1:
        cout << "Enter a Rank for Student : ";
        cin >> rank;
        cout << "Only Rank is Passed hence Rank is : ";
        showRank(rank);
        break;

    case 2:
        cout << "Enter Student Details : " << endl;
        cout << "Student Name : ";
        cin >> s.stud_name;
        cout << "Student Roll Number : ";
        cin >> s.stud_roll;
        cout << "Student ID : ";
        cin >> s.stud_id;
        showRank(s.stud_name,s.stud_roll,s.stud_id);
        break;

    case 3:
        cout << "\nEnter Student Details : " << endl;
         cout << "Student Name : ";
        cin >> s.stud_name;
        cout << "Student Roll Number : ";
        cin >> s.stud_roll;
        cout << "Student ID : ";
        cin >> s.stud_id;
        cout << "Enter a Rank : ";
        cin >> rank;
        showRank(s.stud_name,s.stud_roll,s.stud_id,rank);
        break;
    
    default:
        cout << "Please Choose Correct Number to print Student Details.";
        break;
    }
}


