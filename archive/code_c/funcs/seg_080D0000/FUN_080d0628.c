// undefined FUN_080d0628(void)
// entry 0x80d0628


undefined4 FUN_080d0628(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d06c4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080d06c8,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar4 = DAT_080d06cc;
  iVar3 = *(short *)(((uint)*(byte *)(param_1 + 0x10) * 0x20000000 + 0x40000000 >> 0x17) +
                    DAT_080d06cc) * 0x180;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  iVar4 = *(short *)((*(byte *)(param_1 + 0x10) & 7) * 0x40 + iVar4) * 0x180;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  FUN_0801cf00(param_1,1);
  FUN_080d06d0(param_1);
  return in_lr;
}


