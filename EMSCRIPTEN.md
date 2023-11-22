# Emscripten

## Compile

```
./autogen.sh
mv config.h src/
emcc -flto -O3 *.c -c -I ../ -sUSE_SDL=2 # run this in src/sdl/ and src/
```

## Link

```
emcc -flto -O3 *.o sdl/*.o -o index.html -sUSE_SDL=2 -sASYNCIFY -sENVIRONMENT=web --closure 1 -Wl,-u,ntohs
```
