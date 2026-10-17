// undefined FUN_080ae8ac(void)
// entry 0x80ae8ac


undefined4 FUN_080ae8ac(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0xd7) = 1;
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      iVar2 = FUN_0801fb14(DAT_080ae904,param_1 + 0x54);
      if ((iVar2 != 0) ||
         (sVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
         sVar1 != 0)) goto LAB_080ae8ea;
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  else {
LAB_080ae8ea:
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ae908);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080ae92c(param_1);
  }
  return in_lr;
}


