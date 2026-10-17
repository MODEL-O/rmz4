// undefined FUN_080e2cf0(void)
// entry 0x80e2cf0


undefined4 FUN_080e2cf0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  iVar1 = *(int *)(param_1 + 0x78) + -0x10;
  *(int *)(param_1 + 0x78) = iVar1;
  if (iVar1 < 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_080e2914(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e2914(param_1 + 0x54,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      FUN_080e2914(param_1 + 0x54,DAT_080e2d84,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e2d88;
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x166);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e2d8c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


