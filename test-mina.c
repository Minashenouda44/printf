#include "main.h"
#include <stdio.h>

int main()
{
	char ch = 'A';
	char str[] = "Hello, World!";
	int num = 42;
	unsigned int uint_num = 12345;
	unsigned int bin_num = 31;
	void* ptr = NULL;
	unsigned int octal_num = 77;
	unsigned int hex_num = 255;
	unsigned int capital_hex_num = 255;

	/* Test my custom _printf function */

    _printf("Custom _printf:\n");
    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);
    _printf("Decimal Integer: %d\n", num);
    _printf("Integer (i): %i\n", num);
    _printf("Unsigned Integer: %u\n", uint_num);
    _printf("Binary: %b\n", bin_num);
    _printf("Pointer: %p\n", ptr);
    _printf("Octal: %o\n", octal_num);
    _printf("Hexadecimal: %x\n", hex_num);
    _printf("Capital Hexadecimal: %X\n", capital_hex_num);
    _printf("Reverse String: %r\n", str);
    _printf("Reverse Capital String: %R\n", str);


    /* Test standard printf function */

    printf("\nStandard printf:\n");
    printf("Character: %c\n", ch);
    printf("String: %s\n", str);
    printf("Decimal Integer: %d\n", num);
    printf("Integer (i): %i\n", num);
    printf("Unsigned Integer: %u\n", uint_num);
    printf("Binary: %u\n", bin_num);
    printf("Pointer: %p\n", ptr);
    printf("Octal: %o\n", octal_num);
    printf("Hexadecimal: %x\n", hex_num);
    printf("Capital Hexadecimal: %X\n", capital_hex_num);
    printf("Reverse String: %s\n", str); // %r not supported by standard printf
    printf("Reverse Capital String: %s\n", str); // %R not supported by standard printf

    /* Edge cases */

    _printf("Edge Cases:\n");

    _printf("Character: %c\n", '\0');
    _printf("String: %s\n", NULL);
    _printf("Pointer: %p\n", &ch);
    _printf("Decimal Integer: %d\n", 0);
    _printf("Unsigned Integer: %u\n", 0);
    _printf("Octal: %o\n", 0);
    _printf("Hexadecimal: %x\n", 0);
    _printf("Capital Hexadecimal: %X\n", 0);
    _printf("Character: %c\n", 255);
    _printf("Decimal Integer: %d\n", -42);
    _printf("Integer (i): %i\n", -42);
    _printf("Unsigned Integer: %u\n", -1);
    _printf("Octal: %o\n", -1);
    _printf("Hexadecimal: %x\n", -1);
    _printf("Capital Hexadecimal: %X\n", -1);
    _printf("Pointer: %p\n", &num);


    printf("Character: %c\n", '\0');
    printf("String: %s\n", NULL);
    printf("Pointer: %p\n", &ch);
    printf("Decimal Integer: %d\n", 0);
    printf("Unsigned Integer: %u\n", 0);
    printf("Octal: %o\n", 0);
    printf("Hexadecimal: %x\n", 0);
    printf("Capital Hexadecimal: %X\n", 0);
    printf("Character: %c\n", 255);
    printf("Decimal Integer: %d\n", -42);
    printf("Integer (i): %i\n", -42);
    printf("Unsigned Integer: %u\n", -1);
    printf("Octal: %o\n", -1);
    printf("Hexadecimal: %x\n", -1);
    printf("Capital Hexadecimal: %X\n", -1);
    printf("Pointer: %p\n", &num);

    return (0);
}
