// undefined FUN_08011d5c(void)
// entry 0x8011d5c


undefined4 FUN_08011d5c(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_08011d94 + DAT_08011d98) & 0xf) == 3) {
    *(undefined2 *)(param_1 + 0x78) = 0;
    FUN_08002b5c(0x7a);
    *DAT_08011d9c = 0;
    *DAT_08011da0 = (ushort)DAT_08011da4 & *DAT_08011da0;
  }
  return in_lr;
}


