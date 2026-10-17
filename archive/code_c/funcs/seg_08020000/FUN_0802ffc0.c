// undefined FUN_0802ffc0(void)
// entry 0x802ffc0


undefined4 FUN_0802ffc0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (int)*(short *)(param_1 + 0x10e);
  if (iVar1 != -1) {
    FUN_08002b5c(iVar1);
    *(short *)(param_1 + 0x10e) = (short)DAT_0802ffec;
  }
  FUN_0802b524(param_1);
  return in_lr;
}


