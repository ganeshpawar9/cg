#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Personal_info
{
public:
    string name, dob;
    long long int telephone_number;

    Personal_info()
    {
        name="";
        dob="";
        telephone_number=0;
    }
    Personal_info(string n,string d, long long int a)
    {
        name=n;
        dob=d;
        telephone_number=a;
    }
    friend bool checkbyname(Personal_info p1, Personal_info p2);
    friend bool checkbydob(Personal_info p1, Personal_info p2);
    friend bool checkbytelephone(Personal_info p1, Personal_info p2);




    void set_data()
    {
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Data Of Birth: ";
        cin >> dob;
        cout << "Enter the Telephone NO: ";
        cin >> telephone_number;
    }
    void get_data()
    {
        cout << "Name:                  " << name << endl;
        cout << "Data of birth:         " << dob << endl;
        cout << "Telephone No:          " << telephone_number << endl<<endl;
    }
     
};
bool checkbyname(Personal_info p1, Personal_info p2)
{
    if (p1.name < p2.name)
        return true;
    return false;
}
bool checkbydob(Personal_info p1, Personal_info p2)
{
    if (p1.dob < p2.dob)
        return true;
    return false;
}
bool checkbytelephone(Personal_info p1, Personal_info p2)
{
    if (p1.telephone_number < p2.telephone_number)
        return true;
    return false;
}

int main()
{
    int choice=0;
    string s;
    long long int a;
    Personal_info p;
    Personal_info s1("ganesh","",0);
    vector<Personal_info> v;

    while (choice != 9)
    {
        cout << "\n**************MENU*************" << endl
         << "1. Insert" << endl
         << "2. Display" << endl
         << "3. Sort by Name" << endl
         << "4. Sort by Date of Birth" << endl
         << "5. Sort by Telephone no" << endl
         << "6. Search by Name" << endl
         << "7. Search by Date of Birth" << endl
         << "8. Search by Telephone No" << endl
         << "9. Break" << endl;

        cout << "Enter the choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {

        case 1:
            p.set_data();
            v.push_back(p);
            break;

        case 2:
            for (int i = 0; i < v.size(); i++)
            {
                v[i].get_data();
            }
            break;

        case 3:
            sort(v.begin(), v.end(), checkbyname);
            break;

        case 4:
            sort(v.begin(), v.end(), checkbydob);
            break;

        case 5:
            sort(v.begin(), v.end(), checkbytelephone);
            break;

        case 6:
            cout<<"Enter the name :";cin>>s1.name;
            if(binary_search(v.begin(), v.end(),s1, checkbyname))
                cout<<s1.name<<" is present in the data base ";
            else
                cout<<s1.name<<" is not present in the data base ";
            break;

        case 7:
            cout<<"Enter the date of birth :";cin>>s1.dob;
            if(binary_search(v.begin(), v.end(),s1, checkbydob))
                cout<<s1.dob<<" is present in the data base ";
            else
                cout<<s1.dob<<" is not present in the data base ";   
            break;

        case 8:
            cout<<"Enter the telephone no. :";cin>>s1.telephone_number;
            if(binary_search(v.begin(), v.end(),s1, checkbytelephone))
                cout<<s1.telephone_number<<" is present in the data base ";
            else
                cout<<s1.telephone_number<<" is not present in the data base ";   
            break;

        case 9:
            break;
            
        
        default:
            cout << "Enter correct option" << endl;
            break;
        }
    }

    return 0;
}