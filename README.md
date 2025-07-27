# Cpp Experiment 3: Exploring Decision-Making Statements**

### **Aim**

To:

* Understand how decision-making statements work in C++.
* Use relational and logical operators to guide program decisions based on user input.

### **Tool Used**

* Visual Studio Code (VS Code)

### **Objectives**

* Implement conditional branching using `if`, `if-else`, and `nested if-else` constructs.
* Apply relational operators to compare values and define decision criteria.
* Combine conditions with logical operators for complex decision-making.
* Develop programs that:

  * Identify whether a number is positive or negative.
  * Assign student grades according to percentage marks.
  * Determine the quadrant of a point in 2D coordinate geometry.

### **Theory**

**Why Decision-Making Statements?**

In programming, it is often necessary to execute different instructions based on certain conditions.
Decision-making enables selective execution of code, making programs more interactive and responsive.
It forms the foundation of intelligent software behavior.

**Types of Decision Statements**

* **If Statement:** Executes a block of code only if a specific condition is true.
* **If-Else Statement:** Provides an alternative block when the condition is false.
* **Nested If-Else:** Evaluates multiple conditions in a structured and hierarchical way.

**Relational Operators**

Used to compare values and return Boolean outcomes.
Examples include:

* `==` (equal to)
* `!=` (not equal to)
* `<`, `>`, `<=`, `>=` (less than, greater than, etc.)

**Logical Operators**

Used to combine multiple conditions:

* `&&` (AND): All conditions must be true
* `||` (OR): At least one condition must be true
* `!` (NOT): Reverses the result of a condition

# **Program Overview**

* Accepts user inputs such as numbers, marks, or coordinates
* Applies conditional checks to evaluate these inputs
* Outputs relevant results such as:

  * Whether a number is positive, negative, or zero
  * Student’s grade based on percentage
  * Location of a point in a specific quadrant or on an axis/origin

### **Applications**

**1. Sign Identification**

Determine whether a number is:

* Positive
* Negative
* Zero

**2. Grading System**

* Accept marks for 5 subjects
* Calculate the total and percentage
* Assign grades:

  * `>=90` → Grade A
  * `>=75` → Grade B
  * `>=60` → Grade C
  * `<60` → Grade D or Fail

**3. Quadrant Detection**

* Accept coordinates `(x, y)`
* Identify the point's location:

  * Quadrant I: x > 0, y > 0
  * Quadrant II: x < 0, y > 0
  * Quadrant III: x < 0, y < 0
  * Quadrant IV: x > 0, y < 0
  * Origin: x == 0 and y == 0
  * X-axis or Y-axis if one coordinate is zero

### **Sample Outputs**

**For Sign Identification:**

Enter a number of your choice: 10
The given number is Positive

Enter a number of your choice: 0
The given number is Zero

Enter a number of your choice: -99
The given number is Negative


**For Grading System:**

```
Enter marks in 5 subjects: 85 78 90 88 80  
Total: 421  
Percentage: 84.2%  
Grade: B
```

**For Quadrant Detection:**

```
Enter X and Y coordinates: -4 3  
Output: The point lies in Quadrant II.
```

---

This experiment helps in understanding **how C++ controls program flow** using **decision-making constructs**, which are essential for real-world logic and responsiveness.

Let me know if you want the full code examples for all three programs!
