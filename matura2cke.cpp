#include <iostream>
using namespace std;
int ile;
int f(int x, int p){
  if (x == 0){
      return 0;
  }
  else{
      int c=x%p;
      if(c%2==1)
      {
          ile++;
          return f(x/p,p)+c;
      }
      else
      {
          ile++;
          return f(x/p,p)-c;
      }
  }
}
int main()
{
    for (int i = 99; i>0; i--)
    {
        if(f(i,4)==0)
        {
            cout<<i<<" ";
            return 0;
            
        }
    }
    //cout<<f(i,3)<<" "<<ile+1;
}
