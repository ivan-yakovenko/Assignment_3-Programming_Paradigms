# Compilation/Linking/Checking/Execution

---

## Compiling

```g++ -c Assignment_3/main.cpp -o main.o```

```g++ -c Assignment_3/mylib.cpp -o mylib.o ```

## Linking

```g++ -o main main.o```

``` g++ -shared -o mylib.so mylib.o```

## Checking

``` nm mylib.so```

```
                 U __DefaultRuneLocale
0000000000003f34 T __Z7isasciii
0000000000003e4c T __Z7isloweri
0000000000003e24 T __Z7isupperi
0000000000003ea8 T __Z8__istypeim
                 U ___maskrune
0000000000003e74 T _decrypt
0000000000003cfc T _encrypt
                 U _strlen
```

## Execution

```./main ```

```
Encrypted text: Tqugu ctg tgf, xkqngvu ctg dnwg
Decrypted text: Roses are red, violets are blue
```