#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
    char s[100];
    cin>>s;
    int l=strlen(s),a[26],b=0,c=0;
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int i=0;i<l;i++){
        a[s[i]-97]+=1;
    }
    for(int i=0;i<l-1;i++){
        if(a[s[i]-97]==a[s[i+1]-97]) b+=1;
        if((a[s[i]-97]!=a[s[i+1]-97])&&(abs(a[s[i]-97]-a[s[i+1]-97])==1)) c+=1;
    }
    if(b==l-1) printf("YES");
    else if(c==1) printf("YES");
    else printf("NO");

    return 0;
}