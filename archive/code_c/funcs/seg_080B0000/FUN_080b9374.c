// undefined FUN_080b9374(void)
// entry 0x80b9374


undefined4 FUN_080b9374(int param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  char cVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    pbVar5 = (byte *)(*(int *)(param_1 + 0x28) + 0xbf);
    *pbVar5 = *pbVar5 | 4;
    FUN_08005784(param_1 + 0x74,DAT_080b945c);
    *DAT_080b9460 = (short)DAT_080b9464;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    FUN_0801cf00(param_1,0xbb00);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar6 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar6;
  puVar2 = DAT_080b9460;
  iVar3 = (int)*(short *)((*(byte *)(param_1 + 0x12) & 0x7f) * 4 + DAT_080b9468);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  iVar3 = (int)*(short *)((iVar3 >> 2 & 0xffU) * 2 + DAT_080b9468);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  uVar1 = (ushort)(iVar3 >> 4);
  DAT_080b9460[1] = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
  if (cVar6 == '\0') {
    *puVar2 = 0;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b946c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  }
  return in_lr;
}


