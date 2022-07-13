#include <stdio.h>
main(){
	//1부터 10까지(i)의 합(sum)을 출력해보자.	
	int i=1 , sum=0 ;
	
	while( i <= 10    ){
		sum = sum + i; //sum += i;
		i++;
	}
	printf("1부터 10까지(i)의 합: %d", sum);	
}
