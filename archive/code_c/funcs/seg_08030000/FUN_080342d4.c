// undefined FUN_080342d4(void)
// entry 0x80342d4


undefined4 FUN_080342d4(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  pcVar4 = (char *)(param_1 + 0x102);
  if (*pcVar4 == '\0') {
    FUN_0801cf00(param_1,DAT_08034348);
    *(undefined1 *)(param_1 + DAT_0803434c) = 4;
    *pcVar4 = *pcVar4 + '\x01';
  }
  uVar1 = DAT_08034348;
  FUN_0803a3b0(param_1,DAT_08034348);
  FUN_0803a3f0(param_1,uVar1);
  *(byte *)(param_1 + DAT_08034350) = *(byte *)(param_1 + DAT_08034350) | 8;
  cVar2 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_1 + DAT_08034388) + -1;
    *(char *)(param_1 + DAT_08034388) = cVar2;
    if (cVar2 == -1) {
      *(undefined1 *)(param_1 + 0x100) = 0;
      uVar3 = FUN_0802b7d8(param_1);
      FUN_0801cf00(param_1,uVar3);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + 0x101) = 0;
    FUN_080334dc(param_1);
  }
  return in_lr;
}


