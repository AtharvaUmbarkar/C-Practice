//#include<bits/stdc++.h>
#include<stdio.h>
//#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>

//using namespace std;

int main(){
    int n; scanf("%d",&n);
    int a[n][n],r=0,b[n][n];
    char c='y';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("\n");
    while(c!='X'){
        scanf("%c",&c);
        if(c=='R') r-=1;
        if(c=='L') r+=1;
    }
    r%=4;
    if(r>0){
        for(int k=0;k<r;k++){
            for(int i=n-1;i>=0;i--){
                for(int j=0;j<n;j++){
                    b[n-1-i][j]=a[j][i];
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=b[i][j];
                }
            }
        }
    }
    if(r<0){
        r=abs(r);
        for(int k=0;k<r;k++){
            for(int i=0;i<n;i++){
                for(int j=n-1;j>=0;j--){
                    b[i][n-1-j]=a[j][i];
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=b[i][j];
                }
            }
        }
    }
    if(r==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                b[i][j]=a[i][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}