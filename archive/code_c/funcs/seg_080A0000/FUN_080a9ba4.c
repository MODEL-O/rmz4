// undefined FUN_080a9ba4(void)
// entry 0x80a9ba4


undefined4 FUN_080a9ba4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(int *)(*DAT_080a9bd8 + 0x54) < *(int *)(param_1 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    uVar1 = DAT_080a9bdc;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  return in_lr;
}


