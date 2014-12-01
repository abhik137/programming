#include <stdio.h>
#include <string.h>
int main(){
    int i,j;
    char str[13][50],temp[50];
    printf("Enter 10 words:\n");
    for(i=0;i<13;++i)
        gets(str[i]);
    for(i=0;i<13;++i){
       puts(str[i]);
    }
    printf("\n");  
    for(i=0;i<12;++i)
       for(j=i+1;j<13 ;++j){
          if(strcmp(str[i],str[j])>0)
          {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
          }
    }
    printf("In lexicographical order: \n");
    for(i=0;i<13;++i){
       puts(str[i]);
    }
return 0;
}

// http://www.programiz.com/c-programming/examples/lexicographical-order