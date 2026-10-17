// undefined FUN_0802b6d8(void)
// entry 0x802b6d8


undefined8 FUN_0802b6d8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (uint)*(byte *)(param_1 + 0x13e) - (param_2 & 0xff);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(byte *)(param_1 + 0x13e) = (byte)iVar1;
  return CONCAT44(in_lr,(uint)*(byte *)(param_1 + 0x13e));
}


