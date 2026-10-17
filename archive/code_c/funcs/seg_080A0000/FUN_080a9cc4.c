// undefined FUN_080a9cc4(void)
// entry 0x80a9cc4


undefined4 FUN_080a9cc4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080a9d74 + (uint)*(byte *)(param_1 + 0xbc) & 0xffff);
    FUN_080a9a98(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ('\x02' < *(char *)(param_1 + 0x71)) {
    if ((*(uint *)(param_1 + 0x70) & DAT_080a9d78) == DAT_080a9d7c) {
      FUN_08005784(param_1 + 0x74,DAT_080a9d80);
      *(undefined4 *)(param_1 + 0x98) = DAT_080a9d84;
      FUN_08002b10(DAT_080a9d88);
    }
    cVar1 = FUN_080a9b2c(param_1);
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    }
    cVar1 = FUN_080a9b7c(param_1);
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  if ((*(uint *)(param_1 + 0x70) & DAT_080a9d78) == DAT_080a9d8c) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_08005784(param_1 + 0x74,DAT_080a9d90);
  }
  return in_lr;
}


