Aim: Don't forget to read the fine print.

Do Now: What is the smallest variable type that could be used to store the following value?
	1) 5     
	2) -30,000
	3) 255
	4) 5,000,000,000
Responses
	1) char
	2) short
	3) short
	4) long

You can add unsigned to remove negative numbers in its range, thus expanding the positive range of the number.
	ex: unsigned char c;
	c now has a range from 0 - 255 instead of -128 to 127
	
C Primitive Variable Types
	All boolean values are numbers
		0 ==> false
		all other numbers => true

		
You will make this mistake:
	
	if (x=6){...}
	
x=6 sets x to TRUE, then returns it
Instead, do x==6

You are not allowed to declare a variable inside a for loop.

printf
	-The most important C function!
	-Prints formatted strings
	-printf(<string literal>, <var1>, <var2>)
	-doesnt add a newline at the end
	
	
This:       

int main{
	int x = 10
	int y = 5
	printf("Hello, world! %d %f \n", x, y);
}

results in: 

"Hello, world! 10 5" 


	