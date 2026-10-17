// undefined FUN_08075a58(void)
// entry 0x8075a58


undefined4 FUN_08075a58(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08075aa0);
    FUN_08005784(param_1 + 0x74,DAT_08075aa4);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 8) != 0) {
    iVar4 = DAT_08075aac;
    if (*(int *)(*DAT_08075aa8 + 0x54) <= *(int *)(param_1 + 0x54)) {
      iVar4 = 0x100;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(undefined1 *)(param_1 + 0x12) = 0x10;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if ((*(char *)(param_1 + 0xdd) == '\0') ||
         (bVar2 = *(byte *)(param_1 + 0xdb) + 1 & 1, *(byte *)(param_1 + 0xdb) = bVar2, bVar2 == 0))
      {
        uVar3 = 9;
      }
      else {
        uVar3 = 0x16;
      }
      *(undefined1 *)(param_1 + 0xd) = uVar3;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


