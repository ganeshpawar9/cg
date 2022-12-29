// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;

// class Student
// {
//   string name;
//   int roll_no;
//   string clas;
//   string div;
//   string dob;
//   string bloodgroup;
//   string contactaddress;
//   long long int telephone_no;

// public:
//   friend class Student_Database;
//   static int count;

//   void set_data()
//   {
//     cout<<"Enter the data for Student No."<<count<<endl;
//     cout << "Entre your Name: " << endl;
//     cin >> name;
//     cout << "Entre your Roll No.: " << endl;
//     cin >> roll_no;
//     cout << "Entre your Class: " << endl;
//     cin >> clas;
//     cout << "Entre your Divison: " << endl;
//     cin >> div;
//     cout << "Entre your Date of Birth: " << endl;
//     cin >> dob;
//     cout << "Entre your Blood Group: " << endl;
//     cin >> bloodgroup;
//     cout << "Entre your Contact Address: " << endl;
//     cin >> contactaddress;
//     cout << "Entre your Telephone No.: " << endl;
//     cin >> telephone_no;
//     count++;
//   }
//   void show_data()
//   {
//     cout
//         << "Name :                 " << name << endl
//         << "Roll no :              " << roll_no << endl
//         << "Class :                " << clas << endl
//         << "Div :                  " << div << endl
//         << "Date Of Birth :        " << dob << endl
//         << "Blood group :          " << bloodgroup << endl
//         << "Contact address :      " << contactaddress << endl
//         << "telephone no :         " << telephone_no << endl
//         << endl;
//   }
//   Student()
//   {
//     name = 'a';
//     roll_no = 0;
//     clas = 'a';
//     div = 'a';
//     dob = 'a';
//     bloodgroup = 'a';
//     contactaddress = 'a';
//     telephone_no = 0;
//   }
//   Student(Student &obj)
//   {
//     name = obj.name;
//     roll_no = obj.roll_no;
//     clas = obj.clas;
//     div = obj.div;
//     dob = obj.dob;
//     bloodgroup = obj.bloodgroup;
//     contactaddress = obj.contactaddress;
//     telephone_no = obj.telephone_no;
//   }
// };

// int Student:: count=1;

// class Student_Database
// {
//   Student *s;

// public:
//   int No_of_student;
//   int size;
//   Student_Database(int si)
//   {
//     size = si;
//     s = new Student[size];
//     No_of_student = 0;
//   }
//   ~Student_Database()
//   {
//     delete[] s;
//   }

//   void add_data()
//   {
//     s[No_of_student].set_data();
//     No_of_student++;
//     cout << "No of student:" << No_of_student << endl;
//   }

//   void find_data(long long int a)
//   {

//     for (int i = 0; i < No_of_student; i++)
//     {
//       if (s[i].roll_no == a || s[i].telephone_no == a)
//       {
//         s[i].show_data();
//       }
//     }
//   }
//   void find_data(string a)
//   {

//     for (int i = 0; i < No_of_student; i++)
//     {
//       if (s[i].name == a || s[i].dob == a || s[i].bloodgroup == a || s[i].contactaddress == a)
//       {
//         s[i].show_data();
//       }
//     }
//   }
//   void delete_data(long long int a)
//   {

//     for (int i = 0; i < No_of_student; i++)
//     {
//       if (s[i].roll_no == a || s[i].telephone_no == a)
//       {
//         for (int j = i; j < No_of_student - 1; j++)
//         {
//           s[j] = s[j + 1];
//         }
//         No_of_student=No_of_student-1;
//       }
//     }
//   }
//   void delete_data(string a)
//   {

//     for (int i = 0; i < No_of_student; i++)
//     {
//       if (s[i].name == a || s[i].dob == a || s[i].bloodgroup == a || s[i].contactaddress == a)
//       {
//         for (int j = i; j < No_of_student - 1; j++)
//         {
//           s[j] = s[j + 1];
//         }
//         No_of_student=No_of_student-1;
//       }
//     }
//   }

