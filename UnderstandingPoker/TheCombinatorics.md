# Which type of poker will be used for the solver:

Leduc Hold'em is the easist to build a solver.
As it it already [Solved](https://github.com/lifrordi/DeepStack-Leduc#leduc-hold'em)
It is also specifally made for these sort of projects.
And is rather simple to learn, in terms of ruleset.

[Rules, and playing hands](https://pettingzoo.farama.org/environments/classic/leduc_holdem/)

[Card values](https://www.wikihow.com/Play-Poker)

[Wikipedia](https://en.wikipedia.org/wiki/List_of_poker_hands)

[Wikihow not so useful](https://www.wikihow.com/Play-Poker)

[Combinations and Probabilties](https://en.wikipedia.org/wiki/Standard_52-card_deck)

[Game tree construction for optimal solver studying forum](https://forumserver.twoplustwo.com/15/poker-theory-amp-gto/game-tree-construction-optimal-solver-studying-1787259/)


# TODO watch for Had2020:

[Libratus](https://www.youtube.com/watch?v=2dX0lwaQRX0)

# Card rankings by value

```
<--(Highest numerical/value)--Leftmost 

A, K, Q, J, 10, 9, 8, 7, 6, 5, 4, 3, 2

The joker card is not included!

Rightmost--(Lowest numerical/value)-->
```

A Card can best fit into 4 bits as 2^4 = 16, therefore we can
fit any of the 15 card into (1 of the 16 finite states) in 4bits