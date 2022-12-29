#include<iostream>
#include<string>
using namespace std;

template <class T>
void selectionSort(T *arr ,int size)
{
  for(int i=0; i<size-1; i++)
  {
    int MainIndex =i;
    
    int CurrIndex=i+1;
    
    for(; CurrIndex<size; CurrIndex++)
    {
      if(arr[MainIndex]>arr[CurrIndex])
      {
        MainIndex = CurrIndex;
      }
    }
    swap(arr[i],arr[MainIndex]);
  }
  
}


template <class T>
void input(T* arr, int size)
{
  cout<<"Enter "<<size<<" value for array :"<<endl;
  for(int i=0; i<size; i++)
  {
    cin>>arr[i];
  }
}

template <class T>
void output(T *arr, int size)
{
  for(int i=0; i<size; i++)
  cout<<arr[i]<<" ";
  cout<<endl;	
}

int main()
{
  int size, choice=0;
  int* arr;
  float* arr1;
  string* arr2;
  cout<<"**************MENU*************"<<endl
      <<"1. INT array"<<endl
      <<"2. FLOAT array"<<endl
      <<"3. STRING array"<<endl
      <<"4. Break"<<endl;
     
  while (choice!=4)
  {
      cout<<"Enter the choice: ";cin>>choice;
      cout<<endl;
      switch (choice)
      {
        
      case 1:
        cout<<"Enter size of array: ";cin>>size;
        arr=new int[size];
        input(arr,size);
        selectionSort(arr,size);
        cout<<"Sorted Array"<<endl;
        output(arr,size);
        delete []arr;
        break;

      case 2:
        cout<<"Enter size of array: ";cin>>size;
        arr1=new float[size];
        input(arr1,size);
        selectionSort(arr1,size);
        cout<<"Sorted Array"<<endl;
        output(arr1,size);
        delete []arr1;
        break;

      case 3:
        cout<<"Enter size of array: ";cin>>size;
        arr2=new string[size];
        input(arr2,size);
        selectionSort(arr2,size);
        cout<<"Sorted Array"<<endl;
        output(arr2,size);
        delete []arr2;
        break;

      case 4:
        break;

      default:
        cout<<"Enter correct option"<<endl;
        break;
      }
  }


  return 0;
}