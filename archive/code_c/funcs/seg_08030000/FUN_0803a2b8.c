// undefined FUN_0803a2b8(void)
// entry 0x803a2b8


undefined8 FUN_0803a2b8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x06') || (*(char *)(param_1 + 0xc1) == '\x06')) {
    iVar1 = FUN_08128f84(param_1,0,
                         *(undefined4 *)((uint)*(byte *)(param_1 + 0xc3) * 4 + DAT_0803a2e4));
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    *(byte *)(param_1 + DAT_0803a304) = *(byte *)(param_1 + DAT_0803a304) | 0x40;
  }
  return CONCAT44(in_lr,iVar1);
}


