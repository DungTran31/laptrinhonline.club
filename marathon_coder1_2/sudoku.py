cau_do = [
    [7,8,0,4,0,0,1,2,0],
    [6,0,0,0,7,5,0,0,9],
    [0,0,0,6,0,1,0,7,8],
    [0,0,7,0,4,0,2,6,0],
    [0,0,1,0,5,0,9,3,0],
    [9,0,4,0,6,0,0,0,5],
    [0,7,0,3,0,0,0,1,2],
    [1,2,0,0,0,7,4,0,0],
    [0,4,9,2,0,6,0,0,7]
]

def in_sudoku(q):
    for d in range(len(q)):
        if d % 3 == 0 and d != 0:
            print("- - - - - - - - - - -")
        for c in range(len(q[0])):
            if c % 3 == 0 and c != 0:
                print("| ", end ="")
            if c == 8:
                print(str(q[d][c]))
            else:
                print(str(q[d][c]) + " ", end = "")


def giai(q):
    tim_thay = tim_o_trong(q)
    if not tim_thay:
        return True
    else:
        d, c = tim_thay
    for i in range(1,10):
        if kiem_tra(q, i, d, c):
            q[d][c] = i
            if giai(q):
                return True
            else:
                q[d][c] = 0
        
    return False
        
    

def tim_o_trong(q):
    for d in range(len(q)):
        for c in range(len(q[0])):
            if q[d][c] == 0:
                return d, c
    return None


def kiem_tra(q, gia_tri, dong, cot):
    for i in range(len(q[0])):
        if q[i][cot] == gia_tri and i != dong:
            return False
    for i in range(len(q)):
        if q[dong][i] == gia_tri and i != cot:
            return False

    x = cot // 3
    y = dong // 3

    for i in range(y*3, y*3+3):
        for j in range(x*3, x*3+3):
            if q[i][j] == gia_tri and i != dong and j != cot:
                return False
    return True

if(giai(cau_do)):
    print("true")
else:
    print("false")