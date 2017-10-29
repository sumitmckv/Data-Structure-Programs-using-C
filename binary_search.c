#include<stdio.h>
void bsort(int a[],int);
void bsearch(int a[],int,int,int);
int main(){
	int n,a[50],i,search;
	printf("enter the no. of elements: \n");
	scanf("%d",&n);
	printf("enter elements: \n");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	printf("enter the searched element : \n");
	scanf("%d",&search);
	bsort(a,n);
	bsearch(a,0,n-1,search);
	return 0
}
void bsort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;++i){
		for(j=i+1;j<n;++j){
			if(a[i]>=a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
}
void bsearch(int a[],int low,int high,int search){
	int mid;
	if(low>high)
		printf("no. is not present \n");
	else{
	mid=low+(high-low)/2;
	if(search==a[mid]){
		printf("no. is present  \n");
	}
	else if(search<a[mid]){
		bsearch(a,low,mid-1,search);
	}
	else
        bsearch(a,mid+1,high,search);		
	
}
}
