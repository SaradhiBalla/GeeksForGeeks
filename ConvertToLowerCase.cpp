//Given a string S. The task is to convert characters of string to lowercase.
//https://www.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313/1?page=1&difficulty=School&sortBy=accuracy
#include<stdio.h>
main(){
	char S;
	scanf("%s",S);
	 int i,n = strlen(S);
	 
        for(int i = 0;i<n;i++){
            if(isupper(S[i])){
                S[i] = tolower(S[i]);
            }
        }
        printf("%s",S[i]);
    }
}
