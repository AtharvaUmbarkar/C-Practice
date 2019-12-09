#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

class shape{
    public:
    int width;
    int height;
    /*shape(int w,int h){
        width=w;
        height=h;
    }*/
};

class triangle:public shape{
        public:
        triangle(int w,int h){
            width=w;
            height=h;
        }
        void area(){
            cout<<0.5*width*height<<endl;
        }
        
    };

class rectangle:public shape{
        public:
        rectangle(int w,int h){
            width=w;
            height=h;
        }
        void area(){
            cout<<width*height<<endl;
        }
        
    };

int main(){
    
    triangle t=triangle(10,10);
    t.area();
    rectangle r=rectangle(100,100);
    r.area();

    return 0;
}