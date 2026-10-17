// undefined FUN_0809bf30(void)
// entry 0x809bf30


undefined4 FUN_0809bf30(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  byte abStack_10 [4];
  
  FUN_08129258(abStack_10,DAT_0809bfa0,4);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)abStack_10[bVar1] * 4 + DAT_0809bfa4)));
  if (*(char *)(param_1 + 0xbc) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


