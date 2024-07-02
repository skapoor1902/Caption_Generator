#include<iostream>
using namespace std;
int GreatInt(int n){
    int max=INT_MIN;
    while(n!=0){
        int curr=n%10;
        if(curr>max){
            max=curr;
        }
        n=n/10;
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int x=GreatInt(n);
    cout<<x;
}