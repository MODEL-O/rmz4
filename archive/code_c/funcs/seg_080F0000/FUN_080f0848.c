// undefined FUN_080f0848(void)
// entry 0x80f0848


undefined4 FUN_080f0848(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    puVar1 = (ushort *)(DAT_080f08cc + 0x62);
    *puVar1 = (ushort)DAT_080f08d0;
    puVar2 = (ushort *)(DAT_080f08d4 + 0x62);
    *puVar2 = 8;
    FUN_08001d30(DAT_080f08d8,
                 ((uint)*puVar1 - (uint)(*(ushort *)(DAT_080f08d8 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_080f08dc,((uint)*puVar2 - (uint)*(byte *)(DAT_080f08dc + 7)) * 0x20 + 0x200);
    FUN_0801cf00(param_1,0x3100);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


