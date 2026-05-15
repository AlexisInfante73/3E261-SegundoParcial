bin/programa : src/main.cpp
       c++ src/main.cpp -o bin/programa -I include

run : bin/programa

   ./bin/programa
   