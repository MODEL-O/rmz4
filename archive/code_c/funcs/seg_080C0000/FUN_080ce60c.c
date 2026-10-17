// undefined FUN_080ce60c(void)
// entry 0x80ce60c


undefined4 FUN_080ce60c(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080ce668);
    FUN_0801cf00(param_1,DAT_080ce66c);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    uVar2 = FUN_0810d3ac(param_1 + 0x54,*DAT_080ce670 + 0x54);
    *(undefined1 *)(param_1 + 0xb4) = uVar2;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


