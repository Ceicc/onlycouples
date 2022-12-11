onlycouples
============

A Program to filter any line that doesn't consist of a stream of couple characters, utilizing input and output streams.

Building
---------

Building require three simple steps:

```bash
make
sudo make install
make clean
```

By default it will install the binary into `/usr/local/bin`, you can override it with the environment variable `INSTALLDIR`.
Like
```bash
make INSTALLDIR=~/.bin install
```
Note you don't need sudo in the previous example because the install directory is local.
