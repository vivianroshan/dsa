//ordinaryNumbers

#include<bits\stdc++.h>

#define vi vector<int>
#define pb vector::push_back
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORd(i, a, b) for(int i = a; i >= b; i--)
#define pb vector::push_back
#define PB vector::pop_back

typedef long long ll;

using namespace std;

void ordinaryNumbers(int n){
    int n1=n, count=0;
    vi single;
    while(n1>0){
        single.pb(n1%10);
        n1=n1/10;

    }
    count = (single.size()-1)* 9;
    FOR(i,0,single.size()-1){
        // cout<<single.size()<<"\n";
        n1=n1*10+single.back();
    }
    count+=single.back();
    if(n1>n)count-=1;
    cout<<count<<"\n";
    while(0);
}

int main(){
  int n,x;
  cin>>n;
  FOR(i,0,n-1){
    cin>>x;
    ordinaryNumbers(x);
  }
  return 0;
}
