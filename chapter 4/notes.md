## const vs constexpr
`constexpr` is used **only** if the value of a variable/object is known at the compile time
```
void foo(int n) {
    constexpr int n1 = n + 1; // error: n is not known at a compile time
    const n2 = n + 1; // OK
}
```
but you can use `const` in this situations, just don't try to change it! it will cause an error.

## switch-case technicalities
- the values in `case` must be constant expressions. you can't use variables there.
- breaks at the end of each case
- can't be 2 same case labels                                                                                        