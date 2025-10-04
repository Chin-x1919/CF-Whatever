#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("cupctl: missing command\n");
        printf("Try 'cupctl --help' for more information.\n");
        return 1;
    }

    char *cmd = argv[1];

    if (strcmp(cmd, "fill") == 0) {
        if (argc < 3) {
            printf("Nothing to fill. Try: cupctl fill --coffee\n");
        } else {
            char *arg = argv[2];
            //remove --
            if (strncmp(arg, "--", 2) == 0) {
                arg += 2;
            }
            printf("go grab \"%s\" yourself\n", arg);
        }
    } else if (strcmp(cmd, "heat") == 0) {
        printf("Heating... oh wait, no heating element detected.\n");
    } else if (strcmp(cmd, "status") == 0) {
        printf("Cup status: Half Empty\n");
    } else if (strcmp(cmd, "upgrade") == 0) {
        printf("Nah you can't upgrade LOL\n");
    } else if (strcmp(cmd, "--help") == 0 || strcmp(cmd, "help") == 0) {
        printf("Usage: cupctl [command] [args]\n");
        printf("Commands:\n");
        printf("  fill --item    Fill the cup with item\n");
        printf("  heat           Try to heat the cup\n");
        printf("  status         Show cup status\n");
        printf("  upgrade        Suggest upgrade\n");
    } else {
        printf("cupctl: unknown command '%s'\n", cmd);
        printf("Try 'cupctl --help' for more information.\n");
    }

    return 0;
}
