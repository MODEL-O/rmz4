// undefined FUN_080495e8(void)
// entry 0x80495e8


undefined4 FUN_080495e8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_0801cf00(param_1,DAT_08049604);
    }
    else {
      FUN_0801cf00(param_1,DAT_08049660);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08049664);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  }
  return in_lr;
}


