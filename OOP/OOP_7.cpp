#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,long long int> population;
    population["Maharashtra"]=7026357;
    population["Rajasthan"]=6578936;
    population["Karanataka"]=6678993;
    population["Punjab"]=5789032;
    population["West Bengal"]=6676291;
    map<string,long long int>::iterator it;
    
    int choice=0;
    string state_name;
    while (choice!=2)
    {
        cout<<"********MENU*******"<<endl
        <<"To get population of state "<<endl
        <<"Break"
        <<endl;
        cout<<"Enter your choice :";cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"\nEnter the name of state: ";cin>>state_name;
            it=population.find(state_name);
            if(it!=population.end())
                cout<<"\n"<<state_name<<" 's population is "<<it->second<<endl;
            else
                cout<<"\nKey is not population"<<endl;
            break;
        case 2:
            break;
        default:
            cout<<"Enter the correct option";
            break;
        }
    }
}
    
    