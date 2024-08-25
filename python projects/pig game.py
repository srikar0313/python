import random

def roll():
    roll=random.randint(1,6)
    return roll

while True:
    players = int(input("Enter the number of players (2 - 4): "))
    if 2 <= players <= 4:
      print("welcome players")
      break
    else:
        print("invalid input")

maxscore=50
player_score=[0 for i in range(players)]

while max(player_score)<maxscore:
     for player_idx in range(players):
        print("\nPlayer number", player_idx + 1, "turn has just started!")
        print("Your total score is:", player_score[player_idx], "\n")
        current_score = 0

        while True:
            should_roll = input("Would you like to roll (y)? ")
            if should_roll.lower() != "y":
                break

            value = roll()
            if value == 1:
                print("You rolled a 1! Turn done!")
                current_score = 0
                break
            else:
                current_score += value
                print("You rolled a:", value)

            print("Your score is:", current_score)

        player_score[player_idx] += current_score
        print("Your total score is:", player_score[player_idx])

max_score=max(player_score)
wining_index=player_score.index(max_score)
print("Playernumber",wining_index+1,"has the highest sore of",max_score)
     