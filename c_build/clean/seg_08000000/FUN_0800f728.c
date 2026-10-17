// undefined FUN_0800f728(void)
// entry 0x800f728


void FUN_0800f728(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08002b10(0x79);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return;
}


