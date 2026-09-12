
## This is some of my brainstorming

# KuhnNode:
One node represents one turn, and has childs based on the next likely next turns.

flags: Type unsigned 8 bit integar
bits 0-2: Node ID
bits 3: Active Player (0 or 1)
bits 4: Is Terminal (0 or 1)
bits 5-7 Payoff state

playedCards: Type unsigned 8 bit integar
High part P1: (J=1, Q=2, K=3)
Low part P2: (J=4, Q=5, K=6)

left_child_idx: Type u8 for a index of the node array
right_child_idx: Type u8 for a index of the node array
