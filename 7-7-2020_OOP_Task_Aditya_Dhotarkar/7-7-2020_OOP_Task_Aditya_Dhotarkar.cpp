#include<bits/stdc++.h>
using namespace std;
class String
{
    char *str;
    int size;

    public:
    String()
    {   str=NULL;
        size=0;
    }

    String(int size)
    {   
        this->size=size;
        str=new char[size+1];
    }

    String getstring()
    {
        cout<<"Enter String:";
        gets(str);
        size=strlen(str);
    }

    String(const String& s)
    {   
        this->size=s.size;
        this->str=s.str;
    }

    String operator+(const String s);
    String operator*(int n);
    friend int operator<=(const String &s, const String &n);
    friend ostream& operator <<(ostream &out,const String s);
};

// Overloading the + operator
String String::operator+(String s)
{
    String s1;
    s1.size=strlen(s.str)*2;
    s1.str=new char[s1.size+1];
    s1.str=this->str;
    strcat(s1.str,s.str);
    return s1;
}

// Overloading the <= Operator
int operator<=(const String &s, const String &n)
{
    int x = strlen(s.str);
    int y = strlen(n.str);
    if (x <= y) //Checking if length of s is smaller than length of t.
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Overloading the * operator
String String::operator*(int n)
{   int i=1;
    String s1;
    s1.size=strlen(this->str)*n;
    s1.str=new char[s1.size+1];
    strcpy(s1.str,this->str);
    while(i<n)
    {
        strcat(s1.str,this->str);
        i++;
    }
    return s1;
}

// Overloading the output operator
ostream& operator <<(ostream &out,String s)
{
    out<<s.str<<endl;
    return out;
}
int main()
{
    String s1(25),s2(25),s3,s4,s5,s6;
    s1.getstring();
    s2.getstring();
    
    // Checking for + operator
    s4=s1+s2;
    cout<<s4;
   
    // Checking for * operator
    s3=s1*4;
    cout<<s3;

    // Checking for = operator   
    s5=s1;     
    cout<<s5;

    // Checking for <= Operator
    if (s1 <= s2)
    {
        cout << "String 1 is Smaller than String 2\n";
    }
    else
    {
        cout << "String 2 is smaller than String 1\n";
    }

}