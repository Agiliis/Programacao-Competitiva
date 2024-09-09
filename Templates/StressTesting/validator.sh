g++ code.cpp -o code
g++ gen.cpp -o gen
g++ brute.cpp -o brute

for((i=1; i<=100; i++)) do
    echo $i
    
    ./gen $i > in
    ./code < in > myAns
    ./brute < in > trueAns
    diff -w myAns trueAns || break

    # nao gera novos arquivos
    # diff -w <(./code < in) <(./brute < in) || break
done