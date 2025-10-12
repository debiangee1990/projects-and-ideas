#include <stdio.h>
#include <string.h>

// LGBESPIRITU - Project to get the unique keywords on the downloaded logs of Jira
// To be used in preparation of Jira Virtual Agent

int main(){

    FILE *input = fopen("C:\\Users\\Cheenee\\OneDrive\\Desktop\\Converge\\stringcollector\\file.txt", "r");
    FILE *output = fopen("C:\\Users\\Cheenee\\OneDrive\\Desktop\\Converge\\stringcollector\\output.txt", "w");

    if (input == NULL || output == NULL)
        printf("Missing File in the Drive");
        fclose(file);

        
    return 0;
}