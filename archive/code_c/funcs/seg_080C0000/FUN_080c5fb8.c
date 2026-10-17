// undefined FUN_080c5fb8(void)
// entry 0x80c5fb8


undefined4 FUN_080c5fb8(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_30 [2];
  uint local_28;
  undefined1 *local_24;
  
  iVar3 = DAT_080c607c;
  iVar2 = DAT_080c6078;
  puVar1 = DAT_080c6074;
  local_24 = (undefined1 *)local_30;
  uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar4 = *DAT_080c6074 * DAT_080c6078 + DAT_080c607c;
  *DAT_080c6074 = uVar4 & 0x7fffffff;
  local_28 = uVar6;
  for (uVar4 = ((uVar4 & 0x7fffffff) >> 0x10 & 1) + 5; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = *puVar1 * iVar2 + iVar3;
    local_30[0] = *(int *)(param_1 + 0x54) + (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100;
    uVar5 = (uVar5 & 0x7fffffff) * iVar2 + iVar3;
    *puVar1 = uVar5 & 0x7fffffff;
    *(uint *)(local_24 + 4) =
         *(int *)(param_1 + 0x58) + ((uVar5 & 0x7fffffff) >> 0x10 & 0xf) * 0x100 + DAT_080c6080;
    FUN_080d4c8c(local_30,(uVar4 & 3) * 0x1c + DAT_080c6084,0,(local_28 & 0xf) << 4 | uVar6);
  }
  return in_lr;
}


