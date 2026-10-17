// undefined FUN_080cd3ec(void)
// entry 0x80cd3ec


undefined4 FUN_080cd3ec(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  undefined4 in_lr;
  
  bVar4 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar4;
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = *(int *)(param_1 + 100) * (iVar1 - *(int *)(param_1 + 0x68));
  if (iVar1 < 0) {
    iVar1 = iVar1 + DAT_080cd4a8;
  }
  iVar1 = iVar1 >> 0xb;
  if (6 < iVar1) {
    iVar1 = 6;
  }
  FUN_0801cf00(param_1,*(undefined2 *)((bVar4 >> 1 & 1) * 4 + iVar1 * 8 + DAT_080cd4ac));
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(iVar1 + DAT_080cd4b0);
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,(uint)*(byte *)(iVar1 + DAT_080cd4b4) * 0x18 + DAT_080cd4b8);
  uVar2 = FUN_0801fb14(DAT_080cd4bc,param_1 + 0x54);
  if (0x3000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd4c0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


