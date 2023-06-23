#include <stdio.h>
#include <ctype.h>
#include "0-isupper.h"

int _isupper(int c) 
{
    if (isupper(c)) {
        return 1;
    } else {
        return 0;
    }
}
