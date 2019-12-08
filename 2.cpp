#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
    char s[100];
    cin>>s;
    int d=0,t=0;
    int l=strlen(s),a[26];
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int i=0;i<l;i++){
        a[s[i]-97]+=1;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0) t+=1;
    }
    int r[t];t=0;
    for(int i=0;i<26;i++){
        if(a[i]!=0){r[t]=a[i];t+=1;}
    }
    /*for(int i=0;i<l-1;i++){
        if(a[s[i]-97]==a[s[i+1]-97]) b+=1;
        if((a[s[i]-97]!=a[s[i+1]-97])&&(abs(a[s[i]-97]-a[s[i+1]-97])==1)) c+=1;
        if(c>1) d+=1;
    }
    if(b==l-1) printf("YES");
    else if((c==1)&&(d==0)) printf("YES");
    else printf("NO");*/
    int flag1=0,flag2=0;
    for(int i=0;i<t;i++){
        d=0;
        for(int j=0;j<t;j++){
            if(r[i]==r[j]){
                d+=1;
            }
            else if(abs(r[i]-r[j])>1) flag2=1;
        }
        if((d==t)||(d==t-1)&&(flag2!=1)) flag1=1;
    }
    if(flag1) cout<<"YES";
    else cout<<"NO";

    return 0;
}