# Positive cases:
### Test 01: [Expected zero fibos]
- In : 4 1 2 4 7
- Out : Input the number of elements: Insert elements: Fibonacci's numbers inserted: 1 2 4 7 
### Test 02: [One bad element]
- In : 1 1
- Out : Input the number of elements: Insert elements: Fibonacci's numbers inserted: 1 
### Test 03: [One good element]
- In : 1 -3
- Out : Input the number of elements: Insert elements: Fibonacci's numbers inserted: -3 1 


### Test 05: [q]
### Test 04: [All elements are good and size of data is max]
- In : 10 0 0 3 120 -3 -6 9 3 3 12
- Out : Input the number of elements: Insert elements: Fibonacci's numbers inserted: 0 1 0 1 3 2 120 3 -3 5 -6 8 9 13 3 21 3 34 12 55 
# Negative cases: 
### Test 01: [Incorrect size's data type]
- In : y
- Out : Input the number of elements: [ERR] : Input error
### Test 02: [Size out of range -- low]
- In : -69
- Out : Input the number of elements: [ERR] : Index out of range
### Test 03: [Size out of range -- high]
- In : 111
- Out : Input the number of elements: [ERR] : Index out of range
### Test 04: [Size out of range -- null]
- In : 0
- Out : Input the number of elements: [ERR] : Index out of range
### Test 05: [Error while filling data]
- In : 5 1 2 3 o 5
- Out : Input the number of elements: Insert elements: [ERR] : Input error
