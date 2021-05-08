#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
typedef struct{
    int *data;
    int length;
    int maxsize;
    }Seqlist;

 int main(){

}

void InitList(Seqlist &L){
    L.data=(int *)malloc(sizeof(int)*Initsize);
    L.length=0;
    L.maxsize=Initsize;
}

viod IncreaseList(Seqlist &L,int len){
    int *p=L.data
    L.data=(int *)malloc(sizeof(int)*(len+L.maxsize));
    for(int i=0;i<L.length;i++)
        L.data[i]=p[i];
    L.maxsize=L.maxsize+len;
    free(p);
}

