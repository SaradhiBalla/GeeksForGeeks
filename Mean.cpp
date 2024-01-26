//https://www.geeksforgeeks.org/problems/mean0021/1?page=1&difficulty=School&sortBy=accuracy
//Given the marks of N students in an Array A, calculate the mean.
#include<stdio.h>
main(){
	int result,sum,N;
	scanf("%d",&N);
	int A[N];
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<N;i++){
		 sum=A[i]+sum;
        }
        result=sum/N;
        printf("%d",result);
}
