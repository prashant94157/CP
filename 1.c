#include<stdio.h>
#include<string.h>
void swap(char** ptr1, char** ptr2)
{
    char * temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    char *str1 = "Ritambhara";
    char *str2 = "0123456789";
    printf("%s : %s\n", str1, str2);
    swap(&str1, &str2);
    printf("%s : %s\n", str1, str2);
}