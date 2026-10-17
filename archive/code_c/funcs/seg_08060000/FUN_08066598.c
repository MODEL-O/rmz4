// undefined FUN_08066598(void)
// entry 0x8066598


undefined4 FUN_08066598(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  puVar1 = DAT_080666c8;
  uVar2 = DAT_080666cc * *DAT_080666c8 + DAT_080666d0;
  *DAT_080666c8 = uVar2 & 0x7fffffff;
  iVar5 = 5 - ((uVar2 & 0x7fffffff) >> 0x10 & 1);
  if (0 < iVar5) {
    do {
      iVar7 = *(int *)(param_1 + 0x54);
      uVar2 = DAT_080666cc * *puVar1 + DAT_080666d0;
      uVar8 = uVar2 & 0x7fffffff;
      *puVar1 = uVar8;
      iVar3 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,0x3000);
      iVar6 = *(int *)(param_1 + 0x58);
      uVar2 = DAT_080666cc * uVar8 + DAT_080666d0;
      *puVar1 = uVar2 & 0x7fffffff;
      iVar4 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,0x3000);
      FUN_080d0ff4(iVar7 + -0x1800 + iVar3,iVar6 + -0x1800 + iVar4,0);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar1 = DAT_080666c8;
  uVar2 = DAT_080666cc * *DAT_080666c8 + DAT_080666d0;
  *DAT_080666c8 = uVar2 & 0x7fffffff;
  iVar5 = 4 - ((uVar2 & 0x7fffffff) >> 0x10 & 1);
  if (0 < iVar5) {
    do {
      iVar7 = *(int *)(param_1 + 0x54);
      uVar2 = DAT_080666cc * *puVar1 + DAT_080666d0;
      uVar8 = uVar2 & 0x7fffffff;
      *puVar1 = uVar8;
      iVar3 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,0x3000);
      iVar6 = *(int *)(param_1 + 0x58);
      uVar2 = DAT_080666cc * uVar8 + DAT_080666d0;
      *puVar1 = uVar2 & 0x7fffffff;
      iVar4 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,0x3000);
      FUN_080d0ff4(iVar7 + -0x1800 + iVar3,iVar6 + -0x1800 + iVar4,1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return in_lr;
}


