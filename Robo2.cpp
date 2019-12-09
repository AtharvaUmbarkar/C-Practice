#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>

using namespace std;
int n; int a[10][10][4];
void rec(int i,int j,int *k,int z){
   if(i<n&&i>=0&&j<n&&j>=0)
   { if(i==n-1&&j==n-1)
    {
        for(int g=0;g<z;g++)
        cout<<k[g]<<" ";
    }
    if(i>=n||j>=n)return;
    //for(int b=0;b<4;b++)
    if(a[i][j][0]==0){k[z]=1;rec(i,j+1,k,z+1);}
    if(a[i][j][1]==0){k[z]=2;rec(i,j-1,k,z+1);}
    if(a[i][j][2]==0){k[z]=3;rec(i-1,j,k,z+1);}
    if(a[i][j][3]==0){k[z]=4;rec(i+1,j,k,z+1);}
    
}}
int main(){
    scanf("%d",&n);
       
    int p,q,r;int k[40];
    for(int i=0;i<n*n;i++){
        scanf("%d %d",&p,&q);
        for(int j=0;j<4;j++){
            scanf("%d",&a[p][q][j]);
        }
    } //input
    rec(0,0,k,0);
    return 0;
}