// undefined FUN_0801187c(void)
// entry 0x801187c


undefined4 FUN_0801187c(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = *(short *)(param_1 + 0x68) + -1;
  *(short *)(param_1 + 0x68) = sVar1;
  if (sVar1 == 0) {
    *(char *)(DAT_0801189c + DAT_080118a0) = *(char *)(DAT_0801189c + DAT_080118a0) + '\x01';
  }
  return in_lr;
}


