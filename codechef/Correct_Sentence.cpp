#include<bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define vi vector<int>
#define vli vector<long>
#define pb push_back
#define endl '\n'
#define um unordered_map
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORd(i, a, b) for(int i = a-1; i >= b; i--)

using namespace std;

int correctSentence(vector<string> &str){
    for(auto s: str){
        int y=s.size();
        int check=0;
        while(s[check]>='a' && s[check]<='m'){
            // cout<<check<<" ";
            if(++check==y)break;
        }
        if (check==y)continue;
        if (check>0) return 0;
        else{
        while(s[check]>='N' && s[check]<='Z'){
            // cout<<check<<" ";
            if(++check==y)break;
        }
        }
        if (check==y)continue;
        return 0;
    }
    return 1;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, k;
    string s;
    cin >> T;
    FOR(i, 0, T){
        cin >> k;
        vector<string> str;
        FOR(j, 0, k){
            cin >> s;
            str.pb(s);
        }
        cout << ((correctSentence(str))?"YES":"NO") << endl;
    }
    return 0;
}