#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    InputBuffer* input_buffer = new_input_buffer();

    // print prompt
    print_prompt();

    // get input
    read_input(input_buffer);

    // read commands
        // check if command is valid or not
        // check if command is exit or not
}

// custom datatype to store & validate inputs
typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer() {
  InputBuffer* input_buffer = (InputBuffer*)malloc(sizeof(InputBuffer));
  input_buffer->buffer = NULL;
  input_buffer->buffer_length = 0;
  input_buffer->input_length = 0;

  return input_buffer;
}

void print_prompt() {
    printf("db > ");
}

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

void read_input(InputBuffer* input_buffer) {
  ssize_t bytes_read = getline(&(input_buffer->buffer), &(input_buffer->buffer_length), stdin);

  if (bytes_read <= 0) {
    printf("Error reading input\n");
    exit(EXIT_FAILURE);
  }

  // Ignore trailing newline
  input_buffer->input_length = bytes_read - 1;
  input_buffer->buffer[bytes_read - 1] = 0;
}