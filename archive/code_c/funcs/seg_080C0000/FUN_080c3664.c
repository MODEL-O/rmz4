// undefined FUN_080c3664(void)
// entry 0x80c3664


undefined4 FUN_080c3664(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080c3724 +
                       (uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080c3720) & 0xffff);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c3728,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(char *)(param_1 + 0x25) = *(char *)((uint)*(byte *)(param_1 + 0x11) + DAT_080c372c) + '\b';
  if (*(char *)(param_1 + 0x11) != '\0') {
    FUN_080c34e0(param_1,*(char *)(param_1 + 0x11) + -1);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c3730);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080c354c(param_1);
  return in_lr;
}


