// undefined FUN_080b5f5c(void)
// entry 0x80b5f5c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080b5f5c(int param_1)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b5fec);
    FUN_0801cf00(param_1,_FUN_080b5ff0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    psVar3 = (short *)(iVar4 + 0xa4);
    sVar1 = *psVar3;
    *psVar3 = sVar1 + 2;
    if (0x60 < (short)(sVar1 + 2)) {
      *psVar3 = 0x60;
    }
    FUN_080b6094(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + iRam080b5ff4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


