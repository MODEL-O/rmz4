// undefined FUN_080c0aa0(void)
// entry 0x80c0aa0


undefined4 FUN_080c0aa0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[1] = DAT_080c0b04[1];
  local_14[0] = *DAT_080c0b04;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c0b08);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,*(undefined2 *)(local_14 + bVar1));
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


