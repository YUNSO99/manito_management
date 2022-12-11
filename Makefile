program: main.o input.o output.o guess.o main.o search.o
    gcc input.o output.o guess.o main.o search.o -o program
 
main.o: main.c
    gcc -c main.c
 
input.o: input.c
    gcc -c input.c

output.o: output.c
    gcc -c output.c

guess.o: guess.c
    gcc -c guess.c

search.o: search.c
    gcc -c search.c

CC=<컴파일러>
CFLAGS=<컴파일 옵션>
LDFLAGS=<링크 옵션>
LDLIBS=<링크 라이브러리 목록>
OBJS=<Object 파일 목록>
TARGET=<빌드 대상 이름>
 
all: $(TARGET)
 
clean:
    rm -f *.o
    rm -f $(TARGET)
 
$(TARGET): $(OBJS)
$(CC) -o $@ $(OBJS)