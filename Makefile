app.out: main.o foo.o bar.o
    gcc -o app.out main.o foo.o bar.o
 
main.o: foo.h bar.h main.c
    gcc -c -o main.o main.c
 
foo.o: foo.h foo.c
    gcc -c -o foo.o foo.c
 
bar.o: bar.h bar.c
    gcc -c -o bar.o bar.c


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