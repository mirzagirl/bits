#include<bits/stdc++.h>
using namespace std;
int main(){
    // to set bit
      cout<<(1<<0);
      cout<<(1<<1);
      cout<<(1<<2);
//   to unset a bit
    21  10101 3
    int n=21;
        n=n&(~(1<<2));
        cout<<n;
  //to check set bit
      int i=9;
      cout<<(i&(1<<3));
  //to set bits
      cout<<(9|(1<<3));
  //msb find
     cout<<log(19)/log(2);
     cout<<int(log(19)/log(2));
// to toggle 01 1 ??11 0(XOR)
  int n=17;
  n=n^(1<<4);
  cout<<n;
// to count bits
// __builtin_popcount()
//__builtin_popcountll()
  cout<<((16>>4)&1);
 //char a into A will be 5th bit set incase of a ??? and not set in case of  A
  //upper case to lower case
  
 char ch=('A'|' ');
 //output will be =a
 
  
    
    
    
    
    
}
