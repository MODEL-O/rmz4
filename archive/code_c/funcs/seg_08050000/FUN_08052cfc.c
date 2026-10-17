// undefined FUN_08052cfc(void)
// entry 0x8052cfc


undefined4 FUN_08052cfc(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08052d20);
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = 0x1000;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = 0x1c00;
    }
    *(int *)(param_1 + 0x58) = iVar3 + iVar4;
    *(undefined4 *)(param_1 + 0x60) = DAT_08052da0;
    *(undefined1 *)(param_1 + 0x4d) = 0;
    pbVar5 = (byte *)(param_1 + 0x4a);
    *pbVar5 = *pbVar5 & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(int *)(param_1 + 0x5c) = -(*(int *)(param_1 + 0x5c) >> 1);
    FUN_0801fe64(4,param_1 + 0x54);
    iVar3 = *DAT_08052da4;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
    *pbVar5 = *pbVar5 & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    FUN_080c1b28(param_1 + 0x54);
    FUN_08002b10(0x38);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0x1c;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


