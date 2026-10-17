// undefined FUN_080880ec(void)
// entry 0x80880ec


undefined4 FUN_080880ec(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb4) = 3;
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
      *(int *)(param_1 + 0x54) < *(int *)(*DAT_08088120 + 0x54)) {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 5;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08088140));
  return in_lr;
}


