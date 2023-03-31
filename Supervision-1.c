#include <stdio.h>
#include<string.h>

int main() {
    FILE *p; 
    char ch[100];
    
    p = fopen("example.txt", "w"); 
    if (p == NULL){
        printf("Error opening file!");
    }
    else{
    	printf("Enter text : ");
    	gets(ch);
    	fputs(ch,p);
    	fclose(p); 
	}
    
    return 0;
}




