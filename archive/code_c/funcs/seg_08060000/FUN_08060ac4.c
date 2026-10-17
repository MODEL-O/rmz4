// undefined FUN_08060ac4(void)
// entry 0x8060ac4


undefined4 FUN_08060ac4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08060b08);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    FUN_08002b10(0x2d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x12;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


