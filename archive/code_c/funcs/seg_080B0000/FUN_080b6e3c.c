// undefined FUN_080b6e3c(void)
// entry 0x80b6e3c


undefined4 FUN_080b6e3c(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b6ea4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,0xb500);
    *(undefined4 *)(param_1 + 0xb4) = 0x5a;
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x71);
  FUN_0801cff0(param_1);
  cVar3 = *(char *)(param_1 + 0x71);
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (cVar3 < '\a') {
      if (cVar3 != cVar2) {
        pbVar4 = (byte *)(param_1 + 0xbd);
        bVar1 = *pbVar4;
        *pbVar4 = bVar1 + 1;
        if (8 < (byte)(bVar1 + 1)) {
          *pbVar4 = 8;
        }
      }
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_080b6ea8);
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
  }
  iVar5 = *(int *)(param_1 + 0xb4) + -1;
  *(int *)(param_1 + 0xb4) = iVar5;
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


