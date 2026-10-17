// undefined FUN_08088ff0(void)
// entry 0x8088ff0


undefined4 FUN_08088ff0(int *param_1,int *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  puVar1 = DAT_080890bc;
  if (*(int *)(DAT_080890b4 + DAT_080890b8) < param_1[1]) {
    uVar2 = DAT_080890c0 * *DAT_080890bc + DAT_080890c4;
    *DAT_080890bc = uVar2 & 0x7fffffff;
    iVar3 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,(param_4 & 0xff) - (param_3 & 0xff));
    for (iVar3 = iVar3 + (param_3 & 0xff); 0 < iVar3; iVar3 = iVar3 + -1) {
      iVar7 = *param_1;
      iVar6 = *param_2;
      if (iVar6 != 0) {
        uVar2 = DAT_080890c0 * *puVar1 + DAT_080890c4;
        *puVar1 = uVar2 & 0x7fffffff;
        iVar4 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,iVar6 << 1);
        iVar7 = iVar7 + (iVar4 - iVar6);
      }
      iVar4 = param_1[1];
      iVar6 = param_2[1];
      if (iVar6 != 0) {
        uVar2 = DAT_080890c0 * *puVar1 + DAT_080890c4;
        *puVar1 = uVar2 & 0x7fffffff;
        iVar5 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,iVar6 << 1);
        iVar4 = iVar4 + (iVar5 - iVar6);
      }
      FUN_080d0ff4(iVar7,iVar4,0);
    }
  }
  return in_lr;
}


