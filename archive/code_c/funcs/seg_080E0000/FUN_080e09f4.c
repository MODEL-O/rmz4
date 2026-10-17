// undefined FUN_080e09f4(void)
// entry 0x80e09f4


undefined4 FUN_080e09f4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_18 = *(int *)(param_1 + 0x54);
    iVar1 = DAT_080e0a0c;
  }
  else {
    local_18 = *(int *)(param_1 + 0x54);
    iVar1 = 0xa00;
  }
  local_18 = local_18 + iVar1;
  local_14 = *(int *)(param_1 + 0x58) + 0x400;
  FUN_080d0c88(1,&local_18);
  FUN_08002b10(0x2a);
  *(undefined1 *)(param_1 + 0x11) = 2;
  FUN_080e08bc(param_1 + 0x54,3,3,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_080e08bc(param_1 + 0x54,3,4,*(byte *)(param_1 + 10) >> 4 & 1);
  return in_lr;
}


