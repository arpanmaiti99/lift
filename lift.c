#include<stdio.h>
int main(){
	int i,j,a[6]={3,0,6,12,10,11},b[10],n,max;
	printf("Enter your floor number: ");
	scanf("%d",&n);
	j=0;
	for(i=0;i<6;i++){
		if(a[i]<=8){
		   b[j]=a[i];
		   j=j+1;	
		}
	}
	max=b[0];
	for(i=0;i<j;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(i=0;i<6;i++){
		if(a[i]==max){
			printf("Nearest lift number: %d",i+1);
			break;
		}
	}
	return(0);
	
}