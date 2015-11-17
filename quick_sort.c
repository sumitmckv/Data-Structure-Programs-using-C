#include<stdio.h>
int a[20];
int main(){
	int n,i;
	printf("enter no. of elements: \n");
	scanf("%d",&n);
	printf("enter elements: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,0,n-1);
	printf("sorted sequence is: \n");
	for(i=0;i<n;i++)
		printf("%d \t",a[i]);

return 0;
}
int qsort(int a[],int low,int high){
	int part;
	if(low<high){
	part=partition(a,low,high);
	qsort(a,low,part-1);
	qsort(a,part+1,high);
}
return 0;
}
int partition(int a[],int l,int h){
	int pivot,i,j,temp;
	pivot=a[h];
	i=l-1;
	for(j=l;j<h;j++){
		if(a[j]<=pivot){
			i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
	temp=a[i+1];
	a[i+1]=a[h];
	a[h]=temp;
	return i+1;
}
