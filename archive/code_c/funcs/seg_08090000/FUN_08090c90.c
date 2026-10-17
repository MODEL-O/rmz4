// undefined FUN_08090c90(void)
// entry 0x8090c90


undefined4 FUN_08090c90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(iVar4 + 0xc) < 2) && ((*(uint *)(iVar4 + 0xc) & DAT_08090cc4) == DAT_08090cc8)) {
    FUN_0801cff0(param_1);
    iVar3 = *(int *)(iVar4 + 0x58) + DAT_08090cf0;
    iVar2 = (iVar3 + DAT_08090cf4) - *(int *)(DAT_08090cf8 + 0x3c);
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 >> 0xf;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(int *)(param_1 + 0x58) = iVar3 + iVar2 * -0x8000;
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08090ccc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08090d54(param_1);
  }
  return in_lr;
}


