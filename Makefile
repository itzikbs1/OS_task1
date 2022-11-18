CC=gcc -fPIC -g -w

all: cmp copy encode decode codec1.so codec2.so

# Q1 #
cmp: cmp.o 
	$(CC) $(CFlags) -o $@  $^

# Q2 + Q3#
copy: copy.o 
	$(CC) $(CFlags) -o $@  $^

# Q4 A #
encode: encode.o
	$(CC) $(CFlags) -o $@  $^
# Q4 B #
decode: decode.o
	$(CC) $(CFlags) -o $@  $^

# SHARED LIB #
codec1.so: codec1.o
	$(CC) --shared -fPIC -g -pthread codec1.o -o codec1.so

codec2.so: codec2.o 
	$(CC) --shared -fPIC -g -pthread codec2.o -o codec2.so


# EXTRAS #
%: %.c
	$(CC) $(CFlags) -c -o $@  $^ 

clean:
	rm -f *.dSYM *.o cmp copy encode decode codec1.so codec2.so