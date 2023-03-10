# Positive cases:
### Test 01: [Normal behavior]
- In : 5 1 2 3 4 5
- Out : 15
### Test 02: [One element]
- In : 1 11
- Out : 11
### Test 03: [Max allowed data size]
- In : 10 1 -1 0 0 2 2 3 7 -9 111
- Out : 20979
# Negative cases: 
### Test 01: [Incorrect type for array's size]
- In : a
- Out : [ERR] : Incorrect input
### Test 02: [Array's size is out of range]
- In : 0
- Out : [ERR] : Index out of range
### Test 03: [Array's size is out of range - negative]
- In : -222
- Out : [ERR] : Index out of range
### Test 04: [Array's size is out of range - positive big]
- In : 100
- Out : [ERR] : Index out of range
### Test 05: [Array's size bigger then allower per oen unit]
- In : 11
- Out : [ERR] : Index out of range
### Test 06: [No odd numbers in data]
- In : 5 2 0 2 -6 10
- Out :  [ERR] : No odd numbers in your data
### Test 07: [Incorrect data type while filling array]
- In : 3 1 a 3
- Out : [ERR] : Incorrect input
