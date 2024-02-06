#include "block.h"
#include "crypto.h"

int main() {
  //  for (int i = 0; i < sizeof(hash); i++) {
  //    printf("%02x", hash[i]); // %02x ensures each byte is printed as two
  //    digits
  //  }

  Transaction transaction1 = {"Sami", "Daijin", 2.0f};
  Transaction transaction2 = {"Sami", "Franklyn", 1.0f};
  Transaction transactions[10] = {transaction1, transaction2};

  hashTransactions(transactions);
  return (0);
}
