// undefined FUN_080b4bd0(void)
// entry 0x80b4bd0


undefined4 FUN_080b4bd0(int param_1)

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
  if (CONCAT11(*(undefined1 *)(iVar3 + 0x1e),*(undefined1 *)(iVar3 + 0x70)) != DAT_080b4c10) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b4c14);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080b4c18(param_1);
  }
  return in_lr;
}


