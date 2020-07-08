# include <bits\stdc++.h>

using namespace std;

class personal
{
    string name;
    string mobile_no;
    string adress;
    string dob;


    public:

    personal()
    {
        name = "xyz";
        adress = "mumbai";
        mobile_no = "12344334";
        dob = "9898";
    }


    void getDetails();
    
    void display();
    
};

class professional
{
    protected:

    string organisation;
    string project;
    int experience;

    public:

    professional(string o = "org",string p = "new project",int e = 3)
    {
        organisation = o;
        project = p;
        experience = e;
    }

    void getDetails();
   
    void display();
   
};

class academic
{
    protected:

    int year;
    float cgpa;
    string college_name;

    public:

    academic(int yr = 3,float c = 8.0,string clg = "college1")
    {
        year = yr;
        cgpa = c;
        college_name = clg;
    }

    void getDetails();
   

    void display();
    
};

class biodata:public academic,public professional,public personal
{
    public:

    biodata()
    {}

    void getDetails();
    void display();
};

void personal::getDetails()
{
    cout<<"Enter the personal information: "<<endl;
    cout<<"Name:  ";
    cin>>name;
    cout<<endl<<"Adress:  ";
    cin>>adress;
    cout<<endl<<"Mobile number:  ";
    cin>>mobile_no;
    cout<<endl<<"Date of birth:  ";
    cin>>dob;

}

void personal::display()
{
    cout<<"The personal information: "<<endl;
    cout<<"Name:  "<<name;
    cout<<endl<<"Adress:  "<<adress;
    cout<<endl<<"Mobile number:  "<<mobile_no;
    cout<<endl<<"Date of birth:  "<<dob;
    
}

void professional::getDetails()
{
    cout<<"Enter the professional information: "<<endl;
    cout<<"Organisation Name:  ";
    cin>>organisation;
    cout<<endl<<"Experience:  ";
    cin>>experience;
    cout<<endl<<"Project:  ";
    cin>>project;
    

}


void professional::display()
{
    cout<<"The professional information: "<<endl;
    cout<<"Organisation Name:  "<<organisation;
    cout<<endl<<"Experience:  "<<experience;
    cout<<endl<<"Project:  "<<project;
    
}


void academic::getDetails()
{
    cout<<"Enter the academic information: "<<endl;
    cout<<"Year:  ";
    cin>>year;
    cout<<endl<<"C.G.P.A:  ";
    cin>>cgpa;
    cout<<endl<<"College Name:  ";
    cin>>college_name;
    
}

void academic::display()
{
    cout<<"The academic information: "<<endl;
    cout<<"Year:  "<<year;
    cout<<endl<<"C.G.P.A:  "<<cgpa;
    cout<<endl<<"College Name:  "<<college_name;
}


void biodata::getDetails()
{
    personal::getDetails();
    printf("\n\n");
    professional::getDetails();
    printf("\n\n");
    academic::getDetails();
    printf("\n\n");
}

void biodata::display()
{
    personal::display();
     printf("\n\n");
    professional::display();
     printf("\n\n");
    academic::display();
     printf("\n\n");
}


int main()
{
    class biodata b1;
    b1.getDetails();
    b1.display();

    class biodata b2;
    b2.getDetails();
    b2.display();
}