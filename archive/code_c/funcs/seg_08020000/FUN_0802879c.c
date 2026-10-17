// undefined FUN_0802879c(void)
// entry 0x802879c


longlong FUN_0802879c(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1) * 0x10;
  if ((*(int *)(param_1 + 0x10 + iVar2) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x10 + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x10), iVar1 != 0)
     ) {
    *(int *)(param_1 + 0x14 + iVar2) = iVar1;
  }
  return (ulonglong)in_lr << 0x20;
}


