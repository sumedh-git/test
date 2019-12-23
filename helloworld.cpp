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

int mul(int a, int b){
  return a*b; 
}
int div(int a,int b)
{
return a/b;
}
int main()
{
  int a,b,sum,difference,multiply,division;
  cout<<"Enter 2 nos.";
  cin>>a>>b;
  sum=add(a,b);
  cout<<"Sum = "<<sum;
  difference=subtract(a,b);
  cout<<"\nDifference = "<<difference;
  multiply = mul(a,b);
  cout<<"\nMultiplication:"<<multiply;
  division=div(a,b)
  cout<<"\n\nDivision:" <<division;  
  return 0;
}
