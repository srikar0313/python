import random
def game(comp,you):
    if comp==you:
        print("tie")
    elif comp=='r'and you=='p':
        return 1
    elif comp=='s'and you=='r':
        return 1
    elif comp=='p'and you=='s':
        return 1 
    else:
       return 0
win=0
loss=0
while True:
    you=input("if u want to end q else rock(r),paper(p),sissors(s)? ").lower()
    if you=="q":
        break
    print("comp Turn :rock(r),paper(p),sissors(s)?")
    rand=random.randint(1,3)
    if rand==1:
       comp="r"
    elif rand==2:
        comp="p"
    elif rand==3:
        comp="s"
    print(f"comp choice is:{comp}")
    print(f"your choice is:{you}")
    c= game(comp,you)
    if c==1:
       win=win+1
       print("you win")
    elif c==0:
        loss=loss+1
        print("comp win")

print(f"you won:{win} times")
print(f"comp won:{loss} times")