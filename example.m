push 0        # Push 0 onto the stack
push 1        # Push 1 onto the stack
push 2        # Push 2 onto the stack

   push 3     # Push 3 onto the stack with extra spaces

pall          # Print all values on the stack (3, 2, 1, 0)

push 4
push 5
    push 6    # Push 6 with extra spaces before and after
pall          # Print all values on the stack (6, 5, 4, 3, 2, 1, 0)

# More blank lines to test handling
     
push 7
pint          # Print the top value (7)
pop           # Remove the top value (7)
pint          # Print the new top value (6)

nop           # Does nothing
