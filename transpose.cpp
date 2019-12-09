#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int **arr=(int**)malloc(m*8);
    for(int i=0;i<m;i++){
        arr[i]=(int*)malloc(n*4);
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }



    return 0;
}