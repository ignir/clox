#include <stdio.h>

#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
  Chunk chunk;
  initChunk(&chunk);

  writeChunk(&chunk, OP_CONSTANT, 444);
  writeChunk(&chunk, addConstant(&chunk, 1.2), 444);

  writeChunk(&chunk, OP_RETURN, 444);
  disassembleChunk(&chunk, "test chunk");
  freeChunk(&chunk);

  return 0;
}
