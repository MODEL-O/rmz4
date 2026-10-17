// undefined FUN_080b042c(void)
// entry 0x80b042c


undefined4 FUN_080b042c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\x04') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b0460);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080b04d0(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b047c));
LAB_080b04c2:
    FUN_0801cff0(param_1);
  }
  else {
    FUN_080b0bd4(param_1);
    if ((*(int *)(param_1 + 0xc0) == 0) || (*(char *)(param_1 + 0xd) == '\x04')) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b04b0));
      if (*(char *)(param_1 + 0xd) != '\x04') goto LAB_080b04c2;
    }
    else {
      FUN_080b0c7c(param_1);
    }
    FUN_0801d1f4(param_1);
  }
  return in_lr;
}


