## Tests description for lab_01_05_01

## Positive cases:

#### 01 - Normal behaviour 
- In: 12 11 
- Out: 1 1
#### 02 - Dividend less then divisor
- In: 5 10
- Out: 0 5

## Negative cases:
#### 01 - Divisor is zero (NOT_POSITIVE_INPUT_ERROR_END 2)
- In: 3 0
- Out: 

#### 02 - Incorrect input (INPUT_ERROR_END 1)
- In: 1q
- Out:

#### 03 - Dividend is zero (NOT_POSITIVE_INPUT_END 2)
- In: 0 1
- Out: 
