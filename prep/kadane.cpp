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

ll kadane(vector<long long>::iterator b, vector<long long>:: iterator e){
    ll maxSum=INT_MIN;
    ll sum= (*b);
    // cout<<*b<<" "<<*(++b);
    while(b!=e){
        if(sum<=0)sum = (*b);
        else sum=sum+ (*b);
        b++;
        maxSum=max(sum,maxSum);
    }
    return maxSum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T, n;
    vll arr;
    cin >> T;
    FOR(i, 0, T){
        cin >> n;
        arr.pb(n);
    }
    cout << kadane(arr.begin(),arr.end());
    return 0;
}