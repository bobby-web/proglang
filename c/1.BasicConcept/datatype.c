#include <stdio.h>
/*
Data Type In C:
1. char for single character
2. double for double percision float
3. float for float point number (real number)
4. int for integer
5. long for long integer

format specifier:
1. %c for chars
2. %f for float and doubles
3. %i for int
4. $li for longs
5. %s for strings
6. %d for decimal
7. %x for hexadecimal
8. %e for scientific notation

// backslash (\):
1. \n for new line
2. \t for horizontal tab
3. \\for backslash
4. \b for backspace
5. \' for single quote
6. \" for double quote
*/

int main() {
    printf("Memory Size For Data Type: \n"); 
    printf("Character: %ld Byte \n",sizeof(char)); // 1 byte
    printf("Double: %ld Byte \n",sizeof(double)); // 8 byte
    printf("Float: %ld Byte \n",sizeof(float)); // 4 byte
    printf("Integer: %ld Byte \n",sizeof(int)); // 4 byte
    printf("Long Integer: %ld Byte \n",sizeof(long)); // 4 byte
}