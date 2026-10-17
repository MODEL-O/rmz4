// undefined FUN_0807dbb4(void)
// entry 0x807dbb4


undefined4 FUN_0807dbb4(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_0807dca0);
    FUN_0807e8c8(param_1,0x1b);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807dca8) * 4 +
                        DAT_0807dca4)));
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  if ((*(char *)(param_1 + 0x13) != '\0') && (bVar2 < 0x21)) {
    if (*(int *)(param_1 + 0xd8) == 0) {
      FUN_08001d30(DAT_0807dcac,
                   ((uint)*(ushort *)(DAT_0807dcb0 + 0x170) -
                   (uint)(*(ushort *)(DAT_0807dcac + 6) >> 6)) * 0x20 + 0x10000);
      FUN_08002208(DAT_0807dcb4,
                   ((uint)*(ushort *)(DAT_0807dcb8 + 0x170) - (uint)*(byte *)(DAT_0807dcb4 + 7)) *
                   0x20 + 0x200);
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + DAT_0807dcbc;
      iVar1 = FUN_080cfa40(param_1,&local_18,0,0);
      *(int *)(param_1 + 0xd8) = iVar1;
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
    bVar2 = *(byte *)(param_1 + 0x12);
  }
  if (bVar2 == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


