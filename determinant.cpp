#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

long determinant(int **a,int n){
    if(n==1) return a[0][0];
    if(n==2) return 0;
}

int main(){
    int n;
    scanf("%d",&n);

    int **a=(int**)malloc(8*n);
    for(int i=0;i<n;i++){
        a[i]=(int*)malloc(4*n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    long t=determinant(a,n);




    return 0;
}