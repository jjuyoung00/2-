#include <stdio.h> 
int main(void) 
{ 
int sec,min,hour;
   printf("��(second)�� �Է��ϼ���: ");
   scanf("%d",&sec); min=sec/60;
   
    hour=min/60;  
    sec=sec%60; 
    min=min%60;  
	printf("%d�ð� %d�� %d��\n",hour,min,sec); 
	return 0; 
	}



