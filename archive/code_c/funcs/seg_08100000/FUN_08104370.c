// undefined FUN_08104370(void)
// entry 0x8104370


undefined4 FUN_08104370(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  puVar1 = (ushort *)(DAT_081043fc + 0x1b6);
  *puVar1 = (ushort)DAT_08104400;
  puVar3 = (ushort *)(DAT_08104404 + 0x1b6);
  *puVar3 = 10;
  FUN_08001d30(DAT_08104408 + 0x111c,
               ((uint)*puVar1 - (uint)(*(ushort *)(DAT_08104408 + 0x1122) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_0810440c + 0x111c,
               ((uint)*puVar3 - (uint)*(byte *)(DAT_0810440c + 0x1123)) * 0x20 + 0x200);
  uVar2 = 0;
  do {
    *(undefined4 *)(param_1 + 0xb4 + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  uVar2 = 0;
  do {
    *(undefined4 *)(uVar2 * 4 + param_1 + 0x5c) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0x20;
  return in_lr;
}


