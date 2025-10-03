# Run cpp programs

```shell
g++-15 -std=c++17 -O2 -Wall -Wextra pe_19.cpp -o main && ./main
```

### Project Euler Solutions (ideas → solutions)

- Problem 8 (`project_euler_8.cpp`)
  - Written in C++
  - Largest product of 13 adjacent digits in a 1000-digit number
  - Approach: brute-force sliding window; multiply 13-digit window, track maximum
  - Notes: prints intermediate logs; straightforward O(1000×13)

- Problem 9 (`project_euler_9.cpp`)
  - Written in C++
  - Find Pythagorean triplet with a + b + c = 1000
  - Approach: triple nested loops; check a^2 + b^2 = c^2 and sum constraint; print product

- Problem 11 (`project_euler_11.cpp`)
  - Written in C++
  - Largest product of 4 adjacent numbers in a 20×20 grid
  - Approach: for each cell, compute products in 8 directions and take the max
  - Input: expects `20_20_grid.txt` (20×20 integers)

- Problem 12 (`project_euler_12.cpp`)
  - Written in C++
  - First triangle number with over 500 divisors
  - Approach: iterate triangle numbers Tₙ = n(n+1)/2; count divisors via sqrt; break when > 500

- Problem 13 (`pe_13.py`)
  - Written in Python
  - Sum these 100 numbers of 50 digits each
  - Write the first 10 digits of the total
  - Approach: parse lines to integers, sum, slice first 10 digits
  - Answer: 5537376230

- Problem 14 (`project_euler_14.cpp`)
  - Written in C++
  - Longest Collatz sequence for starting numbers under 1,000,000
  - Approach: brute-force sequence length per start; track maximum (no memoization)

- Problem 15 (`project_euler_15.cpp`)
  - Written in C++
  - Lattice paths in a 20×20 grid
  - Status: stub/incomplete
  - Intended approach: combinatorics C(40,20) or DP over grid

- Problem 16 (`project_euler_16.cpp`)
  - Written in C++
  - Sum of digits of 2^n
  - Approach: manual big-integer using array; repeated doubling with carry; sum digits

- Problem 17 (`pe_17.py`)
  - Written in Python
  - British usage letter counts for numbers 1..1000 (exclude spaces/hyphens)
  - Approach: pattern-based/recursive: map for 1–19, tens map for 20–90, hundreds with "and", 1000 special-case
  - Answer: 21124

- Problem 21 (`problem21.cpp`)
  - Written in C++
  - Amicable numbers under 10000, sum of all amicable numbers
  - Status: incomplete/broken (sum-of-divisors `d(n)` not returned; vector usage incomplete)
  - Intended approach: compute d(n) for 2..9999; if a ≠ b, d(a)=b and d(b)=a, accumulate a
