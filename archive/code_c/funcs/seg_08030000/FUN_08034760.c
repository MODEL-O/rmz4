// undefined FUN_08034760(void)
// entry 0x8034760


undefined4 FUN_08034760(int param_1)

{
  int iVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080347b4;
  pbVar3 = (byte *)(param_1 + DAT_080347b8);
  FUN_0803a3b0(param_1,*(undefined2 *)((uint)*pbVar3 * 2 + DAT_080347b4));
  FUN_0803a3f0(param_1,*(undefined2 *)((uint)*pbVar3 * 2 + iVar1));
  cVar2 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + DAT_080347bc) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


