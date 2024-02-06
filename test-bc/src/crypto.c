#include "crypto.h"

BYTE *hashTransactions(Transaction *transactions) {

  for (int i = 0; i <= sizeof(transactions); i++) {
    printf("%s sent %f coins to %s\n", transactions[i].sender,
           transactions[i].amount, transactions[i].receiver);
  }
  SHA256_CTX ctx;
  BYTE string[] = {"Sami Amsaf"};
  sha256_init(&ctx);
  sha256_update(&ctx, string, strlen(string));
  BYTE hash[SHA256_BLOCK_SIZE];
  sha256_final(&ctx, hash);

  // This part will take care of converting the byte array to a string that's
  // readble in stdout
  char hash_str[(sizeof hash) + 1];
  memcpy(hash_str, hash, sizeof hash);
  hash_str[sizeof hash] = 0; // Null termination.

  return hash;
}
