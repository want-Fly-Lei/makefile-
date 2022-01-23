#最后来一个简单点的吧，懒得花里胡哨
target = hello.c
c := .c
out := .out
G := gcc
#我们把.c文件替换成.out文件
finalTarget = $(subst $(c),$(out), $(target))
RMRF := rm -rf

help:
	@echo "echo是输出到控制台上"
	@echo $(finalTarget)

hello:$(finalTarget)
	./$^

%.out:%.c
	$(G) $^ -o $@

.PHONY:
clean:
	$(RMRF) *.out