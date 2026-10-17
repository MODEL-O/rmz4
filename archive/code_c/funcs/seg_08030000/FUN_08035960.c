// undefined FUN_08035960(void)
// entry 0x8035960


undefined4 FUN_08035960(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  char local_14 [4];
  
  pcVar4 = (char *)(param_1 + 0x102);
  if (*pcVar4 == '\0') {
    FUN_0801cf00(param_1,DAT_08035994);
    *(undefined1 *)(param_1 + 0x146) = 0;
    FUN_0803c464(param_1,0x15);
    *pcVar4 = *pcVar4 + '\x01';
  }
  else {
    cVar1 = FUN_08039fd8(param_1,local_14);
    if ((cVar1 != '\0') && (local_14[0] == '\x01')) {
      *(char *)(param_1 + 0x146) = *(char *)(param_1 + 0x146) + '\x01';
    }
    FUN_0803a3b0(param_1,DAT_080359e8);
    if (*(char *)(param_1 + 0x73) == '\x04') {
      if ((*(char *)(param_1 + 0x146) == '\0') || (*(char *)(param_1 + 0xc5) != '\v')) {
        *(undefined1 *)(param_1 + DAT_08035a14) = 1;
        *(undefined1 *)(param_1 + 0x102) = 0;
      }
      else {
        *(char *)(param_1 + 0x146) = '\0';
      }
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sVar2 = FUN_08038790(param_1);
    iVar3 = -(int)sVar2;
  }
  else {
    sVar2 = FUN_08038790(param_1);
    iVar3 = (int)sVar2;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
  return in_lr;
}


