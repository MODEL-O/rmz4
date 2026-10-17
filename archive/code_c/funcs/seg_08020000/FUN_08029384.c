// undefined FUN_08029384(void)
// entry 0x8029384


longlong FUN_08029384(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + *(int *)(iVar2 + 4) * 0x10 + 0x10);
  if (*(char *)(iVar2 + 1) == '\0') {
    FUN_0802aaec((int)*(short *)(iVar2 + 2),*(int *)(iVar2 + 4));
  }
  else if (iVar1 != 0) {
    FUN_0802aaec((int)*(short *)(iVar2 + 2),iVar1 + 0x54);
  }
  return (ulonglong)in_lr << 0x20;
}


