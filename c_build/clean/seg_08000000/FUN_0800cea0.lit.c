// undefined FUN_0800cea0(void)
// entry 0x800cea0


void FUN_0800cea0(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uVar5 = 0;
  iVar3 = FUN_08000a70(0x280);
  iVar4 = 0x03001590;
  if (iVar3 != 0) {
    *(int *)(0x03001590 + 0x174) = iVar3;
    *(undefined4 *)(iVar4 + 0x178) = 0x04000018;
    *(undefined4 *)(iVar4 + 0x17c) = 0xa6600001;
    uVar2 = 0x0000ffff;
    iVar4 = *(int *)(param_1 + 0x34);
    sVar1 = *(short *)(param_1 + 0x38);
    do {
      *(uint *)(uVar5 * 4 + iVar3) =
           (((iVar4 << 0xf) >> 0x10) + ((int)(uVar5 + (int)sVar1) >> 2)) * 0x10000 >> 0x10 & uVar2 |
           (int)sVar1 << 0x10;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 0xa0);
  }
  return;
}


