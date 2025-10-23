#include<stdio.h>
int main(){
	int arr[10];

	int search, count=0;
		for(int i=0; i<10; i++) {
			printf("Enter number %d :",i+1); 
			scanf("%d", &arr[i]);
		}
		printf("Enter element for search :");
		scanf("%d", &search);
		for(int i=0; i<10; i++) {
			if(arr[i]==search) {
				count++;		
			}
		}
	    if(count>0) {
	    	printf("%The number %d occurred %d times",search, count);
		}else {
			printf("Number is not found");
		}
	
	return 0;
}
