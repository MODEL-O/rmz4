// undefined FUN_080347c0(void)
// entry 0x80347c0


undefined4 FUN_080347c0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    *(byte *)(param_1 + DAT_0803482c) = *(byte *)(param_1 + DAT_0803482c) & 0xbf;
    FUN_0803a2b8(param_1);
    *pcVar3 = *pcVar3 + '\x01';
  }
  iVar1 = DAT_08034830;
  pbVar2 = (byte *)(param_1 + DAT_08034834);
  FUN_0803a3b0(param_1,*(undefined2 *)((uint)*pbVar2 * 2 + DAT_08034830));
  FUN_0803a3f0(param_1,*(undefined2 *)((uint)*pbVar2 * 2 + iVar1));
  if ((*(byte *)(param_1 + DAT_0803482c) & 0x40) != 0) {
    *(undefined1 *)(param_1 + DAT_08034838) = 4;
    *pcVar3 = '\0';
  }
  return in_lr;
}


