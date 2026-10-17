// undefined FUN_0800f8f0(void)
// entry 0x800f8f0


undefined4 FUN_0800f8f0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_0800f930 = *DAT_0800f930 & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    *DAT_0800f934 = 0x1e000;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if ((*(ushort *)(DAT_0800f938 + 0x14) & 1) != 0) {
    *(undefined4 *)(DAT_0800f938 + 0x144) = 0xf000;
  }
  return in_lr;
}


