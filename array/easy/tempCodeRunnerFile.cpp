#include<iostream>
#include<climits>
using namespace std;
int findlargest(int *arr , int n){
   if(n==0){
    return 0;
   }
    int i=0;
    for(int j=1;j<n;j++){
       if(arr[i]!=arr[j]){
        i++;
        arr[i]=arr[j];
       }
    }
    return i+1;
}
int main(){
    int n=5;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int a=findlargest(arr,n);

for(int i=0;i<a;i++){
    cout<<arr[i];
}
return 0;

}