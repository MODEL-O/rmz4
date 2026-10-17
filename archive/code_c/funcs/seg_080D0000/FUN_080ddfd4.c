// undefined FUN_080ddfd4(void)
// entry 0x80ddfd4


undefined4 FUN_080ddfd4(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar4 = DAT_080de0ac;
  iVar3 = DAT_080de0a8;
  puVar2 = DAT_080de0a4;
  iVar1 = DAT_080de0a0;
  local_24 = *(undefined4 *)(param_1 + 0x54);
  local_20 = *(undefined4 *)(param_1 + 0x58);
  uVar6 = *DAT_080de0a4 * DAT_080de0a8 + DAT_080de0ac;
  *DAT_080de0a4 = uVar6 & 0x7fffffff;
  FUN_080d4c8c(&local_24,iVar1,0,((uVar6 & 0x7fffffff) >> 0x10 & 1) << 4);
  uVar6 = *puVar2 * iVar3 + iVar4;
  *puVar2 = uVar6 & 0x7fffffff;
  FUN_080d4c8c(&local_24,iVar1,0,((uVar6 & 0x7fffffff) >> 0x10 & 1) << 4 | 1);
  uVar7 = *puVar2 * iVar3 + iVar4;
  uVar6 = (uVar7 & 0x7fffffff) * iVar3 + iVar4;
  *puVar2 = uVar6 & 0x7fffffff;
  FUN_080d4c8c(&local_24,iVar1 + 0x1c,0,
               ((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uVar6 & 0x7fffffff) >> 0x10 & 1);
  FUN_080d0c88(1,&local_24);
  FUN_08002b10(0x2a);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080de0b0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
  return in_lr;
}


