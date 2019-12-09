#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            a[i][j]=a[n-1-i][j]=a[i][n-1-j]=a[n-1-i][n-1-j]=n-2-i-j;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}