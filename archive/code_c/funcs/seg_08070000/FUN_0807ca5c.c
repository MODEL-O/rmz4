// undefined FUN_0807ca5c(void)
// entry 0x807ca5c


undefined4 FUN_0807ca5c(int param_1)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  bVar1 = *(byte *)(param_1 + 0xd5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0807e8c8(param_1,0x17);
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
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807cb94) * 4 +
                        DAT_0807cb90)));
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && ('\x01' < *(char *)(param_1 + 0x71))) {
    FUN_08001d30(DAT_0807cb98,
                 ((uint)*(ushort *)(DAT_0807cb9c + 0x16e) -
                 (uint)(*(ushort *)(DAT_0807cb98 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0807cba0,
                 ((uint)*(ushort *)(DAT_0807cba4 + 0x16e) - (uint)*(byte *)(DAT_0807cba0 + 7)) *
                 0x20 + 0x200);
    puVar2 = DAT_0807cba8;
    uVar4 = 0;
    do {
      uVar3 = *puVar2 * DAT_0807cbac + DAT_0807cbb0;
      *puVar2 = uVar3 & 0x7fffffff;
      local_24 = *(int *)(param_1 + 0xb8) +
                 ((uVar3 & 0x7fffffff) >> 0x10 & 3) * -0x1000 + DAT_0807cbb4;
      if ((int)uVar4 / 2 != (uint)bVar1) {
        local_28 = FUN_0807e980(param_1,uVar4 & 0xff);
        FUN_080b6160(param_1,&local_28,uVar4 & 0xff);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(short *)(param_1 + 0x12) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


