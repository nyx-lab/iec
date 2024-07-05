list:
	@echo "Listando programas na pasta atual:"
	ls -la

compile:
	@echo "Compilando o programa..."
	gcc -o program program.c

run: program
	@echo "Executando o programa..."
	./program

all: compile run


