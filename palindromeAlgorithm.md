STEP 1: START  
STEP 2: INITIALIZE integer variable `num` and character buffer `stringifiedInteger[20]`  
STEP 3: PROMPT user for a number and STORE input in `num`  
STEP 4: CONVERT `num` to string using `snprintf` and STORE in `stringifiedInteger`  
STEP 5: DUPLICATE `stringifiedInteger` into pointer `duplicateIntString` using `strdup` 
 - This creates a unique copy in heap memory for manipulation

STEP 6: CALL `reverseString` function passing `duplicateIntString`:
 - INITIALIZE `startPointer` to the first character address
 - INITIALIZE `endPointer` to the last character address (length - 1)
 - LOOP from `i = 0` while `i < stringLength / 2`:
    - STORE character at `endPointer` in `tempVar`
    - ASSIGN character at `startPointer` to `endPointer`
    - ASSIGN `tempVar` to `startPointer`
    - INCREMENT `startPointer` (move right)
    - DECREMENT `endPointer` (move left)
    - INCREMENT `i` by 1

STEP 7: EVALUATE equality using `strcmp(stringifiedInteger, duplicateIntString)`
 - IF result IS 0:
    - PRINT "The number is a palindrome"
 - ELSE:
    - PRINT "The number is NOT a palindrome"

STEP 8: RELEASE heap memory using `free(duplicateIntString)`
STEP 9: END