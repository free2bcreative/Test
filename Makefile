# Makefile for Test

CXX=		g++ $(CCFLAGS)
TEST=		main.o Worker.o

OBJS =		$(TEST)

LIBS=

CCFLAGS= -g -Wall

all:	test-main

test-main:$(TEST)
	$(CXX) -o main $(TEST) $(LIBS)

clean:
	rm -f $(OBJS) $(OBJS:.o=.d)

realclean:
	rm -f $(OBJS) $(OBJS:.o=.d) main

# These lines ensure that dependencies are handled automatically.
%.d:	%.cc
	$(SHELL) -ec '$(CC) -M $(CPPFLAGS) $< \
		| sed '\''s/\($*\)\.o[ :]*/\1.o $@ : /g'\'' > $@; \
		[ -s $@ ] || rm -f $@'

include	$(OBJS:.o=.d)
