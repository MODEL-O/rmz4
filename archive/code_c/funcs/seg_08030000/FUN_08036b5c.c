// undefined FUN_08036b5c(void)
// entry 0x8036b5c


undefined4 FUN_08036b5c(int param_1)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    *(byte *)(param_1 + DAT_08036bc8) = *(byte *)(param_1 + DAT_08036bc8) & 0xbf;
    FUN_0803a2b8(param_1);
    *pcVar3 = *pcVar3 + '\x01';
  }
  iVar1 = DAT_08036bcc;
  pbVar2 = (byte *)(param_1 + DAT_08036bd0);
  FUN_0803a3b0(param_1,*(undefined2 *)((uint)*pbVar2 * 2 + DAT_08036bcc));
  FUN_0803a3f0(param_1,*(undefined2 *)((uint)*pbVar2 * 2 + iVar1));
  if ((*(byte *)(param_1 + DAT_08036bc8) & 0x40) != 0) {
    *(undefined1 *)(param_1 + DAT_08036bd4) = 4;
    *pcVar3 = '\0';
  }
  return in_lr;
}


