// undefined FUN_0806460c(void)
// entry 0x806460c


undefined4 FUN_0806460c(int param_1)

{
  undefined4 in_lr;
  
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
      *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xd0) + 0x7800) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08064658));
  return in_lr;
}


