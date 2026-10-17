// undefined FUN_080b5aec(void)
// entry 0x80b5aec


undefined4 FUN_080b5aec(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080b5b9c);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080b5ba0);
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  uVar2 = DAT_080b5ba4;
  if ((bVar1 & 1) == 0) {
    uVar5 = DAT_080b5bac * *DAT_080b5ba8 + DAT_080b5bb0;
    *DAT_080b5ba8 = uVar5 & 0x7fffffff;
    FUN_080d4c8c(param_1 + 0x54,uVar2,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    psVar4 = (short *)(iVar6 + 0xcc);
    if (*psVar4 != 0) {
      *psVar4 = *psVar4 + -1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b5bb4);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


