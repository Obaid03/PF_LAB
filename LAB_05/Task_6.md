# x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
# Explain why the output is 30

So the First Condition is 5>8:
  - since it is False it will move to the Second Condition

Second condition is 1 != 2 <5:
  - The expression 2 < 5 is evaluated first because comparison operators (<) have higher precedence than inequality operators (!=).
  - 2 < 5 evaluates to true (or 1).
  - Now, the expression becomes 1 != 1, which evaluates to false (because 1 is equal to 1).

Final Result: Since 1 != 2 < 5 evaluates to false, the ternary expression takes the final part 30.


![image](https://github.com/user-attachments/assets/635d9e8b-957c-4dea-aa76-41d7a1a6851c)
