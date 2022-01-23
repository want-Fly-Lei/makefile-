G := gcc
target = test.out
obj = circle.o cube.o main.o

test:$(target)
	./$(target)

#利用dos写入到我指定的文件中
out:$(target)
	./$(target)  > output.txt

$(target):$(obj)
	$(G) $(obj) -o $(target)

%.c:%.o
	$(G) -c %.c -o %.o

.PHONY:
clean:
	rm -rf $(target) *.o