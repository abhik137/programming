# learn about classes

class Song(object):

    def __init__(self, lyrics):     # this is where we define class parameters
        self.lyrics = lyrics

    def sing_me_a_song(self):
        for line in self.lyrics:
            print line

happy_bday = Song(["Happy birthday to you",             # we're passing a list of strings as the lyrics
                    "I don't wanna get sued",
                    "So I'll stop right there"])

# alternate method
'''
lyrics=["Happy birthday to you","I don't wanna get sued","So I'll stop right there"]
happy_bday = Song(lyrics)
'''

bulls_on_parade = Song(["They rally around the family",
                        "With pockets full of shells"])

happy_bday.sing_me_a_song()

bulls_on_parade.sing_me_a_song()

'''
Why do I need self when I make __init__ or other functions for classes?
If you don't have self, then code like cheese = 'Frank' is ambiguous. That code isn't clear about whether you mean the instance's cheese attribute, or a local variable named cheese. With self.cheese = 'Frank' it's very clear you mean the instance attribute self.cheese. 
'''