#!/bin/bash
#optain object code of the .c files
gcc -c *c

#placing object functions in ths library
ar rc liball *.o

#indexing the function in the library
ranlib liball
