1 question 

num = int(input("Enter a number: "))  
if (num % 2) == 0:  
   print("Even number")  
else:  
   print("Odd number")  
   
2 question

year = int(input("Please Enter the Year Number you wish: "))
if (( year%400 == 0)or (( year%4 == 0 ) and ( year%100 != 0))):
    print("Leap Year")
else:
    print("Not the Leap Year")
    
3 question
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))

if (num1 >= num2) and (num1 >= num3):
   largest = num1
elif (num2 >= num1) and (num2 >= num3):
   largest = num2
else:
   largest = num3

print("The largest number is", largest)

4 question
a = int(input('Please Enter the First side of a Triangle: '))
b = int(input('Please Enter the Second side of a Triangle: '))
c = int(input('Please Enter the Third side of a Triangle: '))

# calculate the semi-perimeter
s = (a + b + c) / 2

# calculate the area
Area = (s*(s-a)*(s-b)*(s-c)) ** 0.5

print(" The Area of a Triangle is %0.2f" %Area)

5 question
a = int(input("Enter value of a"))
b = int(input("Enter value of b"))

print("before swap a and b are ",a,b)
temp = a
a = b
b = temp
print("after swap a and b are ",a,b)

6 question
a = int(input("Enter value of a"))
b = int(input("Enter value of b"))
print(a+b)

7 question
a = int(input("Enter value of a"))
b = int(input("Enter value of b"))
if a>b:
  print(a)
else:
  print(b)
  
8 question
p = int(input("Enter value of principle "))
r = int(input("Enter rate of interest "))
t = int(input("Enter value of time"))

si = (p*t*r)/100
print(si)

9 question
r = int(input("Enter radius of circle "))
PI = 3.1415
print(PI*(r*r))

10 question
num = int(input("Enter a number: "))

factorial = 1
if num < 0:
   print("factorial does not exist ")
elif num == 0:
   print("The factorial of 0 is 1")
else:
   for i in range(1,num + 1):
       factorial = factorial*i
   print("The factorial of",num,"is",factorial)
