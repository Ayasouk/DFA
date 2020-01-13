#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _SUCCESS 1
#define _FAIL 0

typedef struct point {
    int x;
    int y;
} Point ;

int bA(char ** st, int deb, int fin){
    if ((*st[deb])=="a"){
        deb++;
        return _SUCCESS;
    }
    else{
        return _FAIL;
    }
}

int bB(char ** st, int deb, int fin){
    if((*st[deb])=="b"){
        deb++;
        return _SUCCESS;
    }
    else{
        return _FAIL;
    }
}

int bS(char ** st, int deb, int fin){
    if((*st)=="ab"){
        return _SUCCESS;
    }
    else if((*st)[deb]=="a" & (*st)[fin]=="b" & bS(st, deb++, fin--)){
        return _SUCCESS;
    }
    else{
        return _FAIL;
    }
}

int stringSize(char* c){
    int i =0;
    while(c[i]!="\0"){
        i++;
    }
    return i+1;
}

int main()
{
    Point p;
    int i;
    p.x=1;
    p.y=2;
    char st[3][10];
    strcpy(st[0],"ab");
    strcpy(st[1],"aaabbb");
    strcpy(st[2],"aabaaba");

    printf(st[0]);
    if(bA("a",0,2)){
        printf("it works");
    }
    else{
        printf("nop");
    }
    /*for(int i=0; i<3; i++){
        printf("current word : %s ", st[i]);
        if(bS(&st[i], 0, stringSize(st[i]))){
            printf("SUCCESS");
        }
        else{
            printf("FAIL");
        }
    }*/
    return _SUCCESS;
}
