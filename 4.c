#include <stdio.h>
#include <string.h>
 
void phone_division(char *s);
 
int main(void)
{
        char str[50];
        printf("전화번호 입력:");
        scanf("%s", str);
        phone_division(str);
        return 0;
}
 
void phone_division(char *s)
{
        char phone[50] = { NULL };
        int length = strlen(s);
        if (length == 10)
        {
               memmove(phone, s, 3);
               printf("%s-", phone);
               memmove(phone, s + 3, 3);
               printf("%s-", phone);
               memmove(phone, s + 6, 4);
               printf("%s\n", phone);
        }
        else if(length==11)
        {
               memmove(phone, s, 3);
               printf("%s-", phone);
               memmove(phone, s + 3, 4);
               printf("%s-", phone);
               memmove(phone, s + 7, 4);
               printf("%s\n", phone);
        }
        else
        {
               printf("문자열을 잘못 입력하셨습니다\n");
               return;
        }
}
