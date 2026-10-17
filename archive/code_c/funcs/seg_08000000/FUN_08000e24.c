// undefined FUN_08000e24(void)
// entry 0x8000e24


undefined4 FUN_08000e24(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  puVar1 = DAT_08000e6c;
  *DAT_08000e6c = 0;
  puVar2 = DAT_08000e74;
  uVar4 = *(uint *)(DAT_08000e70 + 0x170);
  if (uVar4 != 0) {
    uVar6 = *(uint *)(DAT_08000e70 + 0x168);
    uVar5 = *(uint *)(DAT_08000e70 + 0x16c);
    *DAT_08000e74 = uVar6;
    puVar2[1] = uVar5;
    *puVar1 = DAT_08000e78 & uVar4;
    puVar1 = DAT_08000ed8;
    if ((uVar4 & 0x4000000) == 0) {
      iVar3 = (DAT_08000e7c & uVar4) << 1;
    }
    else {
      iVar3 = (DAT_08000e7c & uVar4) << 2;
    }
    if ((uVar4 & 0x600000) == 0) {
      uVar5 = uVar5 + iVar3;
    }
    if ((uVar4 & 0x600000) == 0x200000) {
      uVar5 = uVar5 - iVar3;
    }
    if ((uVar4 & 0x1800000) == 0) {
      uVar6 = uVar6 + iVar3;
    }
    if ((uVar4 & 0x1800000) == 0x800000) {
      uVar6 = uVar6 - iVar3;
    }
    if ((int)*DAT_08000ed8 < 0) {
      do {
      } while ((*DAT_08000ed8 & 0x80000000) != 0);
    }
    *DAT_08000ed8 = uVar6;
    puVar1[1] = uVar5;
    puVar1[2] = uVar4;
  }
  return in_lr;
}


