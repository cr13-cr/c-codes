#include<iostream>
using namespace std;
int main()
{
  int a,b,x,lcm,gcd;
  cout<<"\n Enter the value of x and y : ";
  cin>>a>>b;
  x=a*b;
  for(int i=a;i<=x;++i)
{
  if (i%a==0 && i%b==0)
    {
      lcm=i;
      break;
    }
    cout<<"\n LCM = "<<lcm;
    gcd=x/lcm;
    cout<<"\n GCD = "<<gcd;
  }
  return 0;
}
