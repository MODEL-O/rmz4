// undefined FUN_080abd34(void)
// entry 0x80abd34


undefined4 FUN_080abd34(int param_1)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  puVar1 = DAT_080abd84;
  DAT_080abd84[2] = *(short *)((*(byte *)(param_1 + 0x12) & 0x3f) * 8 + DAT_080abd80) >> 4;
  FUN_080ac300(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *puVar1 = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


