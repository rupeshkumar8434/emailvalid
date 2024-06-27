#include <iostream>

using namespace std;
int  print(int a){
     cout<<a<<endl;
      int y=(2*a);

     return y;
}
int main()
{
    int a;
    cin>>a;
      int x=print(a);
      cout<<x<<endl;

    return 0;
}
