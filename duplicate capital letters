#include <stdio.h>
#include <malloc.h>
#include <string.h>

char *es3(char *s) {
    char *sn = (char *) malloc(strlen(s) * 2 + 1);
    int i = 0, len = 0;
    for (i; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            char new = s[i] + 32;
            sn[len++] = new;
            sn[len++] = new;
        } else
            sn[len++] = s[i];
    }
    sn[len++] = '\0';
    sn = realloc(sn, len);
    return sn;
}

char *es4(const char *s) {
    char *ss = (char *) malloc(strlen(s) * 2 + 1); /* max possible length */
    int i = 0, len = 0;
    while (i < strlen(s)) {
        if (s[i] >= 'A' && s[i] <= 'Z') { /* upper case */
            char new_letter = s[i] - 'A' + 'a';
            ss[len++] = new_letter;
            ss[len++] = new_letter;
        } else
            ss[len++] = s[i];
        i++;
    }
    ss[len++] = '\0';
    ss = realloc(ss, len);
    return ss;
}

int main() {
    printf("%s \n", es3("WoW"));
    printf("%s \n", es3("eVViVa"));
    return 0;
}
