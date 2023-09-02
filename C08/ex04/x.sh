echo "--------- CHECK, COMMPILE AND RUN" $1 $2

echo "---------- MOULINETTE"

norminette -RCheckForbiddenSourceHeader "$1" $2 | cat

echo "---------- GCC"

gcc -Wall -Wextra -Werror "$1" $2 | cat

echo "---------- CHMOD"

chmod +x a.out

echo "---------- EXECUTE"

./a.out