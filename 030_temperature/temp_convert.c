#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    float temp_c,temp_f,temp_k;
    char *C[] = {"°C", "c", "C", "celsius", "Celsius"};
    char *K[] = {"k", "K", "kelvin", "Kelvin"};
    char *F[] = {"°F", "f", "F", "fahrenheit", "Fahrenheit"};
  
    // convert to celsius
    if(0 == strcmp(argv[2],C[0]) || 0 == strcmp(argv[2],C[1]) || 0 == strcmp(argv[2],C[2]) || 0 == strcmp(argv[2],C[3]) ||0 == strcmp(argv[2],C[4])){
        if(0 == strcmp(argv[1],K[0]) || 0 == strcmp(argv[1],K[1]) || 0 == strcmp(argv[1],K[2]) || 0 == strcmp(argv[1],K[3])){
            temp_c = atof(argv[3]) - 273.5;
            printf("%f celsius",temp_c);
        }
        else if(0 == strcmp(argv[1],F[0]) || 0 == strcmp(argv[1],F[1]) || 0 == strcmp(argv[1],F[2]) || 0 == strcmp(argv[1],F[3]) || 0 == strcmp(argv[1],F[4])){
            temp_c = (atof(argv[3])-32)*(5)/9;
            printf("%f celsius", temp_c);
        }
    }
    //convert to faher
    if(0 == strcmp(argv[2],F[0]) || 0 == strcmp(argv[2],F[1]) || 0 == strcmp(argv[2],F[2]) || 0 == strcmp(argv[2],F[3]) ||0 == strcmp(argv[2],F[4])){
        if(0 == strcmp(argv[1],K[0]) || 0 == strcmp(argv[1],K[1]) || 0 == strcmp(argv[1],K[2]) || 0 == strcmp(argv[1],K[3])){
            temp_f = 1.8*(atof(argv[3]) - 273.5)+ 32;
            printf("%f celsius",temp_f);
        }
        else if(0 == strcmp(argv[1],C[0]) || 0 == strcmp(argv[1],C[1]) || 0 == strcmp(argv[1],C[2]) || 0 == strcmp(argv[1],C[3]) || 0 == strcmp(argv[1],C[4])){
            temp_c = 1.8*atof(argv[3]) + 32;
            printf("%f celsius", temp_c);
        }
    }
    
    
    return EXIT_SUCCESS;
}