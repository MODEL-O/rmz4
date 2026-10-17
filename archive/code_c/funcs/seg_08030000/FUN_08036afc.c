// undefined FUN_08036afc(void)
// entry 0x8036afc


undefined4 FUN_08036afc(int param_1)

{
  int iVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08036b50;
  pbVar3 = (byte *)(param_1 + DAT_08036b54);
  FUN_0803a3b0(param_1,*(undefined2 *)((uint)*pbVar3 * 2 + DAT_08036b50));
  FUN_0803a3f0(param_1,*(undefined2 *)((uint)*pbVar3 * 2 + iVar1));
  cVar2 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + DAT_08036b58) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


