// undefined FUN_0805c240(void)
// entry 0x805c240


undefined8 FUN_0805c240(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  byte abStack_40c [1024];
  byte abStack_c [4];
  
  FUN_08129258(abStack_c,DAT_0805c26c,3);
  iVar1 = (int)*(short *)(param_1 + 0xa4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x1f;
  }
  return CONCAT44(in_lr,(uint)abStack_c[iVar1 >> 5]);
}


