// undefined FUN_080aa25c(void)
// entry 0x80aa25c


undefined4 FUN_080aa25c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0xb4;
    FUN_0801cf00(param_1,DAT_080aa300);
    FUN_08005784(param_1 + 0x74,DAT_080aa304);
    FUN_080a9ba4(param_1);
    FUN_08002b10(DAT_080aa308);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  cVar1 = FUN_080a9cac(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    FUN_0801cf00(param_1,DAT_080aa30c + (uint)*(byte *)(param_1 + 0xbc) & 0xffff);
    FUN_08005784(param_1 + 0x74,DAT_080aa310);
    *(undefined1 *)(param_1 + 0x12) = 0xff;
  }
  cVar1 = FUN_080a9a70(param_1);
  if (cVar1 != '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080aa314);
    *(undefined1 *)(param_1 + 0xb7) = 0;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


