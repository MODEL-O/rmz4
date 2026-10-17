// undefined FUN_08084368(void)
// entry 0x8084368


undefined4 FUN_08084368(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080843b0);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    FUN_080bdfec(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xc00);
    *(undefined1 *)(param_1 + 0xd) = 6;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


