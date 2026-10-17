// undefined FUN_08125f60(void)
// entry 0x8125f60


longlong FUN_08125f60(int param_1)

{
  uint uVar1;
  uint in_lr;
  
  if ((*(short *)(param_1 + 6) != 0) &&
     (uVar1 = *(uint *)(param_1 + DAT_08125f88 + 0x10), *(uint *)(DAT_08125f8c + 0x30) < uVar1)) {
    FUN_08006a6c(5,uVar1);
  }
  return (ulonglong)in_lr << 0x20;
}


