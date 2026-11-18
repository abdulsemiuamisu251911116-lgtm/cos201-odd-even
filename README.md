# Odd or Even Checker in C++

**LASU · COS 201 / CSC 207 Assignment**

A C++ program that reads an integer from the user and reports whether it is **Odd** or **Even**.

## How it works

A whole number is even when dividing it by 2 leaves no remainder, so the program checks `number % 2 == 0`; any other number is odd. It compares with `0` rather than `1` so that negative numbers are handled correctly (in C++, `-7 % 2` is `-1`).

The program also rejects input that is not a whole number, such as `abc`, `3.5` or `12xyz`, and asks again.

## Compile and run

```bash
g++ odd_even.cpp -o odd_even
./odd_even
```

On Windows, run `odd_even.exe` instead of `./odd_even`, or open `odd_even.cpp` in Code::Blocks or Dev-C++ and click **Build and Run**.

## Sample output

```
Enter an integer: 8
8 is an Even number.
```

```
Enter an integer: -7
-7 is an Odd number.
```

```
Enter an integer: 3.5
Invalid input. Please enter an integer such as 7 or -12.
Enter an integer: 15
15 is an Odd number.
```
