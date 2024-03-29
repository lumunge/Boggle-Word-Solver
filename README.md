# BOGGLE WORD SOLVER.
- Boggle is a game that requires 16 letters on a grid and 2 players where each player tries to male long words with more letters to score points.
- At the end of the game the person with more words has the highest score and therefore the winner.
- The main objective is to create as many unique words as possible from a jumbled 16 characters.

## Boggle Word Solver.
- This solver implements the trie data structure to store words from the dictionary of words *freq-word.txt* and uses the depth first search algorithm to traverse the trie tree
to come up with words from a given input combination of characters.

## Files.
### board.cpp
- Collection of 16 characters from the user as input.

### utils.cpp
- A collection of utility functions which trim and convert the words from the *freq-word.txt* dictoinary to uppercase for easier implementation.

### trie.cpp
- An implementation of the Trie data structure with *insert* and *search* which will provide efficient lookups.
- We also build the trie from the *freq-word.txt* dictionary using the buildTrie() function.

### solver.cpp
- This is a depth first search graph traversal algorithm with backtracking and recursion whereby we traverse a node until there are no more matching characters and backtrack
until we find a matching and output the formed word.

### main.cpp
- This file ties all the above functions together and runs the whole solver.

## Compile and Run
- ```g++ -o gSolver main.cpp && ./gSolver```
