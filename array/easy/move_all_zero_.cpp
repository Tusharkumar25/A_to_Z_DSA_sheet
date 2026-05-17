#include<iostream>

using namespace std;
void move_all_zero(int *arr,int n){
    int j;
    for(int i=0;i<n;i++){
        if(arr[i]==0){j=i;
        break;
    }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0)
          {  swap(arr[i],arr[j]);
            j++;
            }
        
    }
}

int main(){
int n=5;
int arr[n];
int k=2;
for(int i=0;i<n;i++){
cin>>arr[i];
}
move_all_zero(arr,n);


for(int i=0;i<n;i++){
    cout<<arr[i];
}

return 0;
}