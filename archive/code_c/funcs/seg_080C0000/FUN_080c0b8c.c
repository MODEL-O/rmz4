// undefined FUN_080c0b8c(void)
// entry 0x80c0b8c


undefined4 FUN_080c0b8c(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[1] = DAT_080c0be8[1];
  local_14[0] = *DAT_080c0be8;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c0bec);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,*(undefined2 *)(local_14 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


