/*Continue number adding like 12345=1+2+3+4+5=15*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int n,t,sum=0,remainder;  
  cout<<"Enter any number\n";
  cin>>n;
  t=n;
  while(t!=0)
  {
    remainder=t%10;
    sum=sum+remainder;
    t=t/10 ;
  }
  cout<<"sum of digits of \n"<<n<<"\n"<<sum;
  getch();
}
