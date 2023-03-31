#include<stdio.h>
#include<string.h>
int main(){
	FILE *p;
	char ch[50];

	p=fopen("example.txt","a");
	if(p==NULL){
		printf("error");
		
	}
	else{
		printf("Enter text:");
		gets(ch);
		fputs("\n",p);
		fputs(ch,p);
		fclose(p);
	}
	
return 0;
}
