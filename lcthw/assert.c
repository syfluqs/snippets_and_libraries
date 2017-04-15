#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i=1; i < argc ;i++) {
        assert(*argv[i]>48);
        printf("%c\n",*argv[i]);
    }
    return 0;
}