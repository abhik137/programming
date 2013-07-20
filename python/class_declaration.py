class Team(object):
    def __init__(self, name=None, logo=None, members=0):
        self.name = name
        self.logo = logo
        self.members = members

team = Team("Oscar", "http://...", 10)

team2 = Team()
team2.name = "Fred"

team3 = Team(name="Joe", members=10)

print team.name
