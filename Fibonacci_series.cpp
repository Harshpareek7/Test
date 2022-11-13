#include<iostream>
using namespace std;
int main(){
   int a = 0; 
   int b = 1;
   cout<<"Enter the no. to which yo
   u want to print fibonacci series\n";
   int n ;
   cin>>n;
   cout<<a<<" "<<b<<" ";
   for (int i = 1; i <= n ; i++)
   {
       int sum = a + b;
       cout<<sum<<" ";
       a=b;
       b=sum;
   }
    cout<<endl;
return 0;
}
