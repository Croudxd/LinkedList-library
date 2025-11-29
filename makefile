CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
SRCS = test/main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = test_program
INCLUDES = -I. -I./test

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

check: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean check
