// undefined FUN_08034b88(void)
// entry 0x8034b88


undefined4 FUN_08034b88(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0803a19c();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  else {
    if (*(short *)(param_1 + 0xfc) == 0x100) {
      FUN_0801cfc8(param_1,0x900,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    else {
      FUN_0801cf00(param_1,0x900);
    }
    *(undefined1 *)(param_1 + DAT_08034bf0) = 1;
    FUN_08034bf4(param_1);
  }
  return in_lr;
}


