// undefined FUN_08123bbc(void)
// entry 0x8123bbc


longlong FUN_08123bbc(int param_1)

{
  uint uVar1;
  uint in_lr;
  
  if ((*(short *)(param_1 + 6) != 0) &&
     (uVar1 = *(uint *)(param_1 + DAT_08123be4 + 0x10), *(uint *)(DAT_08123be8 + 0x1c) < uVar1)) {
    FUN_08006a6c(0,uVar1);
  }
  return (ulonglong)in_lr << 0x20;
}


