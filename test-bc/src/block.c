#include "block.h"

Block *createBlock(BYTE previousHash, Transaction *transactions) {
  Block *newBlock= (Block *)malloc(sizeof(Block));
  newBlock->previousHash = previousHash;

  return newBlock;
}
