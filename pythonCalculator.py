#**Staring the program**#
#*****by VIVEK PATEL*****#

#Function for all the mathametical operations
def operation(char, num1, num2):

    #Condition statements for the char input
    if(char == 'A'):
        result= num1+num2
        print(f"The result is {result}.\n")
    elif(char == 'S'):
        result= num1-num2
        print(f"The result is {result}.\n")
    elif(char == 'M'):
        result= num1*num2
        print(f"The result is {result}.\n")
    elif(char == 'D'):
        result= num1//num2
        print(f"The result is {result}.\n")
    elif(char == 'R'):
        result= num1%num2
        print(f"The result is {result}.\n")

#Initializing the variable with empty string for the while loop
char = ''

#List of valid character inputs to validate the input
option=['A', 'S', 'M', 'D', 'R', 'X']

#Infinite loop
while(1):

    #Loop For validating the character with the list
    while(char not in option):

        print("For Addition enter 'A', Subtraction 'S', multiplication 'M', division 'D', remainder 'R'")
        print("To EXIT enter 'X'\n")
        char=input("Please enter the character: ").upper()
        
        #Output for invalid inputs
        if(char not in option ): 
            print("\nInvalid input\n")

    #Condition to exit the loop
    if(char=='X'):
        print("Thank you\n")
        break

    num1 = int(input("Enter first integer number: "))
    
    num2 = int(input("Enter second integer number: "))

    #Condition of error according to mathematical rules
    if(char == 'D' and num2 == 0): 
        print("Invalid input\n") 
        continue
    
    #Calling the function
    operation(char, num1, num2)

    #Clearing the variable
    char = ''

#**Ending program**#