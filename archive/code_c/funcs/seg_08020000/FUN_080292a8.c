// undefined FUN_080292a8(void)
// entry 0x80292a8


longlong FUN_080292a8(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  if (cVar1 == '\0') {
    *(char *)(param_1 + 3) = (char)*(undefined2 *)(*(int *)(param_1 + 0xc) + 2);
    if ((*(byte *)(DAT_080292d4 + 4) & 0x40) != 0) goto LAB_080292e6;
    uVar2 = *(ushort *)(DAT_080292d8 + 8) | 0x80;
    iVar3 = DAT_080292d8;
  }
  else {
    if (cVar1 != '\x01') goto LAB_080292e6;
    uVar2 = (ushort)DAT_080292f0 & *(ushort *)(DAT_080292ec + 8);
    iVar3 = DAT_080292ec;
  }
  *(ushort *)(iVar3 + 8) = uVar2;
LAB_080292e6:
  return (ulonglong)in_lr << 0x20;
}


