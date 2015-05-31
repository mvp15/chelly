CXX = g++
LD  = g++
CFLAGS  = -std=c++11
LDFLAGS = -std=c++11

CPPSRC = $(wildcard exercise?/*.cc)
OBJS   = $(CPPSRC:.cc=.o)
APPS   = ./main

all : $(APPS)
.PHONY : all

exercise1/main.o: ./main.cpp ./Feld.h ./Player.h ./Tile.h ./Warrior.h
exercise1/main:	  ./main.o


%.o: %.cc
	@echo "***"
	@echo "*** compile "$@
	@echo "***"
	$(CXX) $(CFLAGS) -Wall -c $< -o $@
	@echo ""

%: %.o
	@echo "***"
	@echo "*** Build "$@
	@echo "***"
	$(LD) $(LDFLAGS) $^ -Wall -lm -o $@
	@echo ""


clean:
	@echo "***"
	@echo "*** clean all executables and object files"
	@echo "***"
	@rm -f $(APPS) $(OBJS)
