#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
struct stingstruct{
	int string1, string2;
};
//transceive.string1form numbers into char than split it into two parts
struct stingstruct decrypt(int original, struct stingstruct re){
	char num[10]={0};
//transform int to char
	itoa(original,num,2);
	
//split into two parts
	int len=strlen(num);
	
	char second[15]={0};
	strcpy(second,num+len/2);
//judge odd or even 
	if(len%2==1){
	num[len/2]=0;}
	if(len%2==0){
	num[len/2-1]=0;}

//transform char into int
	int fir=tran(atoi(num));
	int sec=tran(atoi(second));
		
	re.string1 = fir;
	re.string2 = sec;
	return re;
}
//function to calculate power n of 2
int power(int n){
	int sum=1;
	int x;
	for(x=0;x<n;x++){
		sum*=2;
	}
	return sum;
}
//function to transform B into D bit
int tran(int num){
	int remainder;
	int n=0;
	int sum=0;
	while(num!=0){
		remainder=num%10;
		num/=10;
		sum+=power(n)*remainder;
		n++	;
	}
	return sum;
}
//main function
int main(void) 
{ 
//use the struct 
    struct stingstruct send, receive;
//output
    receive = decrypt(31337^15643, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);
	receive = decrypt(31337^6913, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);
	receive = decrypt(31337^6916, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);
	receive = decrypt(31337^23040, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);receive = decrypt(31337^2377, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);
	receive = decrypt(31337^6985, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);
	receive = decrypt(31337^6408, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^3657, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^5638, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^3084, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^2119, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^15910, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^23079, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);
	receive = decrypt(31337^13629, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^23101, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^10300, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^10557, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^23073, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^13092, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);	
	receive = decrypt(31337^23369, send);
    printf("%c",receive.string1);
	printf("%c",receive.string2);						
}
//15643 6913 6916 23040 2377 6985 6408 3657 5638
//3084 2119 15910 23079 13629 23101 10300 10557
//23073 13092 23369
