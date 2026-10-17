// undefined FUN_0805a484(void)
// entry 0x805a484


undefined4 FUN_0805a484(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0805a540);
    FUN_0801cf00(param_1,DAT_0805a544);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x71) == '\x04')) {
    FUN_08001d30(DAT_0805a548,
                 ((uint)*(ushort *)(DAT_0805a54c + 0x8a) -
                 (uint)(*(ushort *)(DAT_0805a548 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0805a550,
                 ((uint)*(ushort *)(DAT_0805a554 + 0x8a) - (uint)*(byte *)(DAT_0805a550 + 7)) * 0x20
                 + 0x200);
    if ((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0xbf) != '\0')) {
      iVar1 = FUN_080c245c(param_1);
      *(int *)(param_1 + 200) = iVar1;
      cVar2 = '\0';
      if (iVar1 == 0) {
        cVar2 = -1;
      }
      *(char *)(param_1 + 0xbf) = cVar2;
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


