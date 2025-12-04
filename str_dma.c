#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str=(char*) calloc(10,1);  
    strcpy(str, "Hello678");    

    str[5] = '!';            
 
    printf("%s\n", str);      // Output: Hello!
    str=(char*)realloc(str,15);
    
       strcpy(str, "Hello011156");    

  
    printf("%s\n", str);
    printf("%d",sizeof(str));
    free(str);
    return 0;
}
