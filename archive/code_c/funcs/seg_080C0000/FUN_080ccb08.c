// undefined FUN_080ccb08(void)
// entry 0x80ccb08


undefined4 FUN_080ccb08(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801ce54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ccb54);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cf00(param_1,DAT_080ccb58);
  *(undefined2 *)(param_1 + 0x50) = 0x40;
  *(undefined2 *)(param_1 + 0x52) = 0x40;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


