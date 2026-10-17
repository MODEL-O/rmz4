// undefined FUN_080bf600(void)
// entry 0x80bf600


undefined4 FUN_080bf600(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bf6b8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = DAT_080bf6bc;
  iVar2 = *(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_080bf6bc) * 0x280;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  iVar3 = *(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar3) * 0x280;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,DAT_080bf6c0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080bf6c4,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080bf830(param_1);
  return in_lr;
}


