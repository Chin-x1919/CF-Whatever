#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char query[256];

    printf("CF-Flashlight Search\n");
    printf("=========================\n");
    printf("Enter query: ");
    if(fgets(query, sizeof(query), stdin) == NULL) {
        return 1;
    }

    // no \n at end
    size_t len = strlen(query);
    if(len > 0 && query[len-1] == '\n') query[len-1] = '\0';

    printf("\nFiles:\n");
    char cmd1[512];
    snprintf(cmd1, sizeof(cmd1), "find ~ -iname '*%s*' 2>/dev/null | head -n 10", query);
    system(cmd1);

    printf("\nMan Pages:\n");
    char cmd2[512];
    snprintf(cmd2, sizeof(cmd2), "man -k %s 2>/dev/null | head -n 10", query);
    system(cmd2);

    printf("\n Command:\n");
    char cmd3[512];
    snprintf(cmd3, sizeof(cmd3), "which %s 2>/dev/null || echo 'Not found as command'", query);
    system(cmd3);

    printf("\nDone!\n");
    return 0;
}
