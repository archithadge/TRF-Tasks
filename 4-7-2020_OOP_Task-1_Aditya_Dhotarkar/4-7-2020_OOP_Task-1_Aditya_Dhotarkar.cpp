#include<iostream>
using namespace std;

class Student
{   public: 
    string name;
    int year;
    float cgpa;
    int *marks=new int[5];

    // Constructor for initializing data members
    Student(string stud_name="xyz",int stud_year=0)
    {
        name=stud_name;
        year=stud_year;
        cgpa=0;
        cout<<"In class constructor"<<endl;
    }

    // Function for calculate total marks
    int Total_marks()
    {
        int i;
        int sum=0;
        for(i=0;i<5;i++)
        {
            sum+=marks[i];
        }
        return sum;
    }

    // Function to get input
    void getinput()
    {   
        int i;
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter year :";
        cin>>year;
        //getting marks of 5 subjects
        for(i=0;i<5;i++)
        {
            cout<<"Enter marks in sub["<<i+1<<"] :";
            cin>>marks[i];
        }
    }

    // Function to calculate cgpa
    void calcgpa()
    {
        //taking cgpa as percent / 10
        cgpa=Total_marks()/50;
    }

    // Function to display student information
    void display()
    {   cout<<"\nStudent Information :";
        cout<<"\n\nName of Student :"<<name<<endl;
        cout<<"Year :"<<year<<endl;
        calcgpa();
        cout<<"CGPA :"<<cgpa<<endl;
    }  
};

int main()
{
    Student *s1=new Student();
    s1->getinput();
    s1->display();
    return 0;
}