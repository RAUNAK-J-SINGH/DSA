import random

print("WELCOME TO ROCK--PAPER--SCISSORS GAME"
      + "Winning Rules of Rock Paper Scissors Game:\n"
      + "ROCK VS PAPER: PAPER WINS \n"
      + "ROCK VS SCISSORS: ROCK WINS \n"
      + "PAPER VS SCISSORS: SCISSORS WINS \n")

while True:
    print("Enter your Move \n 1. Rock \n 2. Paper \n 3. Scissors \n")
    move = int(input("Enter your choice:"))
 
    while move > 3 or move < 1:
        print("Enter a valid move please :)")
    
    if move == 1:
        move_name = 'Rock'
    elif move == 2:
        move_name = 'Paper'
    else:
        move_name = 'Scissors'
    
    print("User's Move is: ",move_name)
    print("Its Computer's move now: \n")

    comp_move = random.randint(1,3)

    if comp_move == 1:
        comp_move_name = 'RocK'
    elif comp_move == 2:
        comp_move_name = 'PapeR'
    else:
        comp_move_name = 'ScissorS'

    print("Computer's move is: ",comp_move_name)
    print(move_name, "Vs", comp_move_name)

    #result for draw

    if move_name == comp_move_name:
        print("-----It's a DRAW-----",end="")
        result = "DRAW"
    
    #condition for winning

    if (move_name == 1 and comp_move_name == 2):
        print("-----PapeR wins-----",end="")
        result="PapeR"
    elif(move_name == 2 and comp_move_name == 1):
        print("-----Paper wins-----",end="")
        result="Paper"
    
    if (move_name == 1 and comp_move_name == 3):
        print("-----Rock wins-----",end="")
        result="Rock"
    elif(move_name == 3 and comp_move_name == 1):
        print("-----RocK wins-----",end="")
        result="RocK"
    
    if (move_name == 2 and comp_move_name == 3):
        print("-----ScissorS wins-----",end="")
        result="ScissorS"
    elif(move_name == 3 and comp_move_name == 2):
        print("-----Scissor wins-----",end="")
        result="Scissor"

    #Printing Result
    if result == 'DRAW':
        print("-----TIE-----")
    if result == move_name:
        print("-----USER WINS-----")
    else:
        print("-----COMPUTER WINS-----")

    print("DO YOU WANT TO PLAY AGAIN? (Y/N)\n")

    ans = input.lower()
    if ans == 'n':
        break

print("THANKS FOR PLAYING")



    
    
    



