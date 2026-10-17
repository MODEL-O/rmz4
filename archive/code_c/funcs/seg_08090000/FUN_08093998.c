// undefined FUN_08093998(void)
// entry 0x8093998


undefined4 FUN_08093998(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080939dc);
    FUN_0801cf00(param_1,0x4000);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08094a38(param_1);
  iVar3 = FUN_08094f38(param_1);
  if (iVar3 == 0) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


