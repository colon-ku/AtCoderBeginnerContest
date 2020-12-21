#include<bits/stdc++.h>
using namespace std;
//予想
short s=32767;//2^15-1
unsigned short us=65535;//2^16-1
int i=2147483647;//2^31-1
unsigned int ui=4294967295;//2^32-1
long l=2147483647;//2^31-1
unsigned long ul=4294967295;//2^32-1
long long ll=(1LL<<63)-1;//2^63-1
unsigned long long ull=(1LL<<64)-1;//2^64-1
int main() {
  //予想値
  cout<<s<<endl;
  cout<<us<<endl;
  cout<<i<<endl;
  cout<<ui<<endl;
  cout<<l<<endl;
  cout<<ul<<endl;
  cout<<ll<<endl;
  cout<<ull<<endl;
  cout<<endl;
  //オーバーフローするかどうかの実験
  s+=1;
  us+=1;
  i+=1;
  ui+=1;
  l+=1;
  ul+=1;
  ll+=1;
  ull+=1;
  cout<<s<<endl;
  cout<<us<<endl;
  cout<<i<<endl;
  cout<<ui<<endl;
  cout<<l<<endl;
  cout<<ul<<endl;
  cout<<ll<<endl;
  cout<<ull<<endl;
  cout<<endl;
  //実際値
  cout<<SHRT_MAX<<endl;
  cout<<USHRT_MAX<<endl;
  cout<<INT_MAX<<endl;
  cout<<UINT_MAX<<endl;
  cout<<LONG_MAX<<endl;
  cout<<ULONG_MAX<<endl;
  cout<<LLONG_MAX<<endl;
  cout<<ULLONG_MAX<<endl;
  cout<<endl;
  //オーバーフローするかどうかの実験
  s=SHRT_MAX+1;
  us=USHRT_MAX+1;
  i=INT_MAX+1;
  ui=UINT_MAX+1;
  l=LONG_MAX+1;
  ul=ULONG_MAX+1;
  ll=LLONG_MAX+1;
  ull=ULLONG_MAX+1;
  cout<<s<<endl;
  cout<<us<<endl;
  cout<<i<<endl;
  cout<<ui<<endl;
  cout<<l<<endl;
  cout<<ul<<endl;
  cout<<ll<<endl;
  cout<<ull<<endl;
  return 0;
}