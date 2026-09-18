/// classes and objectssss::::
// #include <iostream>
// using namespace std;


// class Student
// {
//     public:
//     int marks;
//     int age;
//     string name;
//     void inputDetails()
//     {
//         cout<<"Name: ";
//         getline(cin,name);
//         cout<<"Age: ";
//         cin>>age;
//         cout<<"Marks: ";
//         cin>>marks;
//         cin.ignore();
//         cout<<" "<<endl;
//     }
//     void printDetails()
//     {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Marks: "<<marks<<endl;
//         cout<<" "<<endl;

//     }
// };

// class Employee
// {
//     public:
//     int age;
//     string department;
//     string company;
//     int sallary;
//     string name;
//     void inputDetails()
//     {
//         cout<<"Name: ";
//         getline(cin,name);
//         cout<<"Age: ";
//         cin>>age;
//         cin.ignore();
//         cout<<"Company: ";
//         getline(cin,company);
//         cout<<"Department: ";
//         getline(cin,department);
//         cout<<"salary: ";
//         cin>>sallary;
//         cin.ignore();
//         cout<<" "<<endl; 
    
//     }
//     void printDetails()
//     {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Company: "<<company<<endl;
//         cout<<"Department: "<<department<<endl;
//         cout<<"Salary: "<<sallary<<endl;
//         cout<<" "<<endl; 
//     }
    
// };
// int main() {
//     Student s1;
//     s1.inputDetails();
//     s1.printDetails();
    
//     Student s2;
//     s2.inputDetails();
//     s2.printDetails();
    

//     Employee e1;
//     e1.inputDetails();
//     e1.printDetails();

// }   

// #include<iostream>
// using namespace std;
// union Student
//     {
//         int id;
//         char section;
//         long regNo;
//     };
// int main()
// {
    
//     Student s;
//     s.id = 100 ;
//     s.section = 'A';
//     cout<<s.id<<endl;
//     cout<<s.section<<endl;
//     s.regNo = 12501063;
    
//     cout<<s.regNo<<endl;
    

// }

// #include<iostream>
// using namespace std;
// class BankAccount
// {
//     float balance;
//     long accountNumber;
//     float InterestRate;

//     public:
//     int getBalance()
//     {
//         return balance;
//     }
//     void deposite(int amount)
//     {
//         balance = balance + amount;
//     }
//     void withdraw(int amount)
//     {
//         balance -= amount;
//     }
//     int getInterest()
//     {
//         return balance *(InterestRate/100);
//     }
//     float setBalance(float amount)
//     {
//         balance = amount;
//     }
//     long setAccountNo(long no)
//     {
//         accountNumber = no;
//     }
// };

// int main()
// {
//     BankAccount b1;
//     b1.setBalance(1000);
//     cout<<b1.getBalance();

    
// }

// #include <iostream>
// using namespace std;

// inline void maximum(int a, int b, int c)
// {
//     int max = a;

//     if (b > max)
//     {
//         max = b;
//     }

//     else
//     {
//         max = c;
//     }

//     cout << "Maximum = " << max;
// }

// int main()
// {
//     maximum(10, 25, 15);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// inline int cube(int a)
// {
//     return a*a*a;
// }
//     class Student{
//         public:
//         int id;
//         void display();
//     };

// void Student::display() // SCOPE RESOLUTION
// {
//     cout<<id;
// }
// int main()
// {
//     Student s;
//     s.id =  101;
//     s.display();

// }

//STRUCT AND SCOPE RESOLUTION :

// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     int id;
//     static int count;

//     void increaseCount()
//     {
//         count++;
//     }

//     void displayCount()
//     {
//         cout << "Count = " << count;
//     }
// };

// int Student::count = 0;

// int main()
// {
//     Student s1;
//     s1.increaseCount();

//     Student s2;
//     s2.increaseCount();

//     Student s3;
//     s3.increaseCount();

//     Student s4;
//     s4.increaseCount();

//     s1.displayCount();
//     s2.displayCount();
//     s3.displayCount();
//     s4.displayCount();
    
