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
		return _SUCCESS && ((*deb)<=(*fin));
	}
     }
     return _FAIL;
 }
  
int bInt(char st[10], int *deb, int *fin){
     if(bN(st,deb,fin)&&((*deb)>=(*fin)))
     	    return _SUCCESS;
     if(bN(st,deb,fin)){
     	    return (_SUCCESS && bInt(st,deb,fin));
     }
     else{
     	    return _FAIL;
     }
}

 int main()
 {   
     int i=0;
     int j;
     char st[10]="12";
     j = strlen(st);
     printf("ind deb : %d\n",i);
     printf("ind fin : %d\n",j);
     if(bInt(st,&i,&j)){
     	printf("%s is a part of the language\n",st);
     }
     else{
     	printf("%s is not a part of the language\n",st);
     }
     printf("ind deb : %d\n",i);
     printf("ind fin : %d\n",j);
     return _SUCCESS;
}
