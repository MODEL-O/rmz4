// undefined FUN_080374f4(void)
// entry 0x80374f4


undefined4 FUN_080374f4(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_08037550);
    *(undefined1 *)(param_1 + DAT_08037554) = 0x10;
    *pcVar3 = *pcVar3 + '\x01';
  }
  uVar1 = DAT_08037550;
  FUN_0803a3b0(param_1,DAT_08037550);
  FUN_0803a3f0(param_1,uVar1);
  cVar2 = *(char *)(param_1 + DAT_08037554) + -1;
  *(char *)(param_1 + DAT_08037554) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + DAT_08037558) = 5;
    *pcVar3 = '\0';
  }
  return in_lr;
}


