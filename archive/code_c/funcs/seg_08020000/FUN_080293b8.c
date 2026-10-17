// undefined FUN_080293b8(void)
// entry 0x80293b8


undefined8 FUN_080293b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    FUN_08029ba8(DAT_080293d0);
  }
  else {
    iVar1 = FUN_08029be0(DAT_080293f4);
    if (iVar1 == 1) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      if (iVar3 != 0) {
        FUN_0802b7bc(iVar3);
      }
      uVar2 = 1;
      goto LAB_080293fa;
    }
  }
  uVar2 = 0;
LAB_080293fa:
  return CONCAT44(in_lr,uVar2);
}


