#include <stdio.h> 
int main(void) 
{ 
int sec,min,hour;
   printf("초(second)를 입력하세요: ");
   scanf("%d",&sec); min=sec/60;
   
    hour=min/60;  
    sec=sec%60; 
    min=min%60;  
	printf("%d시간 %d분 %d초\n",hour,min,sec); 
	return 0; 
	}



