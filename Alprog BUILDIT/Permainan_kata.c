#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    scanf("%s\n", a);;
    scanf("%s\n", b);

    if (strlen(a) == strlen(b)) {
        if (strcmp(a, b) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    } 
    else {
        printf("BERBEDA\n");
    }
    
    return 0;
}
