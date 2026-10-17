// undefined FUN_0805aae0(void)
// entry 0x805aae0


undefined4 FUN_0805aae0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08001d30(DAT_0805ab98,
                 ((uint)*(ushort *)(DAT_0805ab9c + 0x8c) -
                 (uint)(*(ushort *)(DAT_0805ab98 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0805aba0,
                 ((uint)*(ushort *)(DAT_0805aba4 + 0x8c) - (uint)*(byte *)(DAT_0805aba0 + 7)) * 0x20
                 + 0x200);
    if ((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0xbf) != '\x02')) {
      iVar1 = FUN_08095120(param_1,1);
      *(int *)(param_1 + 200) = iVar1;
      cVar2 = -1;
      if (iVar1 != 0) {
        cVar2 = '\x02';
      }
      *(char *)(param_1 + 0xbf) = cVar2;
    }
    FUN_08005784(param_1 + 0x74,DAT_0805aba8);
    FUN_0801cf00(param_1,DAT_0805abac);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


