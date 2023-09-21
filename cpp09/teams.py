import random

def split_teams(names):
    # Check if there are at least 2 names for each team
    if len(names) < 2:
        return "You need at least two names to form two teams."

    # Shuffle the list of names randomly
    random.shuffle(names)

    # Calculate the number of names for each team
    num_names_per_team = len(names) // 2

    # Split the shuffled list into two teams
    team1 = names[:num_names_per_team]
    team2 = names[num_names_per_team:]

    return f"Team 1: {', '.join(team1)}\nTeam 2: {', '.join(team2)}"

# Example usage
if __name__ == "__main__":
    # Replace these names with your own list of 18 names
    names = ["Tukka", "ahsalem", "ayassin", "anas", "omar", "kanbari", "steve", "abdulo", "disogi", "imad", "ayoob", "hussain", "doston", "mousa", "danish", "shah", "malik", "yassir", "yossef", "mekky"]

    result = split_teams(names)
    print(result)