//   inline void display_data()
//   {
//     for (int i = 0; i < No_of_student; i++)
//     {
//       s[i].show_data();
//     }
//   }
// };

// int main()
// {
//   int size = 0, choice = 0, ans = 0;
//   cout << "Enter no of students: ";
//   cin >> size;
//   Student_Database s1(size);
//   string s;
//   long long int a;

//   while (choice != 7)
//   {
//     cout << "**************MENU*************" << endl
//          << "1. Add data of student" << endl
//          << "2. Find data of student by Name, Date of Birth, Blood group, Contact address" << endl
//          << "3. Find data of student by Roll no, telephone number " << endl
//          << "4. Delete data of student by Name, Date of Birth, Blood group, Contact address" << endl
//          << "5. Delete data of student by Roll no, telephone number " << endl
//          << "6. Display data of student" << endl
//          << "7. Break" << endl
//          << endl;

//     cout << "\nEnter the choice: ";
//     cin >> choice;
//     switch (choice)
//     {
//     case 1:
//       s1.add_data();
//       break;

//     case 2:
//       cout << "Enter the (Name/Date of Birth/Blood group/Contact address) :";
//       cin >> s;
//       s1.find_data(s);
//       break;

//     case 3:
//       cout << "Enter the (Roll no, Telephone no) :";
//       cin >> a;
//       s1.find_data(a);
//       break;

//     case 4:
//       cout << "Enter the (Name/Date of Birth/Blood group/Contact address) :";
//       cin >> s;
//       s1.delete_data(s);
//       break;

//     case 5:
//       cout << "Enter the (Roll no, Telephone no) :";
//       cin >> a;
//       s1.delete_data(a);
//       break;

//     case 6:
//       s1.display_data();
//       break;

//     case 7:
//       break;

//     default:
//       cout << "Enter correct option" << endl;
//       break;
//     }
//   }

//   return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class Student_Info
{
  private:
  string name;
  string div;
  int roll_no;
  public:

  friend class Database;
  Student_Info()
  {
    name="";
    div="";
    roll_no=0;
  }
  Student_Info(string name, string div, int roll_no)
  {
    this->name=name;
    this->div=div;
    this->roll_no=roll_no;
  }
  Student_Info(Student_Info &obj)
  {
    name=obj.name;
    div=obj.div;
    roll_no=obj.roll_no;
  }
  void set_data()
  {
    cout<<"Enter the name       :";cin>>name;
    cout<<"Enter the div        :";cin>>div;
    cout<<"Enter the roll no    :";cin>>roll_no;
  }
  inline void print()
  {
    cout<<"Name of student      :"<<name<<endl;
    cout<<"Div of student       :"<<div<<endl;
    cout<<"Roll no of student   :"<<roll_no<<endl;
  }
};

class Database
{
  private:
  int size;
  Student_Info *s;
  public:
  static int No_of_database;

  Database(int size)
  {
    this->size=size;
    s=new Student_Info[size];
  }

  void add_data()
  {
    cout<<"\nEnter the information of student "<<No_of_database<<endl;
    s[No_of_database].set_data();
    No_of_database++;
  }
  void display(int n)
  {
    cout<<"\nInformation of student "<<n<<" is"<<endl;
    s[n].print();
    cout<<endl;
  }
  int search(string str)
  {
    for (int i = 1; i <= No_of_database; i++)
    {
      if(str==s[i].div || str==s[i].name)
      {
        return i;
        break;
      }
    }
    return -1;
  }
  int search(int n)
  {
    for (int i = 1; i <= No_of_database; i++)
    {
      if(n==s[i].roll_no)
      {
        return i;
        break;
      }
    }
    return -1;
  }


};
int Database:: No_of_database(1);

int main()
{
  Database d(4);
  d.add_data();
  d.add_data();
  d.display(1);


  return 0;
}