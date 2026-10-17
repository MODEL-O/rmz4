// undefined FUN_0805fcfc(void)
// entry 0x805fcfc


undefined4 FUN_0805fcfc(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0xa500);
    FUN_08005784(param_1 + 0x74,DAT_0805fd2c);
    if (*(short *)(param_1 + 0xa4) < 0x11) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 0x18;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