//     return 0;
// }


// instance variables / non static data members can only be used in non static functions only but they cant be used in static function.
// #include <iostream>
// using namespace std;

// class student
// {
//     int a;
//     int b;
//     static int w;
// }
// int student::w=0;
// int main()
// {
//     student s1;
//     s1.a = 10;
//     s2.b = 20;
//     studet::w = 30;
//     cout<<s1.a<<endl;
//     cout<<s1.b<<endl;

//     student s2;
//     s2.a = 100;
//     s2.b = 200;

//     s1.show();
//     student::show();


// }

//create a bank account class with setAcc,Deposit,Display which is non static and charge interest point which is static class account number slary are non static and rate is static

// #include <iostream>
// using namespace std;

// class BankAcc
// {
// public:
//     int accNo;
//     float balance;
//     static float rateOfInterest;

//     public:
//     void setAccNo(int a)
//     {
//         accNo = a;
//     }
//     void setBalance(int b)
//     {
//         balance = b;
//     }
//     void Deposit(float amount)
//     {
//         balance += amount;
//     }
//     void Display()
//     {
//         cout<<"Account Number: "<<accNo<<endl;
//         cout<<"Balance: "<<balance<<endl;
//         cout<<"Rate Of Interest: "<<rateOfInterest<<endl;
//     }
//     static void chaneInterestRate(float rate)
//     {
//         rateOfInterest = rate;
//     }
// };
// float BankAcc::rateOfInterest = 5.6;

// int main()
// {
//     BankAcc b1;
//     b1.setAccNo(12501063);
//     b1.setBalance(1000);
//     b1.Display();
// }  

//DEFAULT PARAMETRES AND ARGUMENTSSSSSSSSSSSSSSSSSSSSSSSSSSSS

// #include <iostream>
// using namespace std;
// void greet(string name = "Teacher")
// {
//     cout<<"hellow"<<name;
// }
// int sum(int a,int b,int c=4,int d=5)
// {
//     return a+b+c+d;
// }
// int power(int a,int b=1)
// {
//     int ans = 1;
//     for(int i=1;i<=b;i++)
//     {
//         ans *= a;
//     }
//     return ans;
   
// }
// int main()
// {
//     // greet("Vishal");
//     // cout<<sum(2,3);
//     cout<<power(2,5);
// }

// MANIPULATOR FUNCTIONNNNNNNNNNNNNNNNNNNNNNNNNNNNNN

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
    // long long a = 234985;
    // cout<<"before doing setw: "<<a<<endl;
    // cout<<setw(5)<<"hello";
    // cout << setfill('*') << setw(10) <<"yoo";
    // double price = 12.123567;
    // cout << fixed <<setprecision(4)<<price;
//     string item1 = "pen";
//     string item2 = "laptop";
//     string item3 = "keyboard";

//     int qty1 = 2;
//     int qty2 = 1;
//     int qty3 = 2;

//     double price1 = 25;
//     double price2 = 50000;
//     double price3 = 1500;

//     double total = (qty1 * price1) + (qty2 * price2) + (qty3 * price3);
    
//     cout<<setfill('-')<<setw(40)<<"-"<<endl;
//     cout<<setfill('-')<<setw(25)<<"BILL"<<endl;
//     cout<<setfill('-')<<setw(40)<<"-"<<endl;
//     cout<<setfill(' ');
//     cout<<left<<"Item"<<setw(16)<<right<<setw(8)<<"Qty"<<setw(14)<<"Price"<<endl;
// }



// FUNCTION OVERLOADDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
// EVERYTHING AT ONCE-|
// change number of parametres
// change datatype of parametre
// change return type of function

// #include <iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     return a+b;
// }

// int sum(int a, int b,int c, int d)
// {
//     return a+b+c+d;
// }
// int sum(int a, int b,int c)
// {
//     return a+b+c;
// }
// float sum(float a, float b,float c)
// {
//     return a+b;
// }
// double sum(double a,double b)
// {
//     return a+b;
// }
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;
//     int d=40;
//     cout<<sum(a,b)<<endl;;
//     cout<<sum(12.11,13.99)<<endl;
// }


