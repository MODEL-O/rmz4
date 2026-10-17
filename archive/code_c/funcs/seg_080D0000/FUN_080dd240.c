// undefined FUN_080dd240(void)
// entry 0x80dd240


undefined4 FUN_080dd240(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  uVar2 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (CONCAT11(*(undefined1 *)(iVar3 + 0x1e),*(undefined1 *)(iVar3 + 0x70)) != DAT_080dd280) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dd284);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080dcdf0(param_1);
  }
  return in_lr;
}


