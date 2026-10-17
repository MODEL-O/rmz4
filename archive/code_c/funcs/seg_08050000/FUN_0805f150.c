// undefined FUN_0805f150(void)
// entry 0x805f150


undefined8 FUN_0805f150(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  byte abStack_24 [8];
  undefined4 local_1c [3];
  
  FUN_08129258(abStack_24,DAT_0805f18c,5);
  local_1c[0] = *DAT_0805f190;
  local_1c[1] = DAT_0805f190[1];
  local_1c[2] = DAT_0805f190[2];
  iVar1 = FUN_08128fb8((int)*(short *)(param_1 + 0xa4) << 2,local_1c[*(byte *)(param_1 + 0x10)]);
  return CONCAT44(in_lr,(uint)abStack_24[iVar1]);
}


