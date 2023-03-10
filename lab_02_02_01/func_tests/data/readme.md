# Positive cases:
### Test 01: [Normal behaviour -- null, one, negatives, positives]
- In : 6 -3 0 1 -12 7 6
- Out : Input size of array: Insert elements: Primes from your array: 7 
### Test 02: [One prime]
- In : 1 13
- Out : Input size of array: Insert elements: Primes from your array: 13 
### Test 03: [Max array's size]
- In : 10 1 2 3 4 5 11 13 18 19 20
- Out : Input size of array: Insert elements: Primes from your array: 2 3 5 11 13 19 
### Test 04: [All primes]
- In : 5 2 3 5 7 11
- Out : Input size of array: Insert elements: Primes from your array: 2 3 5 7 11 
# Negative cases: 
### Test 01: [Incorrect data type of array's size]
- In : q
- Out : Input size of array: [ERR] : Input error
### Test 02: [Array's size is out of range - low]
- In : 0
- Out : Input size of array: [ERR] : Inder out of range
### Test 03: [Array's size if out of range - high]
- In : 222
- Out : Input size of array: [ERR] : Inder out of range
### Test 04: [Array's size is out of range - null]
- In : 0
- Out : Input size of array: [ERR] : Inder out of range
### Test 05: [Incorrect data type input while filling array]
- In : 3 1 7 p
- Out : Input size of array: Insert elements: [ERR] : Input error
### Test 06: [No primes in source data]
- In : 4 12 18 0 1
- Out : Input size of array: Insert elements: [ERR] : No prime numbers in your data
### Test 07: [One non-prime]
- In : 1 36
- Out : Input size of array: Insert elements: [ERR] : No prime numbers in your data
