// undefined FUN_080d9024(void)
// entry 0x80d9024


undefined4 FUN_080d9024(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x12) = 0x14;
  *(undefined1 *)(param_1 + 0x13) = 0;
  uVar1 = FUN_08128fb8(*(int *)(param_1 + 0x5c) * -2,3);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  if (*(byte *)(param_1 + 0x7c) == 1) {
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
  }
  FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x7c) * 0x20000 + DAT_080d9074 >> 0x10);
  return in_lr;
}


