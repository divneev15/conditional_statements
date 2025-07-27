# C++ Experiment 3: Exploring Decision-Making Statements

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

### **Algorithum**

**1. Sign Identification**

Determine whether a the user provided number is:

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


 =========-Student Marks Entry System-==========  

Enter marks for Chemistry (0 - 100): 67

Enter marks for Mathematics (0 - 100): 87

Enter marks for Physics (0 - 100): 99

Enter marks for C-Programming (0 - 100): 55

Enter marks for Python (0 - 100): 89

=======-=== #STUDENT RESULT# ==-========

Subject           Marks


Chemistry: 67

Mathematics: 87

Physics: 99

C-Programming: 55

Python: 89


Total Marks: 397/500

Percentage : 79.40%

Grade      : B+

Status     : PASSED



**For Quadrant Detection:**

   2D Coordinate Quadrant Check
   
---------=-------------------------

Enter the X coordinate: 12

Enter the Y coordinate: -1

Result: The point lies in the Fourth Quadrant.

# Conclusion
This experiment helps in understanding **how C++ controls program flow** using **decision-making constructs**, which are essential for real-world logic and responsiveness.


