 all:
	gcc -Wall -Wextra -I/opt/homebrew/include -L/opt/homebrew/lib -lraylib main.c -o main && ./main

