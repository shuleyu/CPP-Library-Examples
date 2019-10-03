# Download and Compile
```
$ git clone --recursive https://github.com/shuleyu/CPP-Library-Examples.git
```

If `--recursive` is not added, the dependencies will not be downloaded. In such case, do:

```
$ cd ./CPP-Library-Examples
$ git submodule update --init --recursive
```
Then, compile the cpp files using make:

```
$ make
```
