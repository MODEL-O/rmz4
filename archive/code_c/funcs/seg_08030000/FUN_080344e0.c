// undefined FUN_080344e0(void)
// entry 0x80344e0


undefined4 FUN_080344e0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_08034538);
    *pcVar3 = *pcVar3 + '\x01';
  }
  *(byte *)(param_1 + DAT_0803453c) = *(byte *)(param_1 + DAT_0803453c) | 8;
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(param_1 + 0x100) = 0;
      uVar2 = FUN_0802b7d8(param_1);
      FUN_0801cf00(param_1,uVar2);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + 0x101) = 0;
    FUN_080334dc(param_1);
  }
  return in_lr;
}


