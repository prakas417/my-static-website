#include<stdio.h> 
#include<string.h> 
int main() 
{ 
 char str[24],c[4]; 
 int i,x; 
 printf("Enter the string:"); 
 scanf("%s",str); 
 x=strlen(str); 
 for(i=0;i<=x;i++) 
 { 
 c[i]=str[i]^0; 
 
 } 
 printf("The result of XOR operation is: %s",c); 
 }