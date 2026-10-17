// undefined FUN_0801a648(void)
// entry 0x801a648


undefined4 FUN_0801a648(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  FUN_08002624(0xc1);
  uVar1 = *(ushort *)(DAT_0801a674 + DAT_0801a678);
  if ((uVar1 & 0x400) != 0) {
    *(ushort *)(DAT_0801a674 + DAT_0801a678) = uVar1 ^ 0x400;
  }
  FUN_08002624(0xc2);
  return in_lr;
}


