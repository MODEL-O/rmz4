// undefined FUN_080f7bf8(void)
// entry 0x80f7bf8


undefined4 FUN_080f7bf8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\x03') {
    FUN_0801cf00(param_1,DAT_080f7c1c);
  }
  else {
    FUN_0801cf00(param_1,DAT_080f7c70);
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(uint *)(param_1 + 0x5c) = (uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080f7c74) << 8;
  *(undefined4 *)(param_1 + 0x60) = DAT_080f7c78;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f7c7c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080f762c(param_1);
  return in_lr;
}


