#井号是注释
#显示规则
#冒号前面是目标文件，后面是依赖文件
#[TAB]指令
#为了保证我一条命令就可以运行处结果，所有我们应该把先执行的命令放后面，利用地柜来一层层调用其他命令
hello:hello.out
	./hello.out

hello.out:hello.o
	g++ hello.o -o hello.out

hello.o:hello.S
	g++ -c hello.S -o hello.o

hello.S:hello.i
	g++ -S hello.i -o hello.S

hello.i:hello.cpp
	g++ -E hello.cpp -o hello.i

#如何面对一个含有.h .c的一个分离的 项目
test:test.out
	./test.out

#这里我们省略了预编译和汇编

test.out:circle.o cube.o main.o
	gcc circle.o cube.o main.o -o test.out

circle.o:circle.c
	gcc -c circle.c -o circle.o

cube.o:cube.c
	gcc -c cube.c -o cube.o

main.o:main.c
	gcc -c main.c -o main.o

#伪目标
.PHONY:
clean:
	rm -rf test.out hello.out hello.i hello.S circle.o  cube.o hello.o main.o
