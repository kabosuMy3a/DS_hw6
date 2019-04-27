CXX = g++
CXXFLAGS =
TARGETS = hw6
TARGETS2 = 
OBJS = LinkedStack.o Converter.o default.h hw6.cpp
OBJS2 = 


all : $(TARGETS) $(TARGETS2)

$(TARGETS) : $(OBJS)
	$(CXX)$(CXXFLAGS) -o $@ $^

%.o : %.cpp %.h
	$(CXX) -c $(CXXFLAGS) $(OPTION) $< -o $@


$(TARGETS2) : $(OBJS2)
	$(CXX) -o $@ $^
	




clean :
	rm *.o hw6

