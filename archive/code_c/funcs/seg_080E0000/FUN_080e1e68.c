// undefined FUN_080e1e68(void)
// entry 0x80e1e68


undefined4 FUN_080e1e68(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080e1eac);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 4;
    uVar1 = 0x10;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * 0xc;
    *(undefined4 *)(param_1 + 0x60) = DAT_080e1eb0;
    uVar1 = 0x12;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1edc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080e1d94(param_1);
  return in_lr;
}


