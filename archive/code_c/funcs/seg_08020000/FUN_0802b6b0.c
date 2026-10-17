// undefined FUN_0802b6b0(void)
// entry 0x802b6b0


undefined8 FUN_0802b6b0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x13e) + (param_2 & 0xff);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(byte *)(param_1 + 0x13e) = (byte)uVar1;
  return CONCAT44(in_lr,(uint)*(byte *)(param_1 + 0x13e));
}


