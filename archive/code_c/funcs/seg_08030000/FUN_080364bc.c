// undefined FUN_080364bc(void)
// entry 0x80364bc


undefined4 FUN_080364bc(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x156) * 2 + DAT_08036540));
    FUN_08040bb4(param_1);
    *(undefined1 *)(param_1 + DAT_08036544) = 0x18;
    *pcVar3 = *pcVar3 + '\x01';
  }
  iVar1 = DAT_08036540;
  FUN_0803a3b0(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x156) * 2 + DAT_08036540));
  FUN_0803a3f0(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x156) * 2 + iVar1));
  cVar2 = *(char *)(param_1 + DAT_08036544) + -1;
  *(char *)(param_1 + DAT_08036544) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + DAT_08036548) = 3;
    *pcVar3 = '\0';
  }
  return in_lr;
}


