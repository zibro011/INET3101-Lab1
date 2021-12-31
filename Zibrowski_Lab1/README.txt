Adelaide Zibrowski zibro011@umn.edu Student ID: 5442587

This program randomly creates a four dimensional array of money values for 
each month, day of week, register, and employee. Then, three functions:
sumTotal, sumWeekday, and sumEmployee can be executed to calculate
the total amount of money in each of these categories. The three functions
can be chosen from the menu that is displayed when the program is run.

Menu Definition:
    1. Total sum
    2. Total weekday 
    3. Total employee 
    4. Exit

Data structure for money array:
    Each of the 12 months has 7 days, each of the 7 days has 10 registers
    and each of the 10 registers has 8 employees. Essentially a large
    table containing the amount of money made by every employee at every
    register on every given day of the year. 

Function Definitions:
    sumTotal:
        input: none
        output: total money of all months, days, registers, and employees
        algorithm: Loops through all 12 months, 7 days, 10 registers,
        and 8 employees, taking the money value from each array element
        and adding them together inside of the float value 'total'
    sumWeekday:
        input: none from user, 3 is hardcoded in to represent Wednesday
        output: total money for all Wednesdays
        algorithm: loops through all 12 months, 10 registers, and
        8 employees, but only for wednesdays and adds them together inside 
        the float value 'total'
    sumEmployee:
        input: employee number, 1-8 (entered number is then translated from
        ASCII to an integer before it is passed to the function)
        output: total money for specific employee
        algorithm: Loops through all 12 months, 7 days, and 10 registers
        for one specific employee that is entered by the user and adds them
        together inside the float value 'total'

Files:
    lab1.c : main program code
    lab1.h : header file for lab1.c
