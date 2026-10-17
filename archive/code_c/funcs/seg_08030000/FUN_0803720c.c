// undefined FUN_0803720c(void)
// entry 0x803720c


undefined4 FUN_0803720c(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_08037234);
    FUN_0803c464(param_1,10);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else if ((*(byte *)(param_1 + DAT_08037260) & 1) == 0) {
    FUN_0803a3b0(param_1,DAT_08037298);
  }
  else {
    FUN_0801cfc8(param_1,DAT_08037264,*(undefined1 *)(param_1 + 0x16e),
                 *(undefined1 *)(param_1 + DAT_08037268));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_0801cfc8(param_1,0x500,4,1);
    uVar2 = 0;
    iVar1 = 0x100;
  }
  else {
    uVar2 = 3;
    iVar1 = DAT_080372ac;
  }
  *(undefined1 *)(param_1 + iVar1) = uVar2;
  return in_lr;
}


