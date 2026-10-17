// undefined FUN_08029270(void)
// entry 0x8029270


longlong FUN_08029270(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  if (cVar1 == '\0') {
    uVar2 = *(ushort *)(DAT_0802928c + 8) | 0x40;
    iVar3 = DAT_0802928c;
  }
  else {
    if (cVar1 != '\x01') goto LAB_0802929a;
    uVar2 = (ushort)DAT_080292a4 & *(ushort *)(DAT_080292a0 + 8);
    iVar3 = DAT_080292a0;
  }
  *(ushort *)(iVar3 + 8) = uVar2;
LAB_0802929a:
  return (ulonglong)in_lr << 0x20;
}


