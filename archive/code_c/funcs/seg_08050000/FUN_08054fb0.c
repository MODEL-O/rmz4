// undefined FUN_08054fb0(void)
// entry 0x8054fb0


undefined8 FUN_08054fb0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0xb7);
  *pbVar2 = *pbVar2 + 1;
  iVar1 = *(int *)(param_1 + 0xb8) + *(short *)((uint)*pbVar2 * 2 + DAT_08054fe4) * 0x10;
  *(int *)(param_1 + 0x58) = iVar1;
  return CONCAT44(in_lr,(uint)(iVar1 == *(int *)(param_1 + 0xb8)));
}


