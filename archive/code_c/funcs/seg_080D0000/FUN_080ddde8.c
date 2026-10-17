// undefined FUN_080ddde8(void)
// entry 0x80ddde8


undefined4 FUN_080ddde8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  iVar1 = *(int *)(param_1 + 100);
  *(int *)(param_1 + 100) = iVar1 + -1;
  if ((iVar1 == 0) || (1 < *(byte *)(iVar3 + 0xc))) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dde24);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080dd6e0(param_1);
  }
  return in_lr;
}


