// undefined FUN_080d6f94(void)
// entry 0x80d6f94


undefined4 FUN_080d6f94(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080d6fc4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
    uVar1 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x40;
    uVar1 = 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0x40;
  *(undefined4 *)(param_1 + 0x68) = 0xfffffffe;
  *(undefined1 *)(param_1 + 0x12) = 0x20;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d6ffc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080d6ef4(param_1);
  return in_lr;
}


