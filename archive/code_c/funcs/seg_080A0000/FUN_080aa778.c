// undefined FUN_080aa778(void)
// entry 0x80aa778


undefined4 FUN_080aa778(int param_1)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080aa7a0);
    *(undefined1 *)(param_1 + 0xb6) = 1;
    FUN_08002b10(DAT_080aa7a4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    pbVar4 = (byte *)(param_1 + 0xb7);
    if (*pbVar4 == 0) {
      bVar2 = 3;
    }
    else {
      bVar2 = *pbVar4 - 1;
    }
    *pbVar4 = bVar2;
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*pbVar4 * 2 + DAT_080aa83c));
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar1 = DAT_080aa840;
    sVar3 = FUN_08007c7c(iVar5 + *(int *)(((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U) +
                                         DAT_080aa840) * 0x100,*(int *)(param_1 + 0x58) + 0x400);
    if ((sVar3 == 0) ||
       (sVar3 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                             *(int *)(((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U) + iVar1)
                             * 0x100,*(undefined4 *)(param_1 + 0x58)), sVar3 != 0)) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0x13) = 0x20;
    }
  }
  return in_lr;
}


