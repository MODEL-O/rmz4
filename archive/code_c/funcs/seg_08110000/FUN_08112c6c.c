// undefined FUN_08112c6c(void)
// entry 0x8112c6c


undefined4 FUN_08112c6c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  puVar4 = (undefined2 *)(param_1 + DAT_08112cf0);
  *puVar4 = 0x11;
  uVar1 = DAT_08112cfc;
  puVar3 = (undefined4 *)(DAT_08112cf4 + DAT_08112cf8);
  *(undefined4 *)(DAT_08112cf4 + DAT_08112cf8 + 4) = DAT_08112cfc;
  *puVar3 = uVar1;
  FUN_0801e8d8(param_1 + DAT_08112d00);
  FUN_0801e944(param_1 + 0x6300);
  FUN_08108e04(param_1 + DAT_08112d04);
  FUN_08108f48(param_1 + DAT_08112d08);
  FUN_08038034(param_1 + DAT_08112d0c);
  FUN_0801f134(*(undefined1 *)puVar4,1);
  iVar5 = param_1 + DAT_08112d10;
  puVar6 = (uint *)(DAT_08112d14 + 0x168);
  uVar2 = *puVar6;
  *(uint *)(iVar5 + 4) = uVar2;
  if (uVar2 != 0xffffffff) {
    FUN_08002a98(uVar2 & 0xffff);
    *puVar6 = 0xffffffff;
  }
  *(undefined1 *)(iVar5 + 1) = 1;
  *(undefined4 *)(iVar5 + 8) = 0xffffffff;
  FUN_081126ac(param_1,5);
  return in_lr;
}


