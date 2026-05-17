#include<iostream>

using namespace std;
void left_rotate(int *arr , int n){
    if(n<=1)return;
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main(){
int n=5;
int arr[n];

for(int i=0;i<n;i++){
cin>>arr[i];
}

left_rotate(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i];
}

return 0;
}