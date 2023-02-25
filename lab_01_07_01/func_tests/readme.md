## Tests description for lab_01_07_01

## Positive cases:

#### 01 - Normal behaviour
- In: 10 1
- Out: -0.462384
 -0.544021
 0.081637
0.150062

#### 02 - Relative error is undefined
In: 0 0.1
Out: 0.000000 0.000000 0.000000 nan

## Negative cases:
#### 01 - Incorrect epsilon (EPSILON_ERROR_END 2)
- In: 0 2
- Out:

#### 02 - Incorrect input (INPUT_ERROR_END 1)
- In: 1q
- Out: