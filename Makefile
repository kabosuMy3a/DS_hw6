CXX = g++
CXXFLAGS =
TARGETS = hw6
TARGETS2 = testForStack
OBJS = Stack.o Calculator.o hw5.cpp
OBJS2 = testForStack.cpp


all : $(TARGETS) $(TARGETS2)

$(TARGETS) : $(OBJS)
	$(CXX)$(CXXFLAGS) -o $@ $^

%.o : %.cpp %.h
	$(CXX) -c $(CXXFLAGS) $(OPTION) $< -o $@


$(TARGETS2) : $(OBJS2)
	$(CXX) -o $@ $^
	




clean :
	rm *.o hw6 testForStack

