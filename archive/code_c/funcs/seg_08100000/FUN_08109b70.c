// undefined FUN_08109b70(void)
// entry 0x8109b70


undefined4 FUN_08109b70(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xb8);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x22) = 0xf;
  FUN_0801cf00(param_1,0x7f00);
  *(byte *)(param_1 + 0x4c) = *(byte *)(iVar5 + 10) >> 4 & 1;
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (bVar1 & 1) << 4;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  FUN_0801cff0(param_1);
  if (*(char *)(iVar5 + 0xf5) == '\x01') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = DAT_08109c08;
  }
  else if (*(char *)(iVar5 + 0xf5) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = DAT_08109c20;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = DAT_08109c8c;
  }
  FUN_08005760(param_1 + 0x74,uVar4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar4 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  uVar3 = FUN_0803ad84(param_1,0);
  iVar2 = DAT_08109c90;
  uVar3 = uVar3 & 0xff;
  if ((uVar3 != 0) && (uVar3 != 0x80)) {
    *(int *)(param_1 + 0x5c) = *(short *)((uVar3 + 0x40 & 0xff) * 2 + DAT_08109c90) * 6;
    iVar2 = *(short *)(uVar3 * 2 + iVar2) * 6;
    goto LAB_08109d46;
  }
  if (*(char *)(iVar5 + 0xd) == '\x02') {
    if (CONCAT11(*(undefined1 *)(iVar5 + 0x1e),*(undefined1 *)(iVar5 + 0x70)) == 0x500) {
      if (*(char *)(iVar5 + 0x71) < '\x03') goto LAB_08109d30;
      *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1 == 0) goto LAB_08109d28;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(byte *)(param_1 + 0x4c) = (*(byte *)(iVar5 + 10) >> 4 ^ 1) & 1;
      bVar1 = (*(byte *)(iVar5 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1 == 0) {
LAB_08109d28:
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
LAB_08109d30:
  uVar4 = DAT_08109d54;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar4 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  iVar2 = 0;
LAB_08109d46:
  *(int *)(param_1 + 0x60) = iVar2;
  return in_lr;
}


