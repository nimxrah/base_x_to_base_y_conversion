# base_x_to_base_y_conversion
A C program that converts a non-negative number from a given base to a different base.

Example:
2012 in base 3 = 2*30 + 1*31 + 0*32 + 2*33 = 59 in base 10

2012 in base 3 is ( 3*30 + 2*41 + 3*42 ) 323 in base 4

Input Specification:
The input to this program will be three lines, each terminated by a newline character
1. The radix (old base) of the number
2. The number without leading zeros or spaces
3. The new base to which the input number is to be converted
   
We assume that the decimal equivalent of the number is less than MAXINT and that the new base and old base are less than 11. There is no need to validate the input.

Output Specification:
The output of this program is the number in the new base terminated by a newline character. It does not output any sign or leading zeros.

Sample Input and Output:
1.
Enter the number: 12
Enter the base of this number: 3
Enter the base in which you want to convert: 5
sum in base 10: 5
10

2.
Enter the number: 12564
Enter the base of this number: 7
Enter the base in which you want to convert: 10
sum in base 10: 3378
3378
