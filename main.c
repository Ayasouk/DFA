#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _SUCCESS 1
#define _FAIL 0
 
 int bA(char st[10], int *deb, int *fin){
     char c = 'a';
     if(st[(*deb)]==c){
         (*deb)++;
         return _SUCCESS;
     }
     else {
         return _FAIL;
     }
 }
  
int bB(char st[10],int *deb, int *fin){
     char c = 'b';

     if(st[(*fin)]==c){
     	(*fin)--;
	return _SUCCESS;
     }
     else {
     	return _FAIL;
     }
}

int bS(char st[10], int *deb, int *fin){
     if((*deb)>(*fin)){
     	return _SUCCESS;
     }
     else if(bA(st,deb,fin)&&bB(st,deb,fin)&&bS(st,deb,fin)){
	return _SUCCESS;
     }
     else if(bA(st,deb,fin)&&bB(st,deb,fin)){
     	return _SUCCESS;
     }
     else{
     	return _FAIL;
     }

}

 int main()
 {   
     int i=0;
     int j;
     char st[10]="aaabebb";
     j = strlen(st)-1;
     printf("ind deb : %d\n",i);
     printf("ind fin : %d\n",j);
     if(bS(st,&i,&j)){
     	printf("%s is a part of the language\n",st);
     }
     else{
     	printf("%s is not a part of the language\n",st);
     }
     printf("ind deb : %d\n",i);
     printf("ind fin : %d\n",j);
     return _SUCCESS;
}
