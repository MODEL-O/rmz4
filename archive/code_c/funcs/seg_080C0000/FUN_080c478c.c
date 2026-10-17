// undefined FUN_080c478c(void)
// entry 0x80c478c


undefined4 FUN_080c478c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c4804);
    FUN_0801cf00(param_1,0x5300);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * 2 + -1) * 0x80;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 0xb4) <= *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4);
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


