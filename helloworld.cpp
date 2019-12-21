#include<iostream>
using namespace std;
int add(int a,int b)
{
  return a+b;
}
int subtract(int a,int b)
{
  return a-b;
}
int main()
{
  int a,b,sum,difference;
  cout<<"Enter 2 nos.";
  cin>>a>>b;
  sum=add(a,b);
  cout<<"Sum = "<<sum;
  difference=subtract(a,b);
  cout<<"\nDifference = "<<difference;
  return 0;
}
