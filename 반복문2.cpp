#include <stdio.h>
main(){
	//1���� 10����(i)�� ��(sum)�� ����غ���.	
	int i=1 , sum=0 ;
	
	while( i <= 10    ){
		sum = sum + i; //sum += i;
		i++;
	}
	printf("1���� 10����(i)�� ��: %d", sum);	
}
