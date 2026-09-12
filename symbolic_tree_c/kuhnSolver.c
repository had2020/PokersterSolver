#include <stdint.h>

/* A element of the tree is a u32, broken up like this:
    uint8_t Card; states K=2, Q=1, J=0;

    uint8_t History states:
    Empty = 0,        // P1 turn 1: ""
    Check = 1,        // P2 turn 1 after P1 check: "C"
    Bet = 2,          // P2 turn 1 after P1 bet: "B"
    CheckBet = 3,     // P1 turn 2 after P1 check & P2 bet: "CB"
    // End Game states
    CheckCheck = 4,   // "CC"  -> Showdown (Pot: 2) | Winner: High card (P1 if C1 > C2, else P2)
    CheckBetFold = 5, // "CBF" -> P2 wins (Pot: 2)  | Winner: P2 (+1 profit, P1 folds)
    CheckBetCall = 6, // "CBC" -> Showdown (Pot: 4) | Winner: High card (P1 if C1 > C2, else P2)
    BetFold = 7,      // "BF"  -> P1 wins (Pot: 2)  | Winner: P1 (+1 profit, P2 folds)
    BetCall = 8,      // "BC"  -> Showdown (Pot: 4) | Winner: High card (P1 if C1 > C2, else P2)

    uint8_t leftChildIdx; // Check or Fold
    uint8_t rightChildIdx; // Bet or Call
*/

// TODO: optimize finite values futher into bitfields.
/*
enum Card { // could be 2 bits
  K = 2,
  Q = 1,
  J = 0,
};

enum History { // could be 3 bits
  Empty = 0,
  Check = 1,
  Bet = 2,
  CheckBet = 3,
  CheckCheck = 4,
  CheckBetFold = 5,
  CheckBetCall = 6,
  BetFold = 7,
  BetCall = 8,
};*/

enum GameState {
  KEmpty = 0, // -> KCheck
  KCheck = 1, // -> KCheckBet
  KBet = 2, // -> KBetCall
  KCheckBet = 3, // -> KCheckBetCall
  // End game states
  KCheckCheck = 4, 
  KCheckBetFold = 5,
  KCheckBetCall = 6,
  KBetFold = 7,
  KBetCall = 8,

  QEmpty = 9, // -> QCheck
  QCheck = 10, // -> QCheckCheck
  QBet = 11, // -> QBetFold
  QCheckBet = 12, // -> QCheckBetFold
  // End game states
  QCheckCheck = 13,
  QCheckBetFold = 14,
  QCheckBetCall = 15,
  QBetFold = 16,
  QBetCall = 17,

  JEmpty = 18, // -> JBet
  JCheck = 19, // -> JCheckBet
  JBet = 20, // -> JBetFold
  JCheckBet = 21, // -> JCheckBetFold
  // End game states
  JCheckCheck = 22,
  JCheckBetFold = 23,
  JCheckBetCall = 24,
  JBetFold = 25,
  JBetCall = 26,
};

int main() {
    // this uint8_t stores the next action index
    const enum GameState node_tree[27] = {
        
    };

    return 0;
}