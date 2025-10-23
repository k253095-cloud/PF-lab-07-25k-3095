#include<stdio.h>
#include<limits.h>
int main(){
	int a[10];
	printf("Enter a 10 numbers");
//Input	
	for(int i=0; i<10; i++) {
		printf("\nEnter elements %d :", i+1);
		scanf("%d", &a[i]);
	}
	int max=INT_MIN, min=a[0];
//print	
      for(int i=0; i<10; i++) {
      	if(max<a[i]) {
      		max=a[i];
		  }
	  else if(min>a[i]) {
	  	    min=a[i];
	   }
    }
    printf("\nMaximum number is : %d", max);
    printf("\nManinum number is : %d", min);
	return 0;
}
