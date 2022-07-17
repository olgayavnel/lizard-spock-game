/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>

/* 
rock > scissors
scissors > paper
paper > rock
lizard > spock
spock > scissors
scissors > lizard
lizard > paper
paper > spock
spock > rock
rock > lizard
*/

int main() {
  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";
 
  std::cout << "shoot! ";

  std::cin >> user;

  if (user == 1)
    std::cout << "you choose: ✊\n";
  else if (user == 2)
    std::cout << "you choose: ✋\n";
  else if (user == 3)
    std::cout << "you choose: ✌️\n";
  else if (user == 4)
    std::cout << "you choose: 🦎 \n";
  else if (user == 5)
    std::cout << "you choose: 🖖\n";
  else
    std::cout << "you: no such option available. Play again and choose the right one. \n";

  if (computer == 1)
    std::cout << "cpu choose: ✊\n";
  else if (computer == 2)
    std::cout << "cpu choose: ✋\n";
  else if (computer == 3)
    std::cout << "cpu choose: ✌️\n";
  else if (computer == 4)
    std::cout << "you choose: 🦎 \n";
  else
    std::cout << "you choose: 🖖\n";

  if (user == computer) {
    std::cout << "it's a tie! 🤝\n";
  }

  // user rock
  else if (user == 1) {
    if (computer == 2) {
      std::cout << "you lost! \n";
    }
    if (computer == 3) {
      std::cout << "you won! 🏆\n";
    }
    if (computer == 4) {
      std::cout << "you won! 🏆\n";
    }
    if (computer == 5) {
      std::cout << "you lost! \n";
    }
  }

  // user paper
  else if (user == 2) {
    if (computer == 1) {
      std::cout << "you won! 🏆\n";
    }
    if (computer == 3) {
      std::cout << "you lost! \n";
    }
    if (computer == 4) {
      std::cout << "you lost! \n";
    }
    if (computer == 5) {
      std::cout << "you won! 🏆\n";
    }
  }

  // user scissors
  else if (user == 3) {
    if (computer == 1) {
      std::cout << "you lost! \n";
    }
    if (computer == 2) {
      std::cout << "you won! 🏆\n";
    }
    if (computer == 4) {
      std::cout << "you won! 🏆\n";
    }
    if (computer == 5) {
      std::cout << "you lost! \n";;
    }
  }

  // user lizard
  else if (user == 4) {
    if (computer == 1) {
      std::cout << "you lost! \n";
    }
    if (computer == 2) {
      std::cout << "you won! 🏆\n";
    }
    if (computer == 3) {
      std::cout << "you lost! \n";
    }
    if (computer == 5) {
      std::cout << "you won! 🏆\n";
    }
  }

  // user spock
  else if (user == 5) {
    if (computer == 1) {
      std::cout << "you won! 🏆\n";
    }
    if (computer == 2) {
      std::cout << "you lost! \n";
    }
    if (computer == 3) {
      std::cout << "you won! 🏆\n";
    }
    if (computer == 4) {
      std::cout << "you lost! \n";
    }
  }

  return 0;

}