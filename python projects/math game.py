import random
import time
#the values written here are constsants they remain same throughout the program
MAXPROBLEMS=10
OPERANDS=["+","-","*"]
MIN=3
MAX=12
def question():
    left=random.randint(MIN,MAX)
    right=random.randint(MIN,MAX)
    operand=random.choice(OPERANDS)
    
    exp=str(left)+''+operand+''+str(right)
    answer=eval(exp)
    return exp,answer

input("press enter to start the time")
print("------------------------------")
start_time=time.time()
for i in range(MAXPROBLEMS):
    while True:
        exp,answer=question()
        guess=input("problem #"+str(i+1)+":" + exp+'=')
        if guess==str(answer):
            break
print("------------------------------")
end_time=time.time()
final_time=round(end_time-start_time,2)
print("you completed in ",final_time,"seconds")    
