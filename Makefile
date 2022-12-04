all:
	g++ -std=c++17 first.cpp -o first

test:
	chmod +x first

clean:
	$(RM) first
