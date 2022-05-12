#include <stdio.h>
#include <stdlib.h>

void Kelvin_To_Celsius(float temp_c, char **Cel, int count)
{
    for (int c = 3; c < count; c++)
    {
        temp_c = atof(Cel[c]) - 273.5;
        printf("%0.2f \n", temp_c);
    }
}
void Fahrenheit_To_Celsius(float temp_c, char **Cel, int count)
{
    for (int c = 3; c < count; c++)
    {
        temp_c = (atof(Cel[c]) - 32) * (5) / 9;
        printf("%0.2f \n", temp_c);
    }
}
void Kelvin_To_Fahrenheit(float temp_f1, char **Fah, int count)
{
    for (int f = 3; f < count; f++)
    {
        temp_f1 = 1.8 * (atof(Fah[f]) - 273.5) + 32;
        printf("%0.2f \n", temp_f1);
    }
}
void Celsius_To_Fahrenheit(float temp_f2, char **Fah, int count)
{
    for (int f = 3; f < count; f++)
    {
        temp_f2 = 1.8 * atof(Fah[f]) + 32;
        printf("%0.2f \n", temp_f2);
    }
}
void Fahrenheit_To_Kelvin(float temp_k1, char **kel, int count)
{
    for (int k = 3; k < count; k++)
                {
                    temp_k1 = (0.5555) * (atof(kel[k]) - 32) + 273.5;
                    printf("%0.2f \n", temp_k1);
                }
}
void Celsius_To_Kelvin(float temp_k2, char **kel, int count)
{
for (int k = 3; k < count; k++)
                {
                    temp_k2 = atof(kel[k]) + 273.5;
                    printf("%0.2f \n", temp_k2);
                }
}



int main(int argc, char *argv[])
{
    float temp_c, temp_f, temp_k;
    char *C[] = {"°C", "c", "C", "celsius", "Celsius"};
    char *K[] = {"k", "K", "kelvin", "Kelvin"};
    char *F[] = {"°F", "f", "F", "fahrenheit", "Fahrenheit"};

    if (argc < 3)
    {
        fprintf(stderr, "%s: error: Not enough arguments.\nUsage: temp_convert INPUT_SCALE OUTPUT_SCALE [TEMPERATURE]...", argv[0]);
        abort();
        return EXIT_FAILURE;
    }

    if (argc >= 3)
    {
        if (0 == strcmp(argv[2], C[1]) || 0 == strcmp(argv[2], C[2]) || 0 == strcmp(argv[2], C[3]) || 0 == strcmp(argv[2], C[4]) || (argv[2][1]) == 'C')
        {

            if (0 == strcmp(argv[1], K[0]) || 0 == strcmp(argv[1], K[1]) || 0 == strcmp(argv[1], K[2]) || 0 == strcmp(argv[1], K[3]))
            {
                Kelvin_To_Celsius(temp_c, argv, argc);
            }
            else if (0 == strcmp(argv[1], F[1]) || 0 == strcmp(argv[1], F[2]) || 0 == strcmp(argv[1], F[3]) || 0 == strcmp(argv[1], F[4]) || (argv[1][1]) == 'F')
            {
                Fahrenheit_To_Celsius(temp_c, argv, argc);
            }
        }
        else if (0 == strcmp(argv[2], F[1]) || 0 == strcmp(argv[2], F[2]) || 0 == strcmp(argv[2], F[3]) || 0 == strcmp(argv[2], F[4]) || (argv[2][1]) == 'F')
        {
            if (0 == strcmp(argv[1], K[0]) || 0 == strcmp(argv[1], K[1]) || 0 == strcmp(argv[1], K[2]) || 0 == strcmp(argv[1], K[3]))
            {
                Kelvin_To_Fahrenheit(temp_f, argv, argc);
            }
            else if (0 == strcmp(argv[1], C[1]) || 0 == strcmp(argv[1], C[2]) || 0 == strcmp(argv[1], C[3]) || 0 == strcmp(argv[1], C[4]) || (argv[1][1]) == 'C')
            {
                Celsius_To_Fahrenheit(temp_f, argv, argc);
            }
        }
        else if (0 == strcmp(argv[2], K[0]) || 0 == strcmp(argv[2], K[1]) || 0 == strcmp(argv[2], K[2]) || 0 == strcmp(argv[2], K[3]))
        {
            if (0 == strcmp(argv[1], F[1]) || 0 == strcmp(argv[1], F[2]) || 0 == strcmp(argv[1], F[3]) || 0 == strcmp(argv[1], F[4]) || (argv[1][1]) == 'F')
            {
                Fahrenheit_To_Kelvin(temp_k, argv, argc);
            }
            else if (0 == strcmp(argv[1], C[1]) || 0 == strcmp(argv[1], C[2]) || 0 == strcmp(argv[1], C[3]) || 0 == strcmp(argv[1], C[4]) || (argv[1][1]) == 'C')
            {
                Celsius_To_Kelvin(temp_k, argv, argc);
            }
        }
        else
        {
            printf("error: Unrecognized temperature scale %s", argv[2]);
            abort();
            return EXIT_FAILURE;
        }
    }

    if (argc == 3)
    {
        return EXIT_SUCCESS;
    }

    return EXIT_SUCCESS;
}