// undefined FUN_080ad690(void)
// entry 0x80ad690


undefined4 FUN_080ad690(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    uVar3 = *(undefined4 *)(iVar2 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ad6b8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080ad750(param_1);
  }
  return in_lr;
}


