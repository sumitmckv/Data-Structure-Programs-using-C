#include<stdio.h>
int a[25];
int main(){
	int i,n;
	printf("enter the no. of elements in the array: \n");
	scanf("%d",&n);
	printf("enter elements: \n");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	hsort(a,n);
	printf("sorted sequence: ");
	for(i=1;i<=n;i++){
		printf("%d \t",a[i]);
	}
	return 0;
}
int build_heap(int a[],int len){
	int i;
	for(i=len/2;i>0;i--)
		max_heapify(a,i,len);
return 0;
}
int max_heapify(int a[],int root,int length){
	int l,r,largest,t;
	l=2*root;
	r=2*root+1;
	if((l<=length) && (a[l]>a[root]))
		largest=l;
	else
		largest=root;
    if((r<=length) && (a[r]>a[largest]))
		largest=r;
	if(largest!=root){
		t=a[root];
		a[root]=a[largest];
		a[largest]=t;
	
	max_heapify(a,largest,length);
	}
return 0;	
}
int hsort(int a[],int n){
	int temp,i;
	build_heap(a,n);
	for(i=n;i>1;i--){
		temp=a[1];
		a[1]=a[i];
		a[i]=temp;
		
		max_heapify(a,1,i-1);
	}
	return 0;
}
