#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>

using namespace std;


int fermat(int n,int p){
    int a=0;
    if(n==1) return 1;
    

    return a;
}

int main(){
    int n,p;
    cin>>n>>p;
    int a=fermat(n,p);
    cout<<a;
    return 0;
}



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