// undefined FUN_0800cea0(void)
// entry 0x800cea0


undefined4 FUN_0800cea0(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  iVar3 = FUN_08000a70(0x280);
  iVar4 = DAT_0800cf04;
  if (iVar3 != 0) {
    *(int *)(DAT_0800cf04 + 0x174) = iVar3;
    *(undefined4 *)(iVar4 + 0x178) = DAT_0800cf08;
    *(undefined4 *)(iVar4 + 0x17c) = DAT_0800cf0c;
    uVar2 = DAT_0800cf10;
    iVar4 = *(int *)(param_1 + 0x34);
    sVar1 = *(short *)(param_1 + 0x38);
    do {
      *(uint *)(uVar5 * 4 + iVar3) =
           (((iVar4 << 0xf) >> 0x10) + ((int)(uVar5 + (int)sVar1) >> 2)) * 0x10000 >> 0x10 & uVar2 |
           (int)sVar1 << 0x10;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 0xa0);
  }
  return in_lr;
}


