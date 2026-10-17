// undefined FUN_0809df34(void)
// entry 0x809df34


undefined4 FUN_0809df34(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if (sVar1 == 0) {
    *(undefined1 *)(param_1 + 0xbe) = 0;
  }
  else {
    uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined1 *)(param_1 + 0xbe) = 1;
  }
  return in_lr;
}


