default: test
CFLAGS = -O2 -Ofast
CXXFLAGS = -O2 -Ofast

benchc: bench.c
	$(CC) $(CFLAGS) -o $@ $<

benchcpp : bench.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

test: benchc benchcpp
	./benchc
	./benchcpp


