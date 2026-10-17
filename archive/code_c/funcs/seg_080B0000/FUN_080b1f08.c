// undefined FUN_080b1f08(void)
// entry 0x80b1f08


undefined4 FUN_080b1f08(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xc0) != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_080b1fcc);
    FUN_08005784(param_1 + 0x74,DAT_080b1fd0);
    *(undefined1 *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = DAT_080b1fd4;
  if ((*(byte *)(param_1 + 0x12) & 2) != 0) {
    iVar4 = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar4 = 0xc;
    }
    sVar3 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(iVar4 + DAT_080b1fd4 + 4) * 0x100,
                         *(undefined4 *)(param_1 + 0x58));
    if (sVar3 != 0) {
      iVar4 = 0;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar4 = 0xc;
      }
      sVar3 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(iVar4 + iVar1) * 0x100,
                           *(int *)(param_1 + 0x58) + 0x1200);
      if (sVar3 == 0) {
        iVar4 = 0;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar4 = 0xc;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(iVar4 + iVar1 + 8) * 0x100;
      }
    }
  }
  cVar2 = FUN_080b2158(param_1);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


