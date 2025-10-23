#include<stdio.h>
#include<ctype.h>
int main(){
	char str[100];
	printf("Enter a sentence :");
	scanf("%[^\n]", str);
	for(int i=0; str[i]!='\0'; i++) {
		if(isupper(str[i])) { 
			str[i]=tolower(str[i]);
		}else if(islower(str[i])) {
			str[i]=toupper(str[i]);
		}	    
}
   printf("Converted : %s", str);
	return 0;
}
