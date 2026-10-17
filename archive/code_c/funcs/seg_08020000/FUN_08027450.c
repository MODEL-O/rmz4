// undefined FUN_08027450(void)
// entry 0x8027450


longlong FUN_08027450(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint in_lr;
  
  iVar1 = DAT_0802748c;
  pcVar2 = (char *)(param_1 + 0x17c);
  if (*pcVar2 == '\0') {
    if (*(char *)(DAT_0802748c + 2) == '\0') {
      *(ushort *)(DAT_0802748c + 8) = *(ushort *)(DAT_0802748c + 8) | 1;
      FUN_080275f0(iVar1 + 0x10,**(undefined4 **)(DAT_08027490 + 0x48));
      FUN_08006984(0x57);
      FUN_0801f63c(1);
      *pcVar2 = '\x01';
      goto LAB_080274a6;
    }
  }
  else {
    if (*pcVar2 != '\x01') goto LAB_080274a6;
    *pcVar2 = '\x02';
    iVar1 = DAT_080274b0;
  }
  *(ushort *)(iVar1 + 8) = (ushort)DAT_080274b4 & *(ushort *)(iVar1 + 8);
LAB_080274a6:
  return (ulonglong)in_lr << 0x20;
}


