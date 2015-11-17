#include<stdio.h>
float a[25];
int main(){
	int i,n;
	printf("enter the no. of elements: \n");
	scanf("%d",&n);
	printf("enter elements \n");
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	insertion(a,n-1);
	printf("sorted sequence is: \n");
	for(i=0;i<n;i++)
		printf("%.2f \t",a[i]);
	return 0;
}
int insertion(float a[],int length){
	int i,j;
	float key;
	for(j=1;j<=length;j++){
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]>key){
			a[i+1]=a[i];
			i=i-1;
			a[i+1]=key;
		}
	}
	return 0;
}
