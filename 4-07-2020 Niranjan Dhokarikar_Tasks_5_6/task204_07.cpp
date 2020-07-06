# include <iostream>
# include <string.h>

using namespace std;

class student
{
private:
    string name;
    int year;
    int roll_no;

public:
   
   student()            // this is the function agar koi bhi argument pass on nahi kiya humne
   {
       name = "Anything";
       year = 3;
       roll_no = 4;
   }

   student(string str, int roll, int y)
   {
        name = str;
        roll_no = roll;
        year = y;
   }

   void showdetails()
   {
        cout <<endl <<"Details of Student are"<<endl;
        cout <<endl <<"Name :"<< name;
        cout <<endl <<"Roll No.: "<< roll_no;
        cout <<endl <<"Year: "<< year <<endl <<endl;
   }

   void showRank(int r)
   {
       cout <<"Rank: "<< r <<endl;
   }

   void showRank(student s)
   {
       s.showdetails();
       cout << "No Rank" << endl;
   }

   void showRank(student s, int r)
   {
       s.showdetails();
       cout <<"Rank: "<< r <<endl;
   }
};

int main()
{
    student s1("Niranjan",30,3);
    s1.showRank(1);
    
    student s("Niranjan",30,5);
    s.showRank(s);       
   
    student S;
    S.showRank(S); 

}


