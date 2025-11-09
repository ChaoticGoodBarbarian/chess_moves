Queen Move

Time limit: 1 second
Memory limit: 64 MB

Problem Description

A chess queen can move any number of squares along a rank, file, or diagonal.
You are given two different squares on an empty 8×8 chessboard.
Determine whether the queen can move from the first square to the second in one move.

Input Format

Four integers from 1 to 8:
x1 y1 x2 y2

The first pair defines the column and row of the first square.

The second pair defines the column and row of the second square.

Output Format

Print YES if the queen can move from the first square to the second in one move,
otherwise print NO.

Examples

Example 1
Input:

1 1 2 2


Output:

YES


Example 2
Input:

1 1 2 3


Output:

NO


Example 3
Input:

5 6 3 3


Output:

NO

Explanation

The queen moves:

Vertically if x1 == x2

Horizontally if y1 == y2

Diagonally if abs(x1 - x2) == abs(y1 - y2)

If any of these conditions is true, print YES; otherwise print NO.
