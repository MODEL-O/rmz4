// undefined FUN_0803bc58(void)
// entry 0x803bc58


undefined4 FUN_0803bc58(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = FUN_0803c27c(param_1,DAT_0803bc8c);
    if (cVar1 != '\0') {
      FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0xc1) * 2 + DAT_0803bc90));
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  cVar1 = FUN_0803c400(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_0803c1e4(param_1);
    if (cVar1 == '\0') {
      return in_lr;
    }
  }
  else {
    FUN_080d1bcc(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_08002b10(0x2b);
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803bcf0);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  return in_lr;
}


