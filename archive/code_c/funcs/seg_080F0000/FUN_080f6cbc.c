// undefined FUN_080f6cbc(void)
// entry 0x80f6cbc


undefined4 FUN_080f6cbc(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar4 = 0x800;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar4 = DAT_080f6d08;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar4;
  uVar2 = FUN_0801fb14(DAT_080f6d0c,param_1 + 0x54);
  if (0x2000 < uVar2) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f6d10);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


