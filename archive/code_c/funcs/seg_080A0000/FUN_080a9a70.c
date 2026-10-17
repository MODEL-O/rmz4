// undefined FUN_080a9a70(void)
// entry 0x80a9a70


undefined8 FUN_080a9a70(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  return CONCAT44(in_lr,(uint)(sVar1 != 0));
}


