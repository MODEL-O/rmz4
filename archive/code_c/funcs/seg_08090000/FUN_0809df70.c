// undefined FUN_0809df70(void)
// entry 0x809df70


undefined4 FUN_0809df70(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0809df94);
    if (*(int *)(*DAT_0809df98 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined1 *)(param_1 + 0xbc) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xbc) = 1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(int *)(param_1 + 0xc0) == 0) {
    bVar1 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar1 - 1;
    iVar2 = DAT_0809e044;
    if ((bVar1 & 1) == 0) {
      pbVar5 = (byte *)(param_1 + 0xbc);
      sVar4 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                           *(int *)((uint)*pbVar5 * 8 + DAT_0809e044) * 0x100,
                           *(int *)(param_1 + 0x58) + DAT_0809e048);
      if ((sVar4 == 0) &&
         (sVar4 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                               *(int *)((uint)*pbVar5 * 8 + iVar2) * 0x100,
                               *(int *)(param_1 + 0x58) + 0x800), sVar4 != 0)) {
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0x54) + *(int *)((uint)*pbVar5 * 8 + iVar2 + 4) * 0x100;
      }
    }
    if (*(char *)(param_1 + 0x13) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xbd) = 1;
      if (*(byte *)(param_1 + 0x12) < 8) {
        cVar3 = '\b';
      }
      else {
        cVar3 = *(byte *)(param_1 + 0x12) - 8;
      }
      *(char *)(param_1 + 0x12) = cVar3;
    }
  }
  return in_lr;
}


