#ifndef BLOCK_H
#define BLOCK_H

#include "sha256.h"
#include <stdlib.h>

typedef struct {
  char* sender;
  char* receiver;
  float amount;
} Transaction;

typedef struct {
  BYTE previousHash;
  BYTE blockHash;
  Transaction *transactions[10];
} Block;

#endif // BLOCK_H
