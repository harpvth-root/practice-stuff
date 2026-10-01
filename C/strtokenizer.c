// Practice memory management and string manipulation

#include <stdio.h>
#include <string.h>

// Struct to store tokens in
struct token_store {
    char token[15];
} pile_of_tokens[20];

int main(void) {

    // Take data
    char sample_data[] = "From now on, everything I own, GOLD! Even my money will be gold!";

    // Split the data by designated char using strtok()
    int token_count = 0;
    char *data_char = strtok(sample_data, " ");
    while (data_char != NULL && token_count < 20) {

        // Store the tokens
        strcpy(pile_of_tokens[token_count].token, data_char);
        data_char = strtok(NULL, " ");
        token_count++;

    }

    // Count them tokens to terminal like wario
    for (int i = 0; i < token_count; i++) {
        printf("%s\n", pile_of_tokens[i].token);
    }

    return 0;
}


