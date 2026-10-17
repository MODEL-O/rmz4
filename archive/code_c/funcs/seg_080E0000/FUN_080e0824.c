// undefined FUN_080e0824(void)
// entry 0x80e0824


undefined4 FUN_080e0824(int param_1)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  undefined4 in_lr;
  short local_38 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  psVar2 = local_38;
  local_24 = param_1;
  FUN_08129258(local_38,DAT_080e08b4,8);
  uVar1 = *(byte *)(local_24 + 10) >> 4 & 1;
  psVar4 = local_38 + 1;
  local_28 = uVar1 * 2 + -1;
  iVar5 = 0;
  iVar3 = 1;
  do {
    local_30 = *(int *)(local_24 + 0x54) + local_28 * *psVar2;
    local_2c = *(int *)(local_24 + 0x58) + (int)*psVar4;
    FUN_080d4c8c(&local_30,DAT_080e08b8 + iVar5,0,uVar1 | uVar1 << 4);
    iVar5 = iVar5 + 0x1c;
    psVar4 = psVar4 + 2;
    psVar2 = psVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}


