G := gcc
target = test.out
obj = circle.o cube.o main.o

test:$(target)
	./$(target)

$(target):$(obj)
	$(G) $^ -o $@

%.o:%.c
	$(G) -c $^ -o $@

.PHONY:
clean:
	rm -rf $(target) *.o