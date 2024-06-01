def factorial(num : int) -> int:
    if num == 0:
        return 1
    else:
        return n * factorial(num-1)

number = int(input("Enter the number: "))
print("The factorial of the number is ", factorial(number)) 
