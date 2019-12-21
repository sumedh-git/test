#include<iostream>
using namespace std;
int add(int a,int b)
{
  return a+b;
}
int main()
{
  int a,b,sum;
  cout<<"Enter 2 nos.";
  cin>>a>>b;
  sum=add(a,b);
  cout<<"Sum = "<<sum;
  return 0;
}
