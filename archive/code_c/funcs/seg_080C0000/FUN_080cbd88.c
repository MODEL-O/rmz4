// undefined FUN_080cbd88(void)
// entry 0x80cbd88


undefined4 FUN_080cbd88(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x9200);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080cbdd4);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x300 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x300;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


