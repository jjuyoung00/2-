#include <stdio.h>
#include <string.h>
 
void phone_division(char *s);
 
int main(void)
{
        char str[50];
        printf("��ȭ��ȣ �Է�:");
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
               printf("���ڿ��� �߸� �Է��ϼ̽��ϴ�\n");
               return;
        }
}
