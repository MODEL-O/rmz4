// undefined FUN_080f79d4(void)
// entry 0x80f79d4


undefined4 FUN_080f79d4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080e954c(*(undefined4 *)(param_1 + 0xb4));
  FUN_080e954c(*(undefined4 *)(param_1 + 0xb8));
  FUN_080e954c(*(undefined4 *)(param_1 + 0x5c));
  FUN_080e954c(*(undefined4 *)(param_1 + 0x60));
  FUN_080e954c(*(undefined4 *)(param_1 + 100));
  FUN_080e954c(*(undefined4 *)(param_1 + 0x68));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f7a44);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


