#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

int main()
{


int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
for(int x:arr){
    if(x==key){
        cout<<"Found";
        return 0;
    }
}
cout<<"not found";
return 0;
    
}
