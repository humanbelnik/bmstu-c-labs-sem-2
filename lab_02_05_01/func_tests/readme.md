# Positive cases:
### Test 01: [Normal behaviour]
- In : 6 1 2 -5 0 13 -2
- Out :  -69
### Test 02: [Normal behaviour]
- In : 6 1 2 3 -4 -5 -6
- Out : -28
### Test 03: [Normal behavior --2]
- In : 8 -4 -5 -6 6 1 2 3 4
- Out :-43
### Test 04: [Max array's size]
- In : 10 -1 1 -5 6 -10 0 12 1 2 3
- Out : -23
## Negative cases

### Test 01: [Incorrect data type of size]
- In : v
- Out :  [ERR] : Input error
### Test 02: [Size out of range --low]
- In : -12
- Out :  [ERR] : Index out of range
### Test 03: [Size out of range --high]
- In : 255
- Out : [ERR] : Index out of range
### Test 04: [Size out of range --null]
- In : 0
- Out :  [ERR] : Index out of range
### Test 05: [All data positive]
- In : 5 1 2 3 4 5
- Out : [ERR] : No pos-neg pairs in your data
### Test 06: [All data negative]
- In : 4 -1 -2 -3 -4
- Out : [ERR] : No pos-neg pairs in your data
### Test 07: [All data nulls]
- In : 5 0 0 0 0 0
- Out : [ERR] : No pos-neg pairs in your data
