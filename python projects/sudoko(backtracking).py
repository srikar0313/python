board=[
    [7,8,0,4,0,0,1,2,0],
    [6,0,0,0,7,5,0,0,9],
    [0,0,0,6,0,1,0,7,8],
    [0,0,7,0,4,0,2,6,0],
    [0,0,1,0,5,0,9,3,0],
    [9,0,4,0,6,0,0,0,5],
    [0,7,0,3,0,0,0,1,2],
    [1,2,0,0,0,7,4,0,0],
    [0,4,9,2,0,6,0,0,7]]

def solve(bo):
    find=empty_cell(board)
    if not find:
        return True
    else:
        row,col=find
    for i in range(1,10):
            if valid(board,i,(row,col)):
                bo[row][col]=i
                if solve(board):
                   return True
                bo[row][col]=0
    return False
     
    
def valid (bo,num,pos):
    #check row
    for i in range(len(bo)):
        if bo[pos[0]][i]==num and pos[1]!=i:
            return False
    #check column 
    for i in range(len(bo)):
        if bo[i][pos[1]]==num and pos[0]!=i:
            return False
    #check grid
    x_box=pos[1]//3 #column
    y_box=pos[0]//3 #row
    for i in range(y_box*3,(y_box*3)+3):
        for j in range(x_box*3,x_box*3+3):
            if bo[i][j]==num and pos!=(i,j):
                return False
    return True
        
def print_board(bo):
    for i in range(len(bo)):
        if i%3==0 and i!=0:
            print("-------------------")
        for j in range(len(bo)):
            if j%3==0 and j!=0:
                print("|",end="")
            if j==8:
                 print(bo[i][j])
            else:
                print(str(bo[i][j]),end=" ")

def empty_cell(bo):
    for i in range(len(bo)):
        for j in range(len(bo)):
            if bo[i][j]==0:
                return (i,j)
    return None

print_board(board)
solve(board)
print("\nafter solving we get\n ")
print_board(board)