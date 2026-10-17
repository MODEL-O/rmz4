// undefined FUN_080b3924(void)
// entry 0x80b3924


undefined4 FUN_080b3924(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      FUN_080e6b5c(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      FUN_080e6b5c(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  else {
    FUN_080e6b5c(param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (*(ushort *)(DAT_080b39bc + 0xc) <= DAT_080b39c0) {
    *(ushort *)(DAT_080b39bc + 0xc) = *(ushort *)(DAT_080b39bc + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  FUN_0802ab88(0,0x1b,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b39c4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


