# make: コンパイル
# make run: 実行
# make clean: コンパイル結果の削除

gcc_options = -std=c++17 -Wall --pedantic-error

program : main.cpp all.h all.h.gch
	g++ $(gcc_options) -include all.h $< -o $@

all.h.gch : all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

run : program
	./program

clean :
	rm -f ./program
	rm -f ./all.h.gch

.PHONY : run clearn
