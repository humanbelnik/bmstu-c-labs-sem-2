## Tests description for lab_01_06_01

## Positive cases:

#### 01 - Right triangle
- In: 10 0 0 10 0 0
- Out: 50.000000

#### 02 - Isosceles triangle
- In: 1 0 6 0 4 -10
- Out: 25.000000

#### 03 - Random triangle
- In: 1.5 3 -1 7 10 14.31
- Out: 31.137500

## Negative cases
* Negative cases don't return anything to the terminal

#### 01 - Incorrect input (INPUT_ERROR_END 1)
- In: 1q 1 2 e 1
- Out: 

#### 02 - Three dots in one line (ONE_LINE_ERROR_END 2)
- In: -10 -10 1 1 0 0
- Out: 
- 
#### 03 - Three dots in one HORIZONTAL line (NOT_A_TRIANGLE_ERROR_END 3)
- In: 1 -10 4 -10 3 -10
- Out: 
#### 04 - Three dots are the same (NOT_A_TRIANGLE_ERROR_END 3)
- In: 1 1 1 1 1 1
- Out: 
#### 05 - Three dots are in VERTICAL line (ONE_LINE_ERROR_END 2)
- In: 0 1 0 2 0 3
- Out: 










