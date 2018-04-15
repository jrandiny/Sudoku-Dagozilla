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
