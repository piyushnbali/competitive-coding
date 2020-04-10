#include<stdio.h>
void main() {
int n;
scanf("%d",n);
for(int i=0; i<n; i++){
for(int j=0; j<n; j++){
if(i%2==0){
if(j%2==0){printf("$");}
else {printf("*");}}
else{
if(j%2==0){printf("*");}
else {printf("$");}
}
}
printf("\n");
}
}
