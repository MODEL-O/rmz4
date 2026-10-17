// undefined FUN_080157b8(void)
// entry 0x80157b8


undefined4 FUN_080157b8(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_080157f4);
    *puVar1 = (ushort)DAT_080157f8 & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x4c) = 0xb40;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


