/* Program to traverse through the array */

#include<iostream>
using namespace std;

int main()  // main function
{
  int i,n;  // local variables for the loop and the size of the array
  cout<<"Enter the size of the array"<<endl;
  cin>>n;  // entering the size of the array we want
  cout<<"The Size of the array = "<<n<<endl;
  int a[n]; // declaring an array
  for(i=0;i<=n;i++)
   {
     cin>>a[i]; // entering the elements in the array
   }
  cout<<"Displaying the array"<<endl;
  for(i=0;i<=n;i++)
  {
   cout<<a[i]<<endl;
  }
  return 0;
}  // program ends

