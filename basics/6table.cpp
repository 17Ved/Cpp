#include<iostream>
using namespace std;

int main()
{
    
   int num , i, res;                // By taking user input
   cout<<"Enter a no to print it's multiplication table"<<endl;
   cin>>num;
   for(int i = 1; i <=10; i++){
        res = num * i;
        cout<<res<<endl;
   }


   int no = 7, i, fin;              // Without taking user input
   for(int i = 1; i<=10; i++){
    fin = no * i;
    cout<<fin<<endl;
   }
    return 0;
}
