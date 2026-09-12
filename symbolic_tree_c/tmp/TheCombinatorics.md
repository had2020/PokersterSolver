# Which type of poker will be used for the solver:

Kuhn Poker is the easist to build a solver.
As it it already [Solved](https://github.com/lifrordi/DeepStack-Leduc#leduc-hold'em)
It is also specifally made for these sort of projects.
And is rather simple to learn, in terms of ruleset.

We will build a simple Kuhn Poker Solver first, 
and then move onto a Inteager based ML solution to Texas Hold'em 
Poker, which is a common modern poker ruleset, people actually play.

# Card rankings by value

```
<--(Highest numerical/value)--Leftmost 

A, K, Q, J, 10, 9, 8, 7, 6, 5, 4, 3, 2

The joker card is not included!

Rightmost--(Lowest numerical/value)-->
```

A Card can best fit into 4 bits as 2^4 = 16, therefore we can
fit any of the 15 card into (1 of the 16 finite states) in 4bits

## Please ignore what is below for now, some of it is good to know, but most of is my brainstorming so far.


[This is the Wikipedia for the actual type of simplified form of poker we will tackle solving in this project](https://en.wikipedia.org/wiki/Kuhn_poker)

[Card values](https://www.wikihow.com/Play-Poker)

[Wikipedia](https://en.wikipedia.org/wiki/List_of_poker_hands)

[Wikihow not so useful](https://www.wikihow.com/Play-Poker)

[Combinations and Probabilties](https://en.wikipedia.org/wiki/Standard_52-card_deck)

[Game tree construction for optimal solver studying forum](https://forumserver.twoplustwo.com/15/poker-theory-amp-gto/game-tree-construction-optimal-solver-studying-1787259/)

# TODO watch for Had2020:

[Libratus](https://www.youtube.com/watch?v=2dX0lwaQRX0)

# How the game will be played:
There are a set 60 cards in one normal Poker card pack.

The dealer will pull 3 cards in Kuhn Poker

Each player will get (1 card), based on a set seed.

The inital draw has (3^15) = 14,348,907 finite possibilites.
Each of these start turns, is a master node of that game, 
with each node below it representing the next possiblites of the game, until completion.

Each player can choose 1 of 3 actions:
Bet, Raise, or Fold

