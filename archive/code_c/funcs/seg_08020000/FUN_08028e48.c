// undefined FUN_08028e48(void)
// entry 0x8028e48


longlong FUN_08028e48(int param_1)

{
  byte bVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar2 + 1);
  if (bVar1 == 1) {
    FUN_08002b5c((int)*(short *)(iVar2 + 4));
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_08002b10(*(undefined2 *)(iVar2 + 4));
    }
  }
  else if (bVar1 == 2) {
    FUN_08002b7c((int)*(short *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2));
  }
  return (ulonglong)in_lr << 0x20;
}


