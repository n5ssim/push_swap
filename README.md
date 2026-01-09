*This project has been created as part of the 42 curriculum by nchouaf.*

## Description

Push_swap is a sorting algorithm project. The goal is to sort a stack of integers using a limited set of operations (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr) with the minimum number of moves possible.

The program takes a list of integers as arguments and outputs the sequence of operations needed to sort them in ascending order.

## Instructions

### Compilation
```bash
make                     # Compile the project
make clean               # Remove object files
make fclean              # Remove object files and executable
make re                  # Recompile everything
```

### Usage
```bash
./push_swap 3 2 1        # Basic usage
./push_swap -7 19 42     # Also works with negative numbers

./push_swap 1 2 3        # No output if already sorted
./push_swap              # No output if no parameters

# Error cases 
./push_swap 0 one 2 3    # Non-integer argument
./push_swap 1 2 2 3      # Duplicate numbers
./push_swap 2147483648   # Integer overflow
./push_swap "3 2 1"      # Arguments between quotes
```

### Verify with checker (42 students only)
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_Mac $ARG
```
*Note: checker binary available on 42 intranet*

## Resources

- [Push_swap tutorial](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
- [Radix sort algorithm](https://www.geeksforgeeks.org/dsa/radix-sort/)

## AI Usage

[AI (Claude)](https://claude.com/product/overview) was used as a learning tool for:
- Understanding C concepts (structures, pointers, memory management)
- Debugging and troubleshooting
- Algorithm explanation (radix sort)
