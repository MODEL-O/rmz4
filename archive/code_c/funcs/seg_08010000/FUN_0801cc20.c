// undefined FUN_0801cc20(void)
// entry 0x801cc20


undefined8 FUN_0801cc20(int param_1,char param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (*(short *)(param_1 + 8) == *(short *)(param_1 + 10)) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    FUN_080054c4(param_1);
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar2;
    while (iVar2 != param_1 + 0x14) {
      if (((*(char *)(iVar2 + 9) == param_2) && (*(char *)(iVar2 + 0x10) == param_3)) &&
         (*(char *)(iVar2 + 0x11) == param_4)) {
        uVar3 = uVar3 + 1 & 0xffff;
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar2;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return CONCAT44(in_lr,uVar3);
}


