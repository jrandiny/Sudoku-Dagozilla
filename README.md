# Sudoku-Dagozilla

Program Menyelesaikan hyper sudoku

## Hyper sudoku

Hyper sudoku adalah modifikasi dari sudoku dengan menambah 4 kotak sekunder di tengah papan. Pada kotak ini juga tidak boleh ada angka yang *double*

![hyper sudoku](https://upload.wikimedia.org/wikipedia/commons/thumb/1/12/Oceans_Hypersudoku18_Puzzle.svg/480px-Oceans_Hypersudoku18_Puzzle.svg.png?download)

*"[Oceans Hypersudoku18 Puzzle](https://commons.wikimedia.org/w/index.php?curid=2489350/)" by oceanh
licensed under [CC BY](https://creativecommons.org/licenses/by/2.5/)*

## Compile

Untuk *mengcompile* program ini tidak butuh *library* khusus, yang perlu diperhatikan hanyalah menggunakan standard c++ 2011
```
g++ -std=c++11 -o sudoku *.cpp
```

## Pemakaian

Untuk memakai tinggal menjalankan program dan nanti akan ditanya input baik manual maupun dari file.

Program ini berisi logging yang sangat *verbose*, untuk mematikan ini bisa dengan mengalihkan logging ke file eksternal.
```
./sudoku 2>sudoku.log
```

## Format file

Jika ingin menggunakan input file, format yang digunakan adalah sebagai berikut
- 'x' untuk kotak kosong
- angka 1 - 9 untuk kotak terisi

Contoh
```
xxxx9x7xx
x61xxxx4x
xxxxx2xx3
xx748xxxx
x8xxxx6xx
xx3xxx5xx
xxx5xx2xx
9xx1xxxxx
5x2xx4x86
```
