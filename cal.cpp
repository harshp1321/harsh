#include <iostream>
using namespace std;
double factorial(int n)
{
if (n==0||n==1)
return 1;
else
{
return n* factorial(n-1);
}
int main()
{
int n;
cout<<"Enter a number: ";
cin>>n;

double answer=0;
answer=factorial(n);
cout<<"factorial of "<<n<<"is:"<<answer;
}

