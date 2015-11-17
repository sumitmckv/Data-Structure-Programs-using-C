#include<stdio.h>
int merge_sort(int [],int,int);
int merge(int [],int,int,int);
int a[50];
int main(){
	int n,i;
	printf("enter the no. of elements: \n");
	scanf("%d",&n);
	printf("enter elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	printf("sorted array is: \n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
return 0;	
}
int merge_sort(int a[],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
	}
return 0;
}
int merge(int a[],int l,int m,int h){
	int n1,n2,a1[10],a2[10],i,j,k;
	n1=m-l+1;
	n2=h-m;
	for(i=0;i<n1;i++)
		a1[i]=a[l+i];
	for(j=0;j<n2;j++)
		a2[j]=a[m+j+1];
	a1[i]=9999;
	a2[j]=9999;
	i=0;
	j=0;
	for(k=l;k<=h;k++)
	{
		if(a1[i]<=a2[j])
		{
			a[k]=a1[i++];
		}
		else{
			a[k]=a2[j++];
			
		}
	}
return 0;	
}
