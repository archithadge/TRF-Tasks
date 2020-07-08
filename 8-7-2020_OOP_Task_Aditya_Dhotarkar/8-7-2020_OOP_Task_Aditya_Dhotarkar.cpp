#include<bits/stdc++.h>
using namespace std;

class Personal
{
    protected:
    string name;
    string surname;
    string address;
    string mobile_no;
    string dob;

    public:
    // Default Constructor
    Personal()
    {
        name = "Aditya";
        surname = "Dhotarkar";
        address = "Akola";
        mobile_no = "123456789";
        dob = "14/06/2020";
    }

    void get_info();
    void show_info();
};

void Personal :: get_info()
{
    cout << "Enter your Personal Information:  " << endl;
    cout << "Name : ";
    cin >> name;
    cout << "Surname : ";
    cin >> surname;
    cout << "Address : ";
    cin >> address;
    cout << "Mobile Number : ";
    cin >> mobile_no;
    cout << "Date of Birth : ";
    cin >> dob;
    cout << endl;
}

void Personal :: show_info()
{
    cout << "Personal Information is : " << endl;
    cout << "Name : ";
    cout << name << endl;
    cout << "Surname : ";
    cout << surname << endl;
    cout << "Address : ";
    cout << address << endl;
    cout << "Mobile Number : ";
    cout << mobile_no << endl;
    cout << "Date of Birth : ";
    cout << dob << endl;
    cout << endl;

}

class Professional
{
    protected:
    string name_of_organisation;
    string job_profile;
    string project;

    public:
    // Default Constructor
    Professional()
    {
        name_of_organisation = "Robosoft";
        job_profile = "Machine Learning / Data Science";
        project = "Credit Card Fraud Detection Project";
    }

    void get_info();
    void show_info();
};

void Professional :: get_info()
{
    cout << "Enter Your Professional Information : " << endl;
    cout << "Name of Organisation : ";
    cin >> name_of_organisation;
    cout << "Job Profile : ";
    cin >> job_profile;
    cout << "Current Project : ";
    cin >> project;
    cout << endl;
}

void Professional :: show_info()
{
    cout << "Professional Information is : " << endl;
    cout << "Name of Organisation : ";
    cout << name_of_organisation << endl;
    cout << "Job Profile : ";
    cout << job_profile << endl;
    cout << "Project : ";
    cout << project << endl;
    cout << endl;
}

class Academic
{
    protected:
    string collage_name;
    string branch;
    int year_of_passing;
    float cgpa;

    public:
    // Default Constructor
    Academic()
    {
        collage_name = "VIT , Pune";
        branch = "Computer Science Engineering";
        year_of_passing = 2023;
        cgpa = 8.45;
    }

    void get_info();
    void show_info();
};

void Academic :: get_info()
{
    cout << "Enter the Academic Information : " << endl;
    cout << "Collage Name : ";
    cin >> collage_name;
    cout << "Branch : ";
    cin >> branch;
    cout << "Year of Passing : ";
    cin >> year_of_passing;
    cout << "CGPA : ";
    cin >> cgpa;
    cout << endl;
}

void Academic :: show_info()
{
    cout << "Academic Information is : " << endl;
    cout << "Collage Name : ";
    cout << collage_name << endl;
    cout << "Branch : ";
    cout << branch << endl;
    cout << "Year of Passing : ";
    cout << year_of_passing << endl;
    cout << "CGPA : ";
    cout << cgpa << endl;
    cout << endl;
}

class Biodata : public Personal, public Professional, public Academic
{
    public:
    Biodata()
    {
        // Default Constructor
    }

    void get_info();
    void show_info();
};

void Biodata :: get_info()
{
    Personal :: get_info();
    Professional :: get_info();
    Academic :: get_info();
}

void Biodata :: show_info()
{
    Personal :: show_info();
    Professional :: show_info();
    Academic :: show_info();
}

int main()
{
    Biodata b;
    b.get_info();
    b.show_info();

    Biodata s;
    s.get_info();
    s.show_info();

    return 0;
}