// undefined FUN_080a9e58(void)
// entry 0x80a9e58


undefined4 FUN_080a9e58(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  cVar1 = FUN_080a9b2c(param_1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  cVar1 = FUN_080a9a70(param_1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0xbc) + DAT_080a9ec0;
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != uVar2) {
      FUN_0801cf00(param_1,uVar2 & 0xffff);
      FUN_08005784(param_1 + 0x74,DAT_080a9ec4);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


