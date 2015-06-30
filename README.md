# matrices

Made in response to 

>"Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column is set to 0."

Finds 0's and then 0's out that column and row

example input 

```
1 | 2 | 3 | 4 | 5
3 | 4 | 4 | 4 | 4
1 | 0 | 1 | 2 | 2
5 | 6 | 2 | 1 | 1
1 | 1 | 5 | 3 | 8
2 | 1 | 8 | 6 | 2
4 | 8 | 5 | 1 | 9
2 | 8 | 9 | 1 | 2
4 | 6 | 5 | 9 | 1
```

example output

```
1 | 0 | 3 | 4 | 5
3 | 0 | 4 | 4 | 4
0 | 0 | 0 | 0 | 0
5 | 0 | 2 | 1 | 1
9 | 0 | 5 | 3 | 8
2 | 0 | 8 | 6 | 2
8 | 0 | 5 | 1 | 9
2 | 0 | 9 | 1 | 2
4 | 0 | 5 | 9 | 1
```
