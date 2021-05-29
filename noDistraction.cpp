//noDistraction

#include<iostream>
#include<vector>

#define vi vector<int>
#define pb vector::push_back
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORd(i, a, b) for(int i = a; i >= b; i--)
#define pb vector::push_back
#define PB vector::pop_back

typedef long long ll;

using namespace std;

int noDistraction(string s){
  string s1=" ";
  bool flag=0;
  FOR(i,0,s.length()-1){
    FOR(j,1,s1.length()-1){
      // for(auto a: s1){
      //   cout<<s1<<"\n";
      // }
      if (s[i]==s1[j]){
        flag=1;
        break;
      }
      }
      s1+=s[i];
      if (i==s.length())break;
      while(s[i+1]==s1.back()){
        i++;
        if (i==s.length())break;
      }
      if (flag==1)break;
  }
  if (flag==0)
    cout<<"YES\n";
  else
    cout<<"NO\n";
    return 0;
}

int main(){
  int n,x;
  string s;
  cin>>n;
  FOR(i,0,n-1){
    cin>>x>>s;
    noDistraction(s);
  }
  return 0;
}