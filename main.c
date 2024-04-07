int main() {
    // print prompt
    print_prompt();

    // get input
    

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
