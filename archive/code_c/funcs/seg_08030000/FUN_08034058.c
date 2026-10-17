// undefined FUN_08034058(void)
// entry 0x8034058


undefined4 FUN_08034058(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x156) * 2 + DAT_080340fc));
    FUN_08040bb4(param_1);
    *(undefined1 *)(param_1 + DAT_08034100) = 0x18;
    *pcVar3 = *pcVar3 + '\x01';
  }
  iVar1 = DAT_080340fc;
  FUN_0803a3b0(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x156) * 2 + DAT_080340fc));
  FUN_0803a3f0(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x156) * 2 + iVar1));
  if (*(char *)(param_1 + 0x71) < '\x01') {
    *(byte *)(param_1 + DAT_08034140) = *(byte *)(param_1 + DAT_08034140) | 6;
  }
  else {
    *(byte *)(param_1 + DAT_08034104) = *(byte *)(param_1 + DAT_08034104) | 8;
    cVar2 = FUN_08039fd8(param_1,param_1 + 0x144);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x100) = 3;
      *(undefined1 *)(param_1 + 0x101) = 0;
      FUN_080334dc(param_1);
      return in_lr;
    }
  }
  iVar1 = DAT_08034144;
  cVar2 = *(char *)(param_1 + DAT_08034144) + -1;
  *(char *)(param_1 + DAT_08034144) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + DAT_08034148) = 3;
    *(undefined1 *)(param_1 + iVar1 + -0x4f) = 0;
  }
  return in_lr;
}


