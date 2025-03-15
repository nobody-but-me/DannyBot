
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

#include <parse.h>

bool _parse_and_execute(char *_input) {
    // char *_noun = strtok(NULL, " \n");
    char *_verb = strtok(_input, " \n");
    
    if (_verb != NULL) {
	if (strcmp(_verb, "go") == 0) {
	    return false;
	}
	else if (strcmp(_verb, "punch") == 0) {
	    printf("\n Ouch! That hurts a lot! That's not nice!");
	}
	else if (strcmp(_verb, "kiss") == 0) {
	    printf("\n Woah! Call me for a dinner first...");
	}
	else if (strcmp(_verb, "fuck") == 0) {
	    printf("\n OWOWOWOWWWOWWOWWW!");
	}
	else if (strcmp(_verb, "hug") == 0) {
	    printf("\n Oh... thank you for it... I really appreciate you.");
	}
	else {
	    printf("\n I really don't know what you tried to do with %s.", _verb);
	}
    }
    return true;
}
