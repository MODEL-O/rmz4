// undefined FUN_08105d98(void)
// entry 0x8105d98


undefined4 FUN_08105d98(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined2 *)(DAT_08105e20 + 0x62) = 0x300;
    puVar1 = (ushort *)(DAT_08105e24 + 0x62);
    *puVar1 = 5;
    FUN_08001d30(DAT_08105e28,(0x300 - (uint)(*(ushort *)(DAT_08105e28 + 6) >> 6)) * 0x20 + 0x10000)
    ;
    FUN_08002208(DAT_08105e2c,((uint)*puVar1 - (uint)*(byte *)(DAT_08105e2c + 7)) * 0x20 + 0x200);
    FUN_0801cf00(param_1,0x3100);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


