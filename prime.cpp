#include <iostream>  
using namespace std;  
int main()  
{  
  int a, i, b=0, flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> a;  
  b=a/2;  
  for(i = 2; i <= b; i++)  
  {  
      if(a % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;  
  return 0;  
}  