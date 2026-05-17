#include<iostream>
#include<climits>
using namespace std;
void findlargest(int arr[] , int n, int &a){
    int small=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            a=small;
            small=arr[i];
        }
        else if(arr[i]<a && arr[i]!=small){
            a=arr[i];
        }
    }
}
int main(){
    int n=5;
    int a=INT_MAX;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
findlargest(arr,n,a);
cout<<a;
return 0;

}