
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <colie.h>

#include <parse.h>

static char _input[100] = "";

static bool _get_input(void) {
    printf("\n  > ");
    return fgets(_input, sizeof _input, stdin) != NULL;
}

int main(int argc, char *argv[]) {
    printf(" Hello, DannyBot speaking. How are you doing? ");
    while (_parse_and_execute(_input) && _get_input());
    printf("\n Bye! \n\n");
    return 0;
}
