#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _SUCCESS 1
#define _FAIL 0
 
int bN(char st[10], int *deb, int *fin){
     
     int N[]={'0','1','2','3','4','5','6','7','8','9'};
     int i;

     for(i=0;i<10;i++){
     	if(st[(*deb)]==N[i]){
		(*deb)++;
		return _SUCCESS;
	}
     }
     return _FAIL;
 }
  

 int main()
 {   
     int i=0;
     int j;
     char st[10]="122";
     j = strlen(st)-1;
     printf("ind deb : %d\n",i);
     printf("ind fin : %d\n",j);
     if(bN(st,&i,&j)){
     	printf("%s is a part of the language\n",st);
     }
     else{
     	printf("%s is not a part of the language\n",st);
     }
     printf("ind deb : %d\n",i);
     printf("ind fin : %d\n",j);
     return _SUCCESS;
}
