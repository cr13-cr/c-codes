#include<iostream>
using namespace std;
int main()
{
  int num,n,x;
  cout<<"\n Enter the number for which the multiplication table should be printed : ";
  cin>>num;
  cout<<"\n Enter the number of terms till which the multiplication table should be printed : ";
  cin>>n;
  for(x=1;x<=n;++x)
  cout<<"\n"<<num<<"*"<<x<<"="<<(num*x)<<endl;
  return 0;
}
