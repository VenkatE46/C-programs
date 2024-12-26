#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int pos = 0, count = 0;


    printf("Enter a string: ");
    scanf("%s", str);


    while (str[pos] != '\0') {
        if (str[pos] == str[pos + 1]) {
            count++; 
        } else {
           
            printf("%c%d", str[pos], count + 1);
            count = 0; 
        }
        pos++; 
    }

    
    return 0;
}
