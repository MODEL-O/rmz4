// undefined FUN_0807d828(void)
// entry 0x807d828


undefined4 FUN_0807d828(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x14a);
    FUN_0807e8c8(param_1,0x11);
    *(undefined4 *)(param_1 + 100) = 0x5a;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807d928) * 4 +
                        DAT_0807d924)));
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  if ((*(char *)(param_1 + 0x13) == '\0') && ('\x03' < *(char *)(param_1 + 0x71))) {
    FUN_08001d30(DAT_0807d92c,
                 ((uint)*(ushort *)(DAT_0807d930 + 0x16a) -
                 (uint)(*(ushort *)(DAT_0807d92c + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0807d934,
                 ((uint)*(ushort *)(DAT_0807d938 + 0x16a) - (uint)*(byte *)(DAT_0807d934 + 7)) *
                 0x20 + 0x200);
    local_1c = *(int *)(param_1 + 0x54) + (uVar1 * 2 + -1) * 0x2c00;
    local_18 = *(int *)(param_1 + 0x58) + DAT_0807d93c;
    FUN_080b6ae0(param_1,&local_1c,uVar1);
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  if ((*(int *)(param_1 + 100) == 0) && (*(char *)(param_1 + 0x13) != '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


