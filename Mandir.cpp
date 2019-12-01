#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

    int n,k;
    string s;
    cin>>n>>s>>k;
    for(int i=0;i<n;i++){
        if(s.at(i)<65){
            continue;
        }
        if((s.at(i)>=65)&&(s.at(i)<=90)){
            s.at(i)=(((s.at(i)-65)+k)%26)+65;
        }
        if((s.at(i)>=97)&&(s.at(i)<=122)){
            s.at(i)=(((s.at(i)-97)+k)%26)+97;
        }
    }
    cout<<s;

    return 0;
}