//AREA radius(double) 

// #include <iostream>
// using namespace std;
// int area(int side)
// {
//     return side * side;
// }
// int area(int l , int b)
// {
//     return l * b;
// }
// int area(double radius)
// {
//     return 3.14 * radius * radius;
// }
// int main()
// {
//     cout<<area(20)<<endl;
//     cout<<area(23,56)<<endl;
//     cout<<area(5.0)<<endl;
// }

//SCOPE:

// #include <iostream>
// using namespace std;
// class Student
// {
//     int x = 23;
//     int y = 24;
// };
// void fn()
// {
//     int x = 20;
//     cout<<x;
// }
// int main()
// {
//     int x = 24;
//     if (x)
//     {
//         int y = 24;
//         cout<<x;
        
//     }
//     {
//         int w = 23;
//         cout<<w;
//     }    
// }

//FRIEND FUNCTIONNNNNNNNNNNNNNNNNNNNN:

// #include <iostream>
// using namespace std;
// class Student
// {
//     int x = 10;
//     int y = 20;
//     friend void display(Student);
// };

// void display(Student s1)
// {
//     cout<<s1.x<<endl;
//     cout<<s1.y;
// }
// int main()
// {
//     Student s1;
//     display(s1);
// }

// make one class student consist of name and marks and take 2 student and whoever got largest marks print the name 


// #include <iostream>
// using namespace std;
// class Student
// {
//     int marks;
//     public:
//     void setMarks(int m)
//     {
//         marks = m;
//     }
//     friend void compareMarks(Student s1,Student s2);
//     friend class teacher;
    
// };
// class teacher
// {
//     public:
//     void showMarks(Student s1)
//     {
//         cout<<s1.marks;
//     }
// };
// void compareMarks(Student s1, Student s2)
// {
//     if (s1.marks > s2.marks)
//     {
//         cout<<"Student 1 wins";
//     }
//     else
//     {
//         cout<<"Student 2 wins";
//     }
// }
// int main()
// {
//     Student s1,s2;
//     s1.setMarks(30);
//     s2.setMarks(55);
//     compareMarks(s1,s2);
//     teacher t1;
//     t1.showMarks(s1);
// }

//REFERENCE VARIABLEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE

//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//     int a = 50;
//     int b = a;
//     int &ref = a;
//     cout<<ref<<endl;
    
//     ref = 60;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     b = 100;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     cout<<"Address of a : "<<&a<<endl;
//     cout<<"Address of a : "<<&ref<<endl;
    
//     int x = 30;
//     int z = 40;
//     int &y = x;

//     y = z;
//     z = 30;

//     cout<<x<<endl;//30--40
//     cout<<y<<endl;//30--40
//     cout<<z<<endl;//30
//  }

// CALL BY VALUE: 
// CALL BY ADDRESS : 

// #include <iostream>
// using namespace std;
// void change(int *a)
// {
//     *a = 200;
// }
// void change(int &a)
// {
//     a = 200;
// }
// void swapNo(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int a = 45;
//     cout<<a<<endl;

//     change(&a);
//     cout<<a<<endl;

//     change(a);
//     cout<<a<<endl;

//     // int x = 20;
//     // int y = 30;

//     // swapNo(&x,&y);
//     // cout<<x<<" "<<y<<endl;
// }

// CALL BY ADDRESS :

// CONSTRUCTORRRRRRRRRRRRRRRR:

// #include <iostream>
// using namespace std;
// class Student
// {
//     int rollno;
//     string name;
//     public:
//     Student(int r, string n)
//     {
//         rollno = r;
//         name = n;
//     }
//     void display()
//     {
//         cout<<rollno<<" "<<name;
//     }

// };
// int main()
// {
//     Student s1(101, "Vishal");
//     s1.display();
// }

// POINTERSSSSSSSSSSS:::::::::

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int *p = &a;
//     float x = 10;
//     float y = 20;
//     float *z = &x;

//     *p = b;
//     p = &b;

