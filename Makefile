CC = gcc
CCFLAGS = -Wall -Werror
INSTALLDIR = /usr/local/bin/

onlycouples: onlycouples.c
	$(CC) $(CCFLAGS) onlycouples.c -o onlycouples

install: onlycouples
	cp onlycouples $(INSTALLDIR)

clean:
	rm onlycouples
