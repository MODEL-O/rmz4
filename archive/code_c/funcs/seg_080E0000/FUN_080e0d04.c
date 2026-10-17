// undefined FUN_080e0d04(void)
// entry 0x80e0d04


undefined4 FUN_080e0d04(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(byte *)(param_1 + 0x11) < 2) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_18 = *(int *)(param_1 + 0x54);
      iVar2 = DAT_080e0d7c;
    }
    else {
      local_18 = *(int *)(param_1 + 0x54);
      iVar2 = 0xa00;
    }
    local_18 = local_18 + iVar2;
    local_14 = *(int *)(param_1 + 0x58) + 0x400;
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_080d0c88(2,&local_18);
      FUN_08002b10(0x2a);
      FUN_080e08bc(param_1 + 0x54,3,2,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      FUN_080d0c88(1,&local_18);
      FUN_08002b10(0x2a);
      FUN_080e08bc(param_1 + 0x54,3,3,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e08bc(param_1 + 0x54,3,4,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  else {
    FUN_080d0c88(3,param_1 + 0x54);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0dbc);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


