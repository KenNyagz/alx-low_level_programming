!#bin/bash
gcc -Wall -pedantic -Werror -Wextra -C *.c
ar -rcs liball.a *.c
ranlib liball.a

