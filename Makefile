func: ft_strncmp.o ft_strlen.o
	gcc ft_strncmp.o ft_strlen.o -o func
ft_strncmp.o: ft_strncmp.c
	gcc -c ft_strncmp.c
ft_strlen.o: ft_strlen.c
	gcc -c ft_strlen.c
clean:
	rm *.o func