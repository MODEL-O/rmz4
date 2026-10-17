// undefined FUN_0809e4ec(void)
// entry 0x809e4ec


undefined4 FUN_0809e4ec(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_30 [2];
  uint local_28;
  undefined1 *local_24;
  
  FUN_08002b10(0x3f);
  iVar3 = DAT_0809e5e4;
  iVar2 = DAT_0809e5e0;
  puVar1 = DAT_0809e5dc;
  uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar4 = *DAT_0809e5dc * DAT_0809e5e0 + DAT_0809e5e4;
  *DAT_0809e5dc = uVar4 & 0x7fffffff;
  local_28 = uVar7;
  local_24 = (undefined1 *)local_30;
  for (uVar4 = ((uVar4 & 0x7fffffff) >> 0x10 & 1) + 5; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = *puVar1 * iVar2 + iVar3;
    local_30[0] = *(int *)(param_1 + 0x54) + (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100;
    uVar5 = (uVar5 & 0x7fffffff) * iVar2 + iVar3;
    *puVar1 = uVar5 & 0x7fffffff;
    *(uint *)(local_24 + 4) =
         *(int *)(param_1 + 0x58) + ((uVar5 & 0x7fffffff) >> 0x10 & 0xf) * 0x100 + DAT_0809e5e8;
    FUN_080d4c8c(local_30,(uVar4 & 3) * 0x1c + DAT_0809e5ec,0,(local_28 & 0xf) << 4 | uVar7);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809e5f0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0x10);
  return in_lr;
}


