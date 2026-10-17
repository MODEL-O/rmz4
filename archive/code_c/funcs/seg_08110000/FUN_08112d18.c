// undefined FUN_08112d18(void)
// entry 0x8112d18


undefined4 FUN_08112d18(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  iVar2 = param_1 + DAT_08112d54;
  puVar3 = (uint *)(DAT_08112d58 + 0x168);
  uVar1 = *puVar3;
  *(uint *)(iVar2 + 4) = uVar1;
  if (uVar1 != 0xffffffff) {
    FUN_08002a98(uVar1 & 0xffff);
    *puVar3 = 0xffffffff;
  }
  *(undefined1 *)(iVar2 + 1) = 1;
  *(undefined4 *)(iVar2 + 8) = DAT_08112d5c;
  FUN_081126ac(param_1,5);
  return in_lr;
}


