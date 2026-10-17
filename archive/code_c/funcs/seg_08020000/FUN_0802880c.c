// undefined FUN_0802880c(void)
// entry 0x802880c


longlong FUN_0802880c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar2 + 1);
  if (bVar1 == 1) {
    *(undefined2 *)(param_1 + 0x14e) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(ushort *)(param_1 + 0x14e) = (ushort)*(undefined4 *)(iVar2 + 4) | 0x8000;
    }
  }
  else if (bVar1 == 2) {
    FUN_0801fe64(*(undefined1 *)(iVar2 + 4),DAT_08028858);
  }
  return (ulonglong)in_lr << 0x20;
}


