// undefined FUN_080b10f4(void)
// entry 0x80b10f4


undefined4 FUN_080b10f4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
    *(undefined1 *)(iVar1 + 0xc2) = 0xff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_0807f8ec(param_1);
  return in_lr;
}


