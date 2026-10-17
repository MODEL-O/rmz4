// undefined FUN_0809b5e4(void)
// entry 0x809b5e4


undefined4 FUN_0809b5e4(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 in_lr;
  int local_3c [2];
  uint local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  FUN_08002b10(0x3f);
  if (*(char *)(param_1 + 0xb6) != '\0') {
    FUN_08066408(uVar7,param_1);
  }
  iVar3 = DAT_0809b700;
  iVar2 = DAT_0809b6fc;
  puVar1 = DAT_0809b6f8;
  uVar8 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar4 = *DAT_0809b6f8 * DAT_0809b6fc + DAT_0809b700;
  *DAT_0809b6f8 = uVar4 & 0x7fffffff;
  local_2c = (undefined4 *)(param_1 + 0x8c);
  local_28 = (undefined4 *)(param_1 + 0x90);
  local_24 = (undefined1 *)(param_1 + 0x94);
  local_34 = uVar8;
  local_30 = (undefined1 *)local_3c;
  for (uVar4 = ((uVar4 & 0x7fffffff) >> 0x10 & 1) + 5; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = *puVar1 * iVar2 + iVar3;
    local_3c[0] = *(int *)(param_1 + 0x54) + (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100;
    uVar5 = (uVar5 & 0x7fffffff) * iVar2 + iVar3;
    *puVar1 = uVar5 & 0x7fffffff;
    *(uint *)(local_30 + 4) =
         *(int *)(param_1 + 0x58) + ((uVar5 & 0x7fffffff) >> 0x10 & 0xf) * 0x100 + DAT_0809b704;
    FUN_080d4c8c(local_3c,(uVar4 & 3) * 0x1c + DAT_0809b708,0,(local_34 & 0xf) << 4 | uVar8);
  }
  *local_2c = 0;
  *local_28 = 0;
  *local_24 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809b70c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0x10);
  return in_lr;
}


