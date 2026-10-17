// undefined FUN_0810ada0(void)
// entry 0x810ada0


undefined4 FUN_0810ada0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + DAT_0810adcc + 5) == '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0810ade8));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810add0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0810adec(param_1);
  }
  return in_lr;
}


