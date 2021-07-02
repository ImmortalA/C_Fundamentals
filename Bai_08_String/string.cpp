#include <stdio.h>
#include <string.h>

/*
Chuỗi được xem như một mảng gồm các phần tử kiểu char. Ngoài ra ký hiệu kết thúc chuỗi được quy
ước là ký tự ‘\0’ (ký tự có mã ASCII là 0) đặt ở cuối chuỗi. Như vậy một mảng ký tự gồm n phần tử
sẽ lưu được tối đa n – 1 ký tự.
*/

int main()
{
    char str_1[10] = "Hello";
    char str_2[] = "Hello world";
    char str[100];

    printf("string 1: %s\n", str_1);
    printf("string 2: %s\n", str_2);

    printf("Nhap chuoi:\n");
    fflush(stdin);
    gets(str);
    printf("Chuoi: %s\n", str);

    int string_length = strlen(str);
    printf("Do dai chuoi = %d", string_length);

    return 0;
}