// undefined FUN_080dedd4(void)
// entry 0x80dedd4


undefined4 FUN_080dedd4(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  piVar6 = DAT_080deea4;
  iVar8 = *DAT_080deea4;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar2 = DAT_080deeb0;
  iVar7 = DAT_080deeac;
  puVar1 = DAT_080deea8;
  uVar3 = *DAT_080deea8 * DAT_080deeac + DAT_080deeb0;
  *DAT_080deea8 = uVar3 & 0x7fffffff;
  iVar4 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,6);
  FUN_0801cf00(param_1,iVar4 + DAT_080deeb4 & 0xffff);
  uVar3 = *puVar1 * iVar7 + iVar2;
  iVar4 = (8 - ((uVar3 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
  *(int *)(param_1 + 100) = iVar4;
  uVar3 = (uVar3 & 0x7fffffff) * iVar7 + iVar2;
  *puVar1 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x68) = (8 - ((uVar3 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
  iVar7 = *piVar6;
  *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + iVar4;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar7 + 0x58);
  uVar5 = FUN_08008534();
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_0802b6b0(iVar8,8);
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080deeb8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080dece0(param_1);
  return in_lr;
}


