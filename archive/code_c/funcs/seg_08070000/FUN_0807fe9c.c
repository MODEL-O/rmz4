// undefined FUN_0807fe9c(void)
// entry 0x807fe9c


undefined4 FUN_0807fe9c(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if ((0 < *(int *)(param_1 + 0x60)) &&
     (sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40),
     sVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


