// undefined FUN_0811fa14(void)
// entry 0x811fa14


undefined4 FUN_0811fa14(int param_1)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar2 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 2) * 4 + DAT_0811faa0));
  if (cVar2 != '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 2) * 4 + DAT_0811faa4));
  }
  iVar3 = param_1 + DAT_0811faa8;
  if (*(char *)(iVar3 + 0x11) != '\0') {
    *(undefined1 *)(param_1 + 1) = 3;
  }
  FUN_080025d8(0x2f);
  if (*(char *)(iVar3 + 0x13) == '\0') {
    *DAT_0811fac4 = (ushort)DAT_0811fac8 & *DAT_0811fac4;
  }
  else {
    *DAT_0811faac = 0;
    puVar1 = DAT_0811fab0;
    *DAT_0811fab0 = *DAT_0811fab0 | 0x2000;
    *(undefined1 *)(puVar1 + 6) = 0x10;
    *(byte *)(puVar1 + 7) = (byte)puVar1[7] | 3;
    puVar1[2] = *(byte *)(iVar3 + 0x13) + 0x40 & 0xff |
                (0x40 - (ushort)*(byte *)(iVar3 + 0x13)) * 0x100;
    puVar1[4] = *(byte *)(iVar3 + 0x14) + 0x50 & 0xff |
                (0x50 - (ushort)*(byte *)(iVar3 + 0x14)) * 0x100;
  }
  return in_lr;
}


