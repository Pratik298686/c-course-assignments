#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float temp_c,temp_f,temp_k;
    char *C[] = {"°C", "c", "C", "celsius", "Celsius"};
    char *K[] = {"k", "K", "kelvin", "Kelvin"};
    char *F[] = {"°F", "f", "F", "fahrenheit", "Fahrenheit"};

    if(argc == 1){
        fprintf(stderr,"%s: error: Not enough arguments.\n",argv[0]);
        abort();
    }
    if(argc == 3){
        puts(" ");
    }
  
    // convert to celsius
    if(0 == strcmp(argv[2],C[0]) || 0 == strcmp(argv[2],C[1]) || 0 == strcmp(argv[2],C[2]) || 0 == strcmp(argv[2],C[3]) ||0 == strcmp(argv[2],C[4])){
        if(0 == strcmp(argv[1],K[0]) || 0 == strcmp(argv[1],K[1]) || 0 == strcmp(argv[1],K[2]) || 0 == strcmp(argv[1],K[3])){
           for(int c = 3; c < argc; c++) {
            temp_c = atof(argv[c]) - 273.5;
            printf("%f celsius",temp_c);
           }
        }
        else if(0 == strcmp(argv[1],F[0]) || 0 == strcmp(argv[1],F[1]) || 0 == strcmp(argv[1],F[2]) || 0 == strcmp(argv[1],F[3]) || 0 == strcmp(argv[1],F[4])){
            for(int c = 3; c < argc; c++) {
            temp_c = (atof(argv[c])-32)*(5)/9;
            printf("%f celsius", temp_c);
            }
        }
    }
    else if(0 == strcmp(argv[2],F[0]) || 0 == strcmp(argv[2],F[1]) || 0 == strcmp(argv[2],F[2]) || 0 == strcmp(argv[2],F[3]) ||0 == strcmp(argv[2],F[4])){
        if(0 == strcmp(argv[1],K[0]) || 0 == strcmp(argv[1],K[1]) || 0 == strcmp(argv[1],K[2]) || 0 == strcmp(argv[1],K[3])){
           for(int f = 3; f < argc; f++) {
            temp_f = 1.8*(atof(argv[f]) - 273.5)+ 32;
            printf("%f fahrenheit",temp_f);
           }
        }
        else if(0 == strcmp(argv[1],C[0]) || 0 == strcmp(argv[1],C[1]) || 0 == strcmp(argv[1],C[2]) || 0 == strcmp(argv[1],C[3]) || 0 == strcmp(argv[1],C[4])){
           for(int f = 3; f < argc; f++) {
            temp_f = 1.8*atof(argv[f]) + 32;
            printf("%f fahrenheit", temp_f);
           }
        }
    }
    else if(0 == strcmp(argv[2],K[0]) || 0 == strcmp(argv[2],K[1]) || 0 == strcmp(argv[2],K[2]) || 0 == strcmp(argv[2],K[3])){
        if(0 == strcmp(argv[1],F[0]) || 0 == strcmp(argv[1],F[1]) || 0 == strcmp(argv[1],F[2]) || 0 == strcmp(argv[1],F[3]) || 0 == strcmp(argv[1],F[4])){
            for(int k = 3; k < argc; k++) {
            temp_k = (0.5555)*(atof(argv[k])-32)+273.5;
            printf("%f kelvin",temp_k);
            }
        }
        else if(0 == strcmp(argv[1],C[0]) || 0 == strcmp(argv[1],C[1]) || 0 == strcmp(argv[1],C[2]) || 0 == strcmp(argv[1],C[3]) || 0 == strcmp(argv[1],C[4])){
           for(int k = 3; k < argc; k++) {
            temp_k = atof(argv[k]) + 273.5;
            printf("%f kelvin", temp_k);
           }
        }
    }
    else{
         printf("error: Unrecognized temperature scale %s",argv[2]);
         abort();
    }
    
    
    return EXIT_SUCCESS;
}