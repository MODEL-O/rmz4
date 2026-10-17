// undefined FUN_0803c86c(void)
// entry 0x803c86c


undefined4 FUN_0803c86c(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    if (*(ushort *)(DAT_0803c88c + 0x1e) <= DAT_0803c890) {
      *(ushort *)(DAT_0803c88c + 0x1e) = *(ushort *)(DAT_0803c88c + 0x1e) + 1;
    }
  }
  return in_lr;
}


