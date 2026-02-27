
// int arr[] = {5,3,2,4,1};
// you need to return pair count that where i>j like 
// {5,3} , {5,2} , {5,1} , {3,2}, {3,1}, {2,1} {4,1} so the total is 8


// Brute Force          T.C -> o(n^2)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {5,3,2,4,1};
//     int n=sizeof(arr)/4;
//     int c=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 c++;
//             }
//         }
//     }
//     cout<<c;
// }