//     *z = y;
//     z = &y;

//     cout<<*p<<endl;
//     cout<<a<<endl;
//     cout<<b<<endl;
    
//     cout<<*z<<endl;
//     cout<<x<<endl;
//     cout<<y<<endl;

//     cout<<a<<endl;
//     cout<<&a<<endl;
//     cout<<*p<<endl;
//     cout<<p<<endl;
//     cout<<&p<<endl;
// }  

// SIZE OF POINTERRRRRR :

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p;
//     char *q;
//     double *r;
//     float *s;
//     cout<<sizeof(p)<<endl;
//     cout<<sizeof(q)<<endl;
//     cout<<sizeof(r)<<endl;
//     cout<<sizeof(s)<<endl;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[4] = {1,2,3,4};
//     int arr1[] = {2,5,8,92,6};
//     cout<<*arr<<endl;
//     cout<<arr<<endl;
//     cout<<arr+1<<endl;
//     cout<<arr+2<<endl;
//     cout<<*(arr+2)<<endl;
//     cout<<&arr<<endl;

//     cout<<&arr[0]<<endl;
//     cout<<&arr[1]<<endl;
//     cout<<&arr[2]<<endl;
//     cout<<&arr[3]<<endl;


//     int *p = &arr1[0];
//     int *q = &arr1[4];
//     cout<<q-p;
// }

// POINTERS TO POINTERSSSSSSSSSSSS :
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int *p = &a;
//     int **q = &p;

//     cout<<a<<endl;
//     cout<<*p<<endl;
//     cout<<**q<<endl;
    
// }

// VOID POINTER : a void pointer is a generic pointer .

// #include <iostream>
// using namespace std;
// int main()
// {
    // int x = 10;
    // void *p = &x;
    // cout<<*(static_cast<int*>(p))<<endl;
    // cout<<*(int*)p<<endl;
    // cout<<*(double*)p<<endl;
    // cout<<*(static_cast<double*>(p))<<endl;
    // cout<<*(static_cast<float*>(p))<<endl;

//     int x = 20;
//     double y = 23.8;
//     void *q;
//     q = &x;
//     q = &y;
//     cout<<*(int*)q<<endl;
//     cout<<*(double*)q<<endl;
// }

// NULL POINTER : pointer that is pointing to no valid object that is null pointer

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *w = NULL;
//     if (w == NULL)
//     {
//         cout<<"Hello";
//     }
//     cout<<*w<<endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
    // int *q = new int(10);
    // cout<<q<<endl;
    // delete q;
    // cout<<*q<<endl;

//     int x = 10;
//     int &r = x;
//     int *p = &r;
//     r = 100;
//     cout<<*p;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10;
//     int *p = &x;
//     int *g = &x;
//     *p = 20;
//     *g = 30;
//     cout<<x;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
    // int arr[] = {10,20,30};
    // int *p = arr;
    // cout<<*(p++)<<endl;
    // cout<<(*p)++<<endl;
    // cout<<*p<<endl;
// }

// CLASSES CONTAINING POINTERSSSSSSSSSS :

// #include <iostream>
// using namespace std;
// class Student
// {
//     public:
//     int marks;
//     int *ptr;
// };

// int main()
// {
//     Student s1;
//     int x = 90;
//     s1.marks = 100;
//     s1.ptr = &x;
//     cout<< *(s1.ptr)<<endl;
//     cout<< &x <<endl;
//     cout<< (s1.ptr)<<endl;

// }

// #include <iostream>
// using namespace std;
// class Student{
//     public:
//     int  *marks;
//     Student(int m)
//     {
//         marks = new int(m);
//     }
// };
// int main()
// {
//     Student s1(100);
//     cout<<*s1.marks;
// }

// POINTER TO OBJECT :

// #include <iostream>
// using namespace std;
// class Student
// {
    
//     int marks;
//     public:
//     Student(int marks)
//     {
//         this->marks = marks;
//     }
//     Student& increaseMArk(int x)
//     {
//         this->marks += x;
//         return *this;
//     }
//     void display()
//     {
//         cout<<this->marks<<endl;
//     }
//     void greet()
//     {
//         cout<<"Heelow"<<endl;
//     }
// };
// int main()
// {

