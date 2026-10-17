// undefined FUN_080af384(void)
// entry 0x80af384


undefined4 FUN_080af384(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x11) == '\0') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080af3b8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080af40c(param_1);
  }
  else {
    FUN_080af7c0(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      if (*(char *)(param_1 + 0xb6) == '\x01') {
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080af3e8));
      }
      else {
        FUN_080af864(param_1);
      }
      FUN_0801cff0(param_1);
    }
    else {
      FUN_080af814(param_1);
      FUN_0801d1f4(param_1);
    }
  }
  return in_lr;
}


