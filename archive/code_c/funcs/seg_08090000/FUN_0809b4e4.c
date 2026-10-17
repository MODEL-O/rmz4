// undefined FUN_0809b4e4(void)
// entry 0x809b4e4


undefined4 FUN_0809b4e4(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined4 in_lr;
  short local_48 [6];
  int local_3c [2];
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  int *local_24;
  
  psVar4 = local_48;
  FUN_08129258(local_48,DAT_0809b5d8,0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  FUN_08002b10(0x3f);
  if (*(char *)(param_1 + 0xb6) != '\0') {
    FUN_08066408(uVar3,param_1);
  }
  FUN_080664bc(param_1 + 0x54,1,0);
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  psVar6 = local_48 + 1;
  local_30 = (undefined4 *)(param_1 + 0x8c);
  local_2c = (undefined4 *)(param_1 + 0x90);
  local_28 = (undefined1 *)(param_1 + 0x94);
  local_34 = uVar2 * 2 + -1;
  local_24 = local_3c;
  iVar7 = 0;
  iVar5 = 2;
  do {
    local_3c[0] = *(int *)(param_1 + 0x54) + local_34 * *psVar4;
    local_24[1] = *(int *)(param_1 + 0x58) + (int)*psVar6;
    FUN_080d4c8c(local_24,DAT_0809b5dc + iVar7,0,uVar2 | uVar2 << 4);
    iVar7 = iVar7 + 0x1c;
    psVar6 = psVar6 + 2;
    psVar4 = psVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *local_30 = 0;
  *local_2c = 0;
  *local_28 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809b5e0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


