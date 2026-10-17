// undefined FUN_08034204(void)
// entry 0x8034204


undefined4 FUN_08034204(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_08034284);
    *(undefined1 *)(param_1 + DAT_08034288) = 0x10;
    *pcVar3 = *pcVar3 + '\x01';
  }
  uVar1 = DAT_08034284;
  FUN_0803a3b0(param_1,DAT_08034284);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + 0x71) < '\x01') {
    *(byte *)(param_1 + DAT_080342c8) = *(byte *)(param_1 + DAT_080342c8) | 6;
  }
  else {
    *(byte *)(param_1 + DAT_0803428c) = *(byte *)(param_1 + DAT_0803428c) | 8;
    cVar2 = FUN_08039fd8(param_1,param_1 + 0x144);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x100) = 3;
      *(undefined1 *)(param_1 + 0x101) = 0;
      FUN_080334dc(param_1);
      return in_lr;
    }
  }
  cVar2 = *(char *)(param_1 + DAT_080342cc) + -1;
  *(char *)(param_1 + DAT_080342cc) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + DAT_080342d0) = 5;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


