.DEFAULT_GOAL := build

.PHONY: build clean
build:
	clang -o stack stack.c

clean:
	rm stack
