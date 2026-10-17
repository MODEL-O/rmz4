// undefined FUN_08000edc(void)
// entry 0x8000edc


undefined4 FUN_08000edc(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 4;
  *DAT_08000f1c = (ushort)DAT_08000f20 & *DAT_08000f1c;
  iVar1 = DAT_08000f24;
  *(undefined4 *)(DAT_08000f24 + 4) = DAT_08000f28;
  *DAT_08000f2c = (ushort)DAT_08000f30 & *DAT_08000f2c;
  if (*(uint *)(iVar1 + 0x188) != 0) {
    *(undefined4 *)(iVar1 + 0x18c) = *(undefined4 *)(iVar1 + 0x180);
    *(ushort *)(iVar1 + 0x19c) = (ushort)((*(uint *)(iVar1 + 0x188) & 0x1000000) == 0);
    *(undefined2 *)(iVar1 + 0x19e) = 1;
    *(short *)(iVar1 + 0x1a0) = (short)*(uint *)(iVar1 + 0x188);
    if ((*(uint *)(iVar1 + 0x188) & 0xffff) != 1) {
      uVar3 = 0;
    }
    uVar3 = uVar3 * 0x10000 + 0x10000 >> 0x10;
  }
  sVar2 = (short)uVar3;
  if (*(uint *)(iVar1 + 0x1ac) != 0) {
    *(undefined4 *)(iVar1 + 0x1b0) = *(undefined4 *)(iVar1 + 0x1a4);
    *(ushort *)(iVar1 + 0x1c0) = (ushort)((*(uint *)(iVar1 + 0x1ac) & 0x1000000) == 0);
    *(undefined2 *)(iVar1 + 0x1c2) = 1;
    *(short *)(iVar1 + 0x1c4) = (short)*(uint *)(iVar1 + 0x1ac);
    if ((*(uint *)(iVar1 + 0x1ac) & 0xffff) != 1) {
      uVar3 = uVar3 & 3;
    }
    sVar2 = (short)(uVar3 * 0x10000 + 0x20000 >> 0x10);
  }
  if (((int)sVar2 & 3U) != 0) {
    *DAT_08000fc8 = *DAT_08000fc8 | 0x10;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(sVar2 * 4 + DAT_08000fcc);
    *DAT_08000fd0 = *DAT_08000fd0 | 2;
  }
  return in_lr;
}


