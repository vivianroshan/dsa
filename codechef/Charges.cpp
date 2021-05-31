#include<bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define vi vector<int>
#define vli vector<long>
#define vll vector<long long>
#define pb push_back
#define endl '\n'
#define um unordered_map
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORd(i, a, b) for(int i = a-1; i >= b; i--)

using namespace std;

typedef long long ll;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void charges(ll n, ll k){
    string charge;
    cin >> charge;
    int flag=0;
    char ch;
    ll gap=0;
    for(auto q: charge){
        if (flag==0){
            ch=q;
            flag=1;
            continue;
        }
        gap++;
        if (ch==q)gap++;
        ch=q;
    }
    // cout << gap << endl;
    ll x;
    while (k>0){
        k--;
        cin >> x;
        x--;
        // cout<<x<<"\t";
        if (n==1){   
        }
        else if (x==0){
            if (charge[x]==charge[x+1])gap--;
            else gap++;
            charge[x]=(charge[x]=='0')?'1':'0';
        }
        else if (x==n-1){
            if (charge[x]==charge[x-1])gap--;
            else gap++;
            charge[x]=(charge[x]=='0')?'1':'0';
        }
        else{
            if (charge[x]==charge[x+1])gap--;
            else gap++;
            if (charge[x]==charge[x-1])gap--;
            else gap++;
            charge[x]=(charge[x]=='0')?'1':'0';
        }
        cout << gap << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll T, n, k;
    cin >> T;

    FOR(i, 0, T){
        cin >> n >> k;
        charges(n, k);
        // cout << charges(n, k) << endl;
    }
    return 0;
}