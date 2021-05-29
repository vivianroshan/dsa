//compaction
#include<bits\stdc++.h>

#define vi vector<int>
#define pb vector::push_back
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORd(i, a, b) for(int i = a; i >= b; i--)
#define pb vector::push_back
#define PB vector::pop_back

typedef long long ll;

using namespace std;
class compact{
    public:
    void compaction1(int *arr, int r, int w, int arrSize){
        compaction(arr, r, w, arrSize);
    }
        
private: void compaction(int *arr, int r, int w, int arrSize){
    if (r==arrSize){
        for(;w<10;w++){
            arr[w]=0;
        }
        return;
    }
    else if (w==r){
        if(arr[r]!=0)w++;
        r++;
    }
    else if (arr[r]==0){
        r++;
    }
    else{
        arr[w]=arr[r];
        w++;
        r++;
    }
    compaction(arr, r, w,arrSize);
}
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    int read=0,write=0;
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    //input
    compact obj;
    for(int i=0;i<arrSize;i++){
            cin>>arr[i];
        }
    
    //function
    obj.compaction1(arr, read, write, arrSize);

    //output
    for(int i=0;i<arrSize;i++){
            cout<<arr[i]<<" ";
        }
}
