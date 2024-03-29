//
//  core.c
//  Project 1 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "core.h"

#define CHARACTER_COUNT (LAST_CHARACTER - FIRST_CHARACTER + 1) 
#define FIRST_CHARACTER 'A'
#define LAST_CHARACTER 'Z'

#define TRUE 1;
#define FALSE 0;

int is_number_convertable(const char * string) {
    int len = strlen(string);
    const char * s = string;
    
    for (int i = 0; i < len; i++) {
        if (!isdigit(*s)) {
            return FALSE;
        }
        s++;
    }
    
    return TRUE;
}

char encrypt_character(char source, int key) {
    return source;
}

void encrypt_string(char * message, int key, int step) {
}

char decrypt_character(char source, int key) {
    return source;
}

void decrypt_string(char * message, int key, int step) {
}

void print_usage() {
    printf("Usage:\n");
    printf("\t./main encrypt message key key_offset\n");
    printf("\t./main decrypt message key key_offset\n");
}

int core_main(int argc, const char * argv[]) {
    print_usage();
    return 0;
}
