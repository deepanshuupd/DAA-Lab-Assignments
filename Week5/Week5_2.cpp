#include<iostream>
#define MAX 50
using namespace std;
int main(){
        int n,i,key; cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];}
            cin>>key;
        sort(a,a+n);
        int j=0,k=n-1;
        while(j<k){
            if(a[j]+a[k]==key){
                cout<<a[j]<<"and"<<a[k]<<endl; k--;}
            else if(a[j]+a[k]<key)
                j++;
            else if(a[j]+a[k]>key)
                k--;
            else
                cout<<"No such pair"; 
            
        }
    return 0;
}