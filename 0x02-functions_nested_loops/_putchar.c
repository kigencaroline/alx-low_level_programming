#include "0-putchar.c"

int main() {
    
    int i;
    char* s = "_putchar";
for (i = 0; s[i] != '\0'; ++i) {
    char c = s[i];
    _putchar(c);
}

    return 0;
}