//     Student *s1 = new Student(50); 
//     Student *s2 = new Student(50); 
//     s1->increaseMArk(20); 

//     if (*s1 == *s2) 
//     {
//          cout << "Equal" << endl; 
//     } 
//     else 
//     { 
//         cout << "Not Equal" << endl;
//     }

    // Student s1(100);
    // Student *p = &s1;
   
    // p->greet();
    // p->display();
    // Student *s2 = new Student(200);
    // s2->greet();
    // s2->display();

// }
// THIS POINTER : inside a non static member function this is a pointer to a current object.

// #include <iostream>
// using namespace std;
// class Employee
// {
//     int age;
//     string name;
//     int salary;
//     public:
//     Employee(int age,string name,int salary)
//     {
//         this->age = age;
//         this->name = name;
//         this->salary = salary;
//     }
//     void addbonus(int bonus)
//     {
//         this->salary += bonus;
//     }
//     void display()
//     {
//         cout<<"Name: "<<this->name<<endl;
//         cout<<"Age: "<<this->age<<endl;
//         cout<<"Salary: "<<this->salary<<endl;
//     }
// };
// int main()
// {
//     Employee e1(25,"Vishal",50000);
//     e1.addbonus(5000);
//     e1.display();
// }

// ARRAY OF OBJECT AND CONSTRUCTORS :

// #include <iostream>
// using namespace std;
// class Student
// {
//     public:
//     int marks;
//     Student()
//     {

//     }
//     Student(int marks)
//     {
//         this->marks = marks;
//     }
//     void display()
//     {
//         this->marks = marks;
//     }

// };
// int main()
// {
//     Student arr[5] ;
//     for (int i = 0; i < 5; i++)
//     {
//         int marks;
//         cin>>marks;
//         Student s(marks);
//         arr[i] = s;
//     }
//     for(int i = 0; i < 5; i++)
//     {
//         cout<<arr[i].marks<<endl;
//     }

// }

// STRINGS : STRING ARE SEQUENCE OF CHARACTERS AND THEY ARE MUTABLE IN CPP
// #include<iostream>
// using namespace std;
// int main()
// {
//     char nam[] = "Vishal";
//     cout<<nam<<endl;

//     string name = "Vishal";
//     cout<<name<<endl;

//     for(int i = 0; i<name.length(); i++)
//     {
//         cout<<name[i]<<" ";
//     }
//     string name1;
//     cout<<"Enter your name: ";
//     getline(cin,name1);
//     cout<<name1<<endl;
    
//     int age;
//     cout<<"Enter your age: ";
//     cin>>age;
//     cout<<age;
// }

// STRING OPERATIONS : 1) LENGTH() 2) SIZE() 3) EMPTY() 4) CLEAR() 5) APPEND() 6) PUSH_BACK() 7) POP_BACK() 8) SUBSTR() 9) FIND() 10) COMPARE() 11) CONCATINATION

// #include <iostream>
// using namespace std;
// int main()
// {
    // string fname = "Vishal";
    // string lname = "Kumar";
    // cout<<fname.length()<<endl;
    // cout<<fname.size()<<endl;
    // cout<<fname.empty()<<endl; // give output in 0s or 1s (false/true)
    // cout<<fname<<endl;
    // cout<<fname+" "+lname<<endl;

    // cout<<fname.front()<<endl;
    // cout<<fname.back()<<endl;

    // fname.clear();
    // cout<<fname<<endl;

    // fname.append("Vishal");
    // cout<<fname<<endl;

    // fname.append(lname);
    // cout<<fname<<endl;

    // fname.push_back('V');
    // cout<<fname<<endl;

    // for (int i = 0 ; i < 5 ; i++ )
    // {
    //     char ch;
    //     cin>>ch;
    //     fname.push_back(ch);
    // }
    // cout<<fname<<endl;

    // fname.pop_back();
    // cout<<fname<<endl;

    // cout<<fname[4]<<endl;
    // cout<<fname.substr(2,1)<<endl; // syntax fname.substr(start,length)

    // cout<<fname.find("sh");
    // string a = "run";
    // string b = "ran";
    // if(a<b)
    // {
    //     cout<<"a comes first";
    // }
    // if a is smaller its give negative number if larger it will give positive if its 0 it will give equal
