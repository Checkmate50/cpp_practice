CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		main.o checker.o f_tester.o 1-Basics/functions.o 1-Basics/tester.o 2-Functions/functions.o 2-Functions/tester.o 

LIBS =

TARGET =	cpp_practice

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
