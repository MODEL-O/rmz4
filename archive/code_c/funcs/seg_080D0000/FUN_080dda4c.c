// undefined FUN_080dda4c(void)
// entry 0x80dda4c


undefined4 FUN_080dda4c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080ddaa0);
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080ddafc;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0xd00;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1600;
  *(undefined4 *)(param_1 + 100) = 900;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ddb00);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080dd6c8(param_1);
  return in_lr;
}


