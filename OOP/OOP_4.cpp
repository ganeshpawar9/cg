// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;

// class student
// {
//     string name;
//     int roll;

// public:
//     void set_data()
//     {
//         cout << "Enter the Name      : ";
//         cin >> name;
//         cout << "Enter the Roll No.  : ";
//         cin >> roll;
//     }
//     void display()
//     {
//         cout << "Enter Name     :" << name << endl;
//         cout << "Enter Roll No. :" << roll << endl;
//     }
// };
// int main()
// {
//     student *s;
//     fstream f;
//     int size;

//     f.open("Student_Data.txt", ios::in | ios::out);
//     cout << "Enter the number of student :";
//     cin >> size;
//     s=new student[size];
//     for (int i = 0; i < size; i++)
//     {
//         cout << "\nEnter information of " << i + 1 << " student : "<<endl;
//         s[i].set_data();
//         f.write((char*)&s[i], sizeof(s[i]));
//         cout<<endl;
//     }

//     f.seekg(0);

//     for (int i = 0; i < size; i++)
//     {
//         f.read((char*)&s[i], sizeof(s[i]));
//         s[i].display();
//         cout<<endl;
//     }
//     f.close();
//     delete []s;
//     return 0;
// }


#include<iostream>
#include<fstream>
using namespace std;

class student
{
    string name;
    int roll;

public:
    void set_data()
    {
        cout << "Enter the Name      : ";
        cin >> name;
        cout << "Enter the Roll No.  : ";
        cin >> roll;
    }
    void display()
    {
        cout << "Enter Name     :" << name << endl;
        cout << "Enter Roll No. :" << roll << endl;
    }
};

int main()
{
    fstream file;
    int size;
    student *arr;
    file.open("ganesh.txt",ios::in | ios::out);

    cout<<"Enter the number of students :";cin>>size;
    arr=new student[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"\nEnter the Information of Student "<<i+1<<endl;
        arr[i].set_data();
        file.write((char*)&arr[i],sizeof(student));
        cout<<endl;
    }
    file.seekg(0);
    for (int i = 0; i < size; i++)
    {
        cout<<"\nInformation of Student "<<i+1<<endl;
        file.read((char*)&arr[i],sizeof(student));
        arr[i].display();
    }
    file.close();
    delete []arr;
    
    

}