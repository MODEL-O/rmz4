// undefined FUN_08042a44(void)
// entry 0x8042a44


undefined4 FUN_08042a44(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x10) < 2) && (*(char *)(*(int *)(param_1 + 0x28) + 0x150) == -1)) {
    pbVar2 = (byte *)(*(int *)(param_1 + 0x28) + DAT_08042aa0);
    *pbVar2 = *pbVar2 | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08042aa4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  else {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08042abc));
  }
  return in_lr;
}


