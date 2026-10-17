// undefined FUN_08066160(void)
// entry 0x8066160


undefined8 FUN_08066160(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  byte abStack_810 [2048];
  byte abStack_10 [8];
  
  FUN_08129258(abStack_10,DAT_0806618c,5);
  iVar1 = (int)*(short *)(param_1 + 0xa4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  return CONCAT44(in_lr,(uint)abStack_10[iVar1 >> 4]);
}


