#定义变量
TARGET = hello.c
OBJ = hello.o
G := gcc
c = hello.out
c += hello.o#追加.o文件也需要删除

hello:hello.out
	./hello.out

#使用美元符号家括号来替换变量
hello.out:$(OBJ)
	$(G) $(OBJ) -o hello.out

$(OBJ):$(TARGET)
	$(G)  -c $(TARGET) -o hello.o

.PHONY:
clean:
	rm -rf $(c)