// undefined FUN_080f9df0(void)
// entry 0x80f9df0


undefined4 FUN_080f9df0(int param_1)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_24 = 0;
  iVar3 = 2;
  psVar2 = DAT_080f9e68;
  do {
    local_2c = *(int *)(param_1 + 0x54) + (int)*psVar2 * (uVar1 * 2 + -1);
    local_28 = *(int *)(param_1 + 0x58) + (int)psVar2[1];
    FUN_080d4c8c(&local_2c,local_24 + DAT_080f9e6c,0,uVar1 | uVar1 << 4);
    local_24 = local_24 + 0x1c;
    psVar2 = psVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}


