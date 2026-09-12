# Node:
One node represents one turn, and has childs based on the next likely next turns.

uint8_t CardsPlayed:
- Upper (4bits) for PlayerA's card
- Lower (4bits) for PlayerB's card

uint64_t LeftChildPtr:
- Points to the node under this one, with the left state on the tree.

uint64_t RightChildPtr:
- Points to the node under this one, with the right state on the tree.
