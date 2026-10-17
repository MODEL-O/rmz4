// undefined FUN_0809ea18(void)
// entry 0x809ea18


undefined4 FUN_0809ea18(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  if (iVar4 <= DAT_0809ea8c) {
    *(int *)(param_1 + 0x5c) = iVar3 + *(int *)(param_1 + 100);
  }
  uVar1 = FUN_0801fb14(DAT_0809ea90,param_1 + 0x54);
  if (0x4000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809ea94);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


