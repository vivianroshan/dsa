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

int fibonacci(int n,long long *fib, int temp=0,long long result_0=-1, long long result_1=1){
    if (temp<=n){
        fib[temp]=result_0+result_1;
        fibonacci(n,fib,temp+1,result_1,result_0+result_1);
    }
    return 0;
}
int main(){
    int n;
    std::cin>>n;
    long long fib[n+1];
    fibonacci(n,fib);
    for (int i=1; i<(sizeof(fib)/sizeof(fib[0]));i++){
        std::cout<<fib[i]<<" ";
    }
}