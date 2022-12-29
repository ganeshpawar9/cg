// #include<iostream>
// using namespace std;

// class Complex_Number
// {
//   int real;
//   int imag;
//   public:
//     Complex_Number()
//     {
//       real=0;
//       imag=0;
//     }
//     Complex_Number(int num1, int num2)
//     {
//       real=num1;
//       imag=num2;
//     }
//     Complex_Number operator+(Complex_Number x);
//     Complex_Number operator*(Complex_Number x);
//     Complex_Number operator-(Complex_Number x);
//     Complex_Number operator/(Complex_Number x);
//     friend  istream & operator>>(istream &in, Complex_Number &x);
//     friend ostream & operator <<(ostream &in, Complex_Number &x);
// };



// Complex_Number Complex_Number :: operator+(Complex_Number x)
// {
//   Complex_Number z;
//   z.real= x.real+real;
//   z.imag= x.imag+imag;
//   return z;
// }

// Complex_Number Complex_Number :: operator-(Complex_Number x)
// {
//   Complex_Number z;
//   z.real= x.real-real;
//   z.imag= x.imag-imag;
//   return z;
// }
    
// Complex_Number Complex_Number:: operator*(Complex_Number x)
// {
//   Complex_Number z;
//   z.real=(x.real*real)-(x.imag*imag);
//   z.imag=(x.real*imag)+(x.imag*real);
//   return z;
// }

// Complex_Number Complex_Number:: operator/(Complex_Number x)
// {
//   Complex_Number z;
//   z.real= ((x.real*real)+(x.imag*imag))/((x.real*x.real)+(x.imag*x.imag));
//   z.imag= ((imag*x.real)-(real*x.imag))/((x.real*x.real)+(x.imag*x.imag));
//   return z;
// }

// istream & operator >>(istream &in, Complex_Number &x)
// {
//       cout<<"Enter the real part:";
//       in>>x.real;
//       cout<<"Enter the imaginary part:";
//       in>>x.imag;
//       return in;
// }
// ostream & operator <<(ostream &in, Complex_Number &x)
// {
//       if(x.imag>0)
//         cout<<x.real<<"+"<<x.imag<<"i"<<endl;
//       else
//         cout<<x.real<<"+"<<x.imag<<"i"<<endl;
// }

// int main()
// {
//   Complex_Number c1,c2,c3;
//   int choice=0;
//   cout<<"**************MENU*************"<<endl
//       <<"1. Enter 1st complex number"<<endl
//       <<"2. Enter 2nd complex number"<<endl
//       <<"3. Print 1st complex number"<<endl
//       <<"4. Print 2nd complex number"<<endl
//       <<"5. Addition"<<endl
//       <<"6. Subtraction"<<endl
//       <<"7. Multiplication"<<endl
//       <<"8. Multiplication"<<endl
//       <<"9. Break"<<endl<<endl;
//   while (choice!=9)
//   {
//       cout<<"\nEnter the choice: ";cin>>choice;
//       switch (choice)
//       {
//       case 1:
//         cin>>c1;
//         break;
        
//       case 2:
//         cin>>c2;
//         break;

//       case 3:
//         cout<<c1<<endl;
//         break;

//       case 4:
//         cout<<c2<<endl;
//         break;

//       case 5:
//         c3=c1+c2;
//         cout<<c3<<endl;
//         break;

//       case 6:
//         c3=c1-c2;
//         cout<<c3<<endl;
//         break;

//       case 7:
//         c3=c1*c2;
//         cout<<c3<<endl;
//         break;

//       case 8:
//         c3=c1/c2;
//         cout<<c3<<endl;
//         break;
      
//       case 9:
//         break;
//       default:
//         cout<<"Enter correct option"<<endl;
//         break;
//       }
//   }
  
//   return 0;
// }

#include<iostream>
using namespace std;

class ComplexNumber
{
  private:
  float real, imag;

  public:
  friend istream & operator>>(istream & in, ComplexNumber &obj);
  friend ostream & operator<<(ostream & out, ComplexNumber &obj);


  ComplexNumber()
  {
    real=0;
    imag=0;
  }
  ComplexNumber(float real, float imag)
  {
    this->real=real;
    this->imag=imag;
  }

  ComplexNumber operator+(ComplexNumber c)
  {
    ComplexNumber ans;
    ans.real=real+c.real;
    ans.imag=imag+c.imag;
    return ans;
  }

  ComplexNumber operator-(ComplexNumber c)
  {
    ComplexNumber ans;
    ans.real=real-c.real;
    ans.imag=imag-c.imag;
    return ans;
  }

  ComplexNumber operator*(ComplexNumber c)
  {
    ComplexNumber ans;
    ans.real=(real*c.real)-(imag*c.imag);
    ans.imag=(real*c.imag)+(c.real*imag);
    return ans;
  }

  ComplexNumber operator/(ComplexNumber c)
  {
    ComplexNumber ans;
    ans.real=((real*c.real)+(imag*c.imag))/((c.real*c.real)+(c.imag*c.imag));
    ans.imag=((real*c.imag)-(c.real*imag))/((c.real*c.real)+(c.imag*c.imag));
    return ans;
  }
};

istream & operator>>(istream & in, ComplexNumber &obj)
{
  cout<<"Enter the real part of Complext Number :";
  in>>obj.real;
  cout<<"Enter the imag part of Complext Number :";
  in>>obj.imag;
}
ostream & operator<<(ostream & out, ComplexNumber &obj)
{
    if(obj.imag>=0)
    {
      out<<obj.real<<" + "<<obj.imag<<"i"<<endl;
    }
    else
    {
      out<<obj.real<<" - "<<-(obj.imag)<<"i"<<endl;
    }
}

int main()
{
  ComplexNumber c1,c2,c3;
  int choice=0;
  while (choice!=7)
  {
    cout<<"******MENU********"<<endl
    <<"1. Enter the first Complex Number "<<endl
    <<"2. Enter the second Complex Number "<<endl
    <<"3. To print Addition of two Complex Number "<<endl
    <<"4. To print Subtration of two Complex Number "<<endl
    <<"5. To print Multiplication of two Complex Number "<<endl
    <<"6. To print Division of two Complex Number "<<endl
    <<"7. Break"<<endl;

    cout<<"Enter the choice :";cin>>choice;
    switch (choice)
    {
    case 1:
      cin>>c1;
      break;
    case 2:
      cin>>c2;
      break;
    case 3:
      c3=c1+c2;
      cout<<c3<<endl;
      break;
    case 4:
      c3=c1-c2;
      cout<<c3<<endl;
      break;
    case 5:
      c3=c1*c2;
      cout<<c3<<endl;
      break;
    case 6:
      c3=c1/c2;
      cout<<c3<<endl;
      break;
    case 7:
      break;
    
    default:
      cout<<"Invalid"<<endl;
      break;
    }
  }
  return 0;
}