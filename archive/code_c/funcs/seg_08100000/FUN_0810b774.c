// undefined FUN_0810b774(void)
// entry 0x810b774


undefined4 FUN_0810b774(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (**(char **)(param_1 + 0x2c) == '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0810b7b4));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810b79c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0810b7b8(param_1);
  }
  return in_lr;
}


