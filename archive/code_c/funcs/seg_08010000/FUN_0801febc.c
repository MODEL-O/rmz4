// undefined FUN_0801febc(void)
// entry 0x801febc


undefined4 FUN_0801febc(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar5 = DAT_0801ff58;
  piVar2 = DAT_0801ff54;
  iVar9 = DAT_0801ff54[0x67];
  puVar8 = (uint *)(DAT_0801ff54 + -1);
  iVar4 = *DAT_0801ff54;
  piVar7 = DAT_0801ff54;
  while (iVar4 != 0) {
    if (iVar9 < *piVar7 * 0x100) {
      iVar9 = *piVar7 * 0x100;
    }
    piVar7 = piVar7 + 3;
    iVar4 = *piVar7;
  }
  if (iVar9 >> 6 == 0) {
    param_2[1] = 0;
    *param_2 = 0;
  }
  else {
    uVar1 = *(ushort *)((int)DAT_0801ff54 + 0x19a);
    *(ushort *)((int)DAT_0801ff54 + 0x19a) = uVar1 + 1;
    iVar5 = iVar9 * *(short *)((uVar1 & 3) * 0x80 + iVar5);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *param_2 = iVar5 >> 0xc;
    iVar3 = DAT_0801ff60;
    iVar4 = DAT_0801ff5c;
    uVar6 = DAT_0801ff5c * *puVar8 + DAT_0801ff60;
    *puVar8 = uVar6 & 0x7fffffff;
    *param_2 = (int)(*param_2 * (((uVar6 & 0x7fffffff) >> 0x10 & 0xff) - 0x7f)) >> 7;
    param_2[1] = iVar5 >> 8;
    uVar6 = iVar4 * *puVar8 + iVar3;
    *puVar8 = uVar6 & 0x7fffffff;
    param_2[1] = (int)((iVar5 >> 8) + -3 + ((uVar6 & 0x7fffffff) >> 0x10 & 7)) >> 1;
  }
  piVar2[0x67] = iVar9 * 0xf >> 4;
  *(undefined2 *)(piVar2 + 0x66) = 0;
  *piVar2 = 0;
  return in_lr;
}


