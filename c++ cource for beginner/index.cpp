#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)

{
  int c;

  c = a + b;

  return c;
}

class Employe
{
public:
  string name;
  int salary;

  Employe(string n, int s, int sp)
  {
    this->name = n;
    this->salary = s;
    this->secretpassword = sp;
  }

  void printdetails()
  {
    cout << " The name of our first Employ is " << this->name << " and his salary is " << this->salary << " Ruppes" << endl;
  }

  void getsecretpassword()
  {
    cout << "The secret password of employe is " << this->secretpassword<<" Chindi choar";
  }

private:
  int secretpassword;
};

int main()
{
  // cout<<" Hello MOto";

  // int marksinmaths=92;
  // cout<<" The marks in math is "<<marksinmaths;
  // short a;
  // int b;
  // long c;
  // long long d;
  // float Gst = 22.34
  // ;
  // cout<<" the Gst charge of the stuff is"<<Gst;

  // int a, b;

  // cout<< "Enter the first number"<< endl;
  //  cin>> a;

  // cout<<"Enter the seconmd number"<< endl;
  // cin>> b;
  // // cout<< "sum of two number is "<< a + b;
  //  cout<<" a + b = " << a  + b <<endl;
  //   cout<<" a - b = " << a - b<<endl ;
  //    cout<<" a * b = " << a * b <<endl;
  //     cout<<" a / b = " << (float) a / b <<endl;

  // int age;
  // cout << " Enter your age" << endl;
  // cin >> age;

  // switch //
  // {
  // case 12:
  //     cout << "you are 12 year old" << endl;
  //     break;
  // case 18:
  //     break;
  //     cout << " you are 18 year old" << endl;

  // default:
  //     cout << "you are neither 12 nor 18";
  //     break;
  // }

  // // if(age>150 || age<1 ) {
  // //     cout<<"  paidaa to ho le thick se "<<endl;

  // // }
  // // else if(age>=18){
  // //     cout<<" you have Right to stay on the page"<< endl;
  // // }
  // else{
  //     cout<<" Chota bheem dek jaa k"<<endl;
  // }/

  // int counting = 0;

  // while ( counting <=100)
  // {
  //   cout<<"coutint 0 to 100 for smart kid "<<counting <<endl;
  //   counting = counting + 1;
  // }
  // do
  // {
  //   cout<<"coutint 0 to 100 for smart kid "<<counting <<endl;
  //   counting = counting + 1;

  // } while ( counting <= 100);
  // for (int i = -100; i <=100; i++)
  // {
  //   cout<<" the value of i is "<<i<<endl;
  // }

  // int a, b;

  // cout<< "Enter the first number"<< endl;
  //  cin>> a;

  // cout<<"Enter the seconmd number"<< endl;
  // cin>> b;
  //  cout<<" The summ of two number is "<<add(a,b);

  // int arr[5] = {1, 3, 11, 44, 55};

  // // cout<<arr[4];

  // int Udhari[6];
  // for (int i = 1; i < 6; i++)
  // {
  //   cout << " Udhari of mangte log " << i << " mangte log " << endl;
  //   cin >> Udhari[i];
  // }
  // for (int i = 1; i < 6; i++)
  // {
  //   cout << "Udhari of mangte log" << i << "mangte log " << Udhari[i] << endl;
  // }

  // int arr2d[2][3] = {
  //     {1, 2, 3},
  //     {4, 3, 6}};
  // for (int i = 0; i < 2; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     cout << " The value at " << i << " ," << j << " is "<< arr2d[i][j] << endl;
  //   }
  // }

  // int a = 323;
  // float b = 11.23;
  // cout<<(float) a/32<<endl;
  //   cout<<(int) b;

  // string name = "Dishalwa";
  // cout<< "The name is "<<name<< endl;
  // cout<< "The length of name is "<<name.length()<< endl;
  // cout<< "The name is "<<name.substr(0,3)<< endl;

  // cout<< "The name is "<<name.substr(2,4)<< endl;

  //   int a = 35;
  //   int* ptra;
  //  ptra  = &a;
  //   cout<<" The value of a is"<<a<<endl;
  //   cout<<" The value of a is"<<*ptra<<endl;
  //   cout<<" The value of a is"<<&a<<endl;
  //   cout<<" The value of a is"<<ptra<<endl;

  Employe Bidden("joe bidden ", 150, 666543);
  // Bidden.name = "Joe Bidden";
  // Bidden.salary = 6000;
  Bidden.printdetails();
  Bidden.getsecretpassword();

  // cout<<" The name of our first Employ is "<<Bidden.name<<" and his salary is "<<Bidden.salary<<" Ruppes"<<endl;

  return 0;
}