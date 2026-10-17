// undefined FUN_080c1810(void)
// entry 0x80c1810


undefined4 FUN_080c1810(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xb4) = 1;
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (bVar1 < 4) {
    FUN_0801cf00(param_1,DAT_080c1848);
  }
  else {
    FUN_0801cf00(param_1,DAT_080c1870);
  }
  FUN_0801cff0(param_1);
  if (*(char *)(iVar2 + 200) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c1898);
  }
  else {
    FUN_08005784(param_1 + 0x74,DAT_080c1874);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


