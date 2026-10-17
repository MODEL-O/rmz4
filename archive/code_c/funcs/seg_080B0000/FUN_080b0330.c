// undefined FUN_080b0330(void)
// entry 0x80b0330


undefined4 FUN_080b0330(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((uVar1 & 0x8000) == 0) {
    FUN_08002b10(0x35);
  }
  else {
    FUN_08002b10(0x31);
  }
  return in_lr;
}


