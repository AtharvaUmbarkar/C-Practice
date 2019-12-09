//#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int maxs=10;

struct queue{
    int data[10];
    int head=0;
    int tail=0;
};

void enqueue(struct queue *q,int val){
    q->data[q->tail]=val;
    q->tail+=1;
}

int dequeue(struct queue *q){
    int temp=q->data[q->head];
    q->head+=1;
    return temp;
}

int qisempty(struct queue *q){
    if(q->head==q->tail) return 1;
    else return 0;
}

int qisfull(struct queue *q,int maxs=10){
    if(q->tail==maxs){
        return 1;
    }
    else return 0;
}

int main(){
    struct queue q;
    enqueue(&q,20);
    enqueue(&q,45);
    printf("%d\n",qisfull(&q,10));
    printf("%d\n",dequeue(&q));


    return 0;
}