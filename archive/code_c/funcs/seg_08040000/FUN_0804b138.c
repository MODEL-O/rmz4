// undefined FUN_0804b138(void)
// entry 0x804b138


undefined4 FUN_0804b138(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    if (*(ushort *)(DAT_0804b158 + 0x1e) <= DAT_0804b15c) {
      *(ushort *)(DAT_0804b158 + 0x1e) = *(ushort *)(DAT_0804b158 + 0x1e) + 1;
    }
  }
  return in_lr;
}


