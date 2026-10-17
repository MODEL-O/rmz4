// undefined FUN_080aaa44(void)
// entry 0x80aaa44


undefined4 FUN_080aaa44(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_c;
  int local_8;
  undefined4 uStack_4;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_c = *(int *)(param_1 + 0x54);
    iVar1 = 0x1300;
  }
  else {
    local_c = *(int *)(param_1 + 0x54);
    iVar1 = DAT_080aaa84;
  }
  local_c = local_c + iVar1;
  local_8 = *(int *)(param_1 + 0x58) + DAT_080aaa88;
  uStack_4 = in_lr;
  FUN_080e2914(&local_c,DAT_080aaa8c,*(byte *)(param_1 + 10) >> 4 & 1);
  return uStack_4;
}


