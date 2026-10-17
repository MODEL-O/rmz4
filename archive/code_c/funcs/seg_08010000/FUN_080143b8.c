// undefined FUN_080143b8(void)
// entry 0x80143b8


undefined4 FUN_080143b8(int param_1)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  puVar1 = DAT_080143f4;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080143f4 = (short)DAT_080143f8;
    puVar1[1] = (short)DAT_080143fc;
    if ((*(byte *)(DAT_08014400 + DAT_08014404) & 0xf) == 2) {
      *DAT_08014408 = *DAT_08014408 & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


