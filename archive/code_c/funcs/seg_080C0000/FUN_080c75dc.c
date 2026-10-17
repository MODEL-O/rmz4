// undefined FUN_080c75dc(void)
// entry 0x80c75dc


undefined4 FUN_080c75dc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((iVar4 != 0) && (1 < *(byte *)(iVar4 + 0xc))) {
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_0801cff0(param_1);
  iVar3 = 1;
  piVar1 = (int *)(param_1 + 0x54);
  do {
    *piVar1 = piVar1[2];
    piVar1[1] = piVar1[3];
    piVar1 = piVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  if (*(int *)(param_1 + 0x54) == 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c762c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080c7648(param_1);
  }
  else if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
  }
  return in_lr;
}


