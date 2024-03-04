.ONESHELL:
.SILENT:

build:
	if [ ! -d "./build" ];
	then 
	 mkdir build 
	fi 
	gcc -Wall -Werror ./src/main.c -o ./build/ppollo

clean:
	if [ -d "./build" ];
	then
	 rm -fr ./build
	fi

