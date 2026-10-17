// undefined FUN_080c5198(void)
// entry 0x80c5198


undefined4 FUN_080c5198(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080c51bc);
    FUN_08005784(param_1 + 0x74,DAT_080c51c0);
    uVar2 = 0;
    while (((int)uVar2 < 2 &&
           (iVar1 = FUN_080c4c7c(param_1,param_1 + 0x54,uVar2 & 0xff), iVar1 != 0))) {
      *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x01';
      uVar2 = uVar2 + 1;
    }
    FUN_0801cf00(param_1,DAT_080c5210);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


