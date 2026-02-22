#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini=INT_MAX;
        for(int j=0;j<n-1;j++){
            int sum=arr[j]+arr[j+1];
            mini = min(mini,sum);
        }
        cout<<mini<<endl;
        
    }
}