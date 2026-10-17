// undefined FUN_080e0a64(void)
// entry 0x80e0a64


undefined4 FUN_080e0a64(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_10 = *(int *)(param_1 + 0x54);
    iVar1 = DAT_080e0a7c;
  }
  else {
    local_10 = *(int *)(param_1 + 0x54);
    iVar1 = 0xa00;
  }
  local_10 = local_10 + iVar1;
  local_c = *(int *)(param_1 + 0x58) + 0x400;
  FUN_080d0c88(1,&local_10);
  FUN_08002b10(0x2a);
  *(undefined1 *)(param_1 + 0x11) = 3;
  FUN_080e08bc(param_1 + 0x54,3,4,*(byte *)(param_1 + 10) >> 4 & 1);
  return in_lr;
}


