// undefined FUN_08029210(void)
// entry 0x8029210


longlong FUN_08029210(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    *(undefined1 *)(DAT_08029248 + 1) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(byte *)(DAT_0802923c + 1) = *(byte *)(DAT_0802923c + 1) | 2;
    }
  }
  else {
    if (bVar1 == 2) {
      bVar1 = *DAT_08029258 | 0x80;
      pbVar2 = DAT_08029258;
    }
    else {
      if (bVar1 != 3) goto LAB_08029266;
      bVar1 = *DAT_0802926c & 0x7f;
      pbVar2 = DAT_0802926c;
    }
    *pbVar2 = bVar1;
  }
LAB_08029266:
  return (ulonglong)in_lr << 0x20;
}


