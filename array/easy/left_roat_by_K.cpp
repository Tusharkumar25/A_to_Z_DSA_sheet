#include<iostream>

using namespace std;
void reverse(int *arr,int start,int end){
    while(start<end){
       swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void left_rotate(int *arr , int n,int k){
    if(n<=1)return;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

}

int main(){
int n=5;
int arr[n];
int k=2;
for(int i=0;i<n;i++){
cin>>arr[i];
}

left_rotate(arr,n,k);

for(int i=0;i<n;i++){
    cout<<arr[i];
}

return 0;
}