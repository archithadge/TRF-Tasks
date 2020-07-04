# include <iostream>
# include <string.h>

using namespace std;

class student
{
    public:

    string name;
    int year;
    int roll_no;
    float cgpa;
    

    student(string str = "abc", int y = 1, int roll = 8)
    {
        name = str;
        year = y;
        roll_no = roll;
    }

    void getDetails()
    {
        cout <<"\nStudent Details: "<< endl;
        cout << endl;
        cout <<"Name: ";
        cin >>name;
        cout <<"Roll no: ";
        cin >>roll_no;
        cout <<"Year: ";
        cin >>year;
    }

    float Total_marks(int *arr, int n)
    {
        int i,sum=0;
        for(i = 0 ; i < n ; i++)
        {
            sum += arr [i];
        }
        
        cgpa = float(sum)/50;
        return cgpa;
    }

   /* void calcgpa()
    {
        cgpa=Total_marks()/50;
    }*/

    void display()
    {   cout << "\nStudent Details: ";
        cout << "\n\nName of Student :" << name << endl;
        cout << "Year :" << year << endl;
        cout << "Roll no: " << roll_no << endl;

    }  
};

int main()
{
    int size;
    float a;
    student *s1 = new student();
    cout <<endl << "Size: ";
    cin >> size;

    s1->getDetails();
    
    int *marks = new int[size];
    cout << endl <<"Enter the marks: " <<endl;

    for (int i = 0; i < size; i++)
    {
         cin >> marks[i];
    }

    s1->display();

    a = s1->Total_marks( marks ,size);
    cout << "C.G.P.A: " << a << endl;
}
