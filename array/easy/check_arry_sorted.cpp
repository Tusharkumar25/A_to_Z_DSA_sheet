#include<iostream>
#include<climits>
using namespace std;
bool findlargest(int arr[] , int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n=5;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
bool a=findlargest(arr,n);
cout<<a;
return 0;
}