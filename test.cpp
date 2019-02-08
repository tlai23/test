#include<iostream>
using namespace std;

  int main()
  {
   int a[4]={1,2,3,4},b[4],i,j;
   cout<<"Before: ";
   for(i=0; i<4 ;i++)
   {
   cout<<a[i]<<" ";
   }
   cout<<endl;
   cout<<"After: ";

   for(i=3,j=0; i>=0;i--,j++)
   {
    b[i]=a[j];
   }
   for(i=0; i<4 ;i++)
   {
   cout<<b[i]<<" ";
   }
   cout<<endl;
   return 0;
  }