// }


// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     int marks;
// };
// int main()
// {
    
    // string a = "Hellooo";
    // a[3] = 'd';
    // a[5] = 'a';
    // a[6] = 'e';
    // cout<<a;

    // string s = "I love C++ programming";
    // cout<<s.find("C++")<<endl;
    // cout<<s.substr(7,3)<<endl;
    // cout<<s.insert(10,", JAVA");

    // cout<<s.replace(7,3,"Python");  //s.replace(index,length,value)
//     Student arr[3];
//     arr[0].marks = 10; 
//     arr[1].marks = 20; 
//     arr[2].marks = 30; 
//     // cout<<arr[0].marks;

//     Student *p = arr;
//     cout<<(p)->marks<<endl; // while not using pointer use '->'.
//     cout<<(*p).marks<<endl; // while using pointer use ','.  
//     cout<<(p+1)->marks<<endl;

// }

// MULTIDIMENSIONAL ARRAY 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     // int sum = 0;
//     for(int i = 0 ; i < 3 ; i++)
//     {
//         int sum = 0;
//         for(int j = 0 ; j < 3 ; j++)
//         {
//             // cout<<arr[i][j];
//             sum = sum + arr[i][j];
//         }
//         // cout<<endl;
//             cout<<sum<<endl;
//     }
//     // cout<<sum<<endl;
// }

// #include <iostream>
// using namespace std;

// class Employee {
//     int id;
//     string name;
//     float salary;

// public:
//     Employee() {
//         id = 12501063;
//         name = "Vishal";
//         salary = 9999999;
//     }

//     Employee(int i, string n) {
//         id = i;
//         name = n;
//         salary = 0;
//     }

//     Employee(int id, string name, float salary) {
//         id = id;
//         name = name;
//         salary = salary;
//     }

//     void display() {
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// int main() {
//     Employee e1;                 
//     Employee e2(101, "Fakrul");     
//     Employee e3(102, "mosssiii", 25000); 

//     e1.display();
//     e2.display();
//     e3.display();

//     return 0;
// }
    // class Student
    // {
    //     int marks;
    //     int rollNo;
    //     public:
    //     Student()
    //     {
    //     marks = 1;
    //     rollNo = 100;
    //     cout<<"Default Parameter";
    //     }
    //     Student(int rollNo,int marks)
    //     {
    //         this->marks = marks;
    //         this->rollNo = rollNo;
    //     }
    //     void display()
    //     {
    //         cout<<marks<<" "<<rollNo<<endl;
    //     }
    // };

    // class A{
    //     int x;
    //     public:
    //     A()
    //     {
    //         cout<<"Default"<<endl;
    //     }
    //     A(int x = 10)
    //     {
    //         cout<<"Para"<<endl;
    //     }
    // };
    // int main()
    // {
        // A.a1();
        // Student s;
        // Student s2(100,200);
        // s.display();
        // s2.display();
    // }

// FILES :
// 1) TEXT FILE : human readble , .txt !!
// 2) BINARY FILE : machine readble , .bin !!

// classes for filess:
// 1) #include <fstream> : both reading and writing
// 2) ofstream : write
// 3) ifstream : read

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
    // fstream a;
    // a.open("data.txt");
    // ifstream b;
    // b.open("data.txt");

    // if(!b)
    // {
    //     cout<<"file is not found";
    // }
    // else
    // {
    //     cout<<"file is there";
    // }

    // ofstream a("studentdata.txt");
    // a<<"Name : Vishal Kumar , id : 12501063 "<<endl;
    // a<<"Name : Fakrul Islam , id : 12506377 "<<endl;
    // a.close();
// }