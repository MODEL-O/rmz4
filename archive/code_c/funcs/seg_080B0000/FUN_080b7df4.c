// undefined FUN_080b7df4(void)
// entry 0x80b7df4


undefined4 FUN_080b7df4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b7e40));
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x1c);
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b7e28);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080b7e44(param_1);
  }
  return in_lr;
}


