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
/*Motivational Quotes of the Day
1. "People often say that motivation doesn't last. Well, neither does bathing -- that's why we recommend it daily." -Zig Ziglar

2. "Someday is not a day of the week." -Denise Brennan-Nelson

3. "Hire character. Train skill." -Peter Schutz

4. "Your time is limited, so don't waste it living someone else's life." -Steve Jobs

5. "Sales are contingent upon the attitude of the salesman -- not the attitude of the prospect." -W. Clement Stone

6. "Everyone lives by selling something." -Robert Louis Stevenson

7. "If you are not taking care of your customer, your competitor will." -Bob Hooey

8. "The golden rule for every businessman is this: Put yourself in your customer's place." -Orison Swett Marden

9. "If you cannot do great things, do small things in a great way." -Napoleon Hill*/
