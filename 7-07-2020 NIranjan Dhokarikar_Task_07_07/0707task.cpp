# include <bits/stdc++.h>
# include <string.h>

using namespace std;

class String                       // class String has been created here
{
    char s1[100];
    //char s2[100];

    public:

   // char s2[100];

    void accept_string()                       // the accept function  where strings are accepted
    {
        cout<<"Enter the string: ";
        cin>>s1;
    }

    void display()                            // function to print out the user inputed strings
    {
        cout<<s1;
    }

    void operator+(String x);
    void operator==(String x);            // here x is an object of class String and so it can acess all the objects of the class String
    int operator=(String x);
    void operator*(int n);
    void operator<<(String x);
    void operator>>(String x);

};

void String::operator+(String x)
{
    strcat(s1,x.s1);
    cout<<"\nString After Concating is : "<<s1;
}

void String::operator==(String x)
{
    strcpy(x.s1,s1);
    cout<<"\nString After Copying is : "<<x.s1;

}

int String::operator=(String x)
{
    if(strcmp(s1,x.s1)==0)
        return 1;
    else
    {
        return 0;
    }
    
}

void display1(int compare)
{
    if (compare ==1)
        cout<<"\nStrings are same!!!";
    else
    {
        cout<<"\nStrings are not same!!!";
    }
    
}

void String::operator*(int n)
{
    printf("\nThe multiplied string is: ");
    for (int i = 0; i < n; i++)
    {
        cout<<s1;
    }   
}

void String::operator<<(String x)
{
    cout<<"\nThe string you entered is :"<<x.s1;
}

void String::operator>>(String x)
{
    int i;
    cout<<"\nThe string after reversing is : ";
    for(i=strlen(x.s1);i>=0;i--)
     cout<<x.s1[i];
}


int main()
{
    String a,b;        // variables a and b of class string have been declared
    int compare;               // variable used in string comparing process

    printf("\n\n");

    // accepting the strings 

    a.accept_string();                  // function to accept the strings
    b.accept_string();

    // printitng the strings

    cout<<"\n ----------------------------------------------";
    cout<<"\n\n First String is:  ";
    a.display();                          // function to display the strings

    cout<<"\n\n Second String is:  ";
    b.display();

    printf("\n\n");

    // concatenation of strings

    a + b;  

    printf("\n\n");

    cout<<"\n ----------------------------------------------";

    printf("\n\n");

    a.accept_string();

    // copying one string to another

    a == b;

    printf("\n\n");

    cout<<"\n ----------------------------------------------";

    printf("\n\n");

    a.accept_string();           // function to accept the strings
    b.accept_string();

    // comparing the two strings

    compare = a=b;
    display1(compare);                // separate function created for display purpose in comparing the strings
    printf("\n\n");

    cout<<"\n ----------------------------------------------";

    printf("\n\n");

    // multiplication of the strings

    a.accept_string();
    a*3;
    printf("\n\n");

    cout<<"\n ----------------------------------------------";

    // displaying the string using operator overloading

    printf("\n\n");
    a.accept_string();
    b<<a;
    printf("\n\n");

    cout<<"\n ----------------------------------------------";

    // reversing the string using operator overloading

    printf("\n\n");
    a.accept_string();
    b>>a;
    printf("\n\n");

    cout<<"\n ----------------------------------------------";

}
