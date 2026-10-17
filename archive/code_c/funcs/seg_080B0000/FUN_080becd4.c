// undefined FUN_080becd4(void)
// entry 0x80becd4


undefined4 FUN_080becd4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) && (*(ushort *)(iVar1 + 8) == DAT_080becf8)) {
    FUN_080c1a14(iVar1);
  }
  return in_lr;
}


