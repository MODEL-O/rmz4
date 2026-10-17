// undefined FUN_0807f954(void)
// entry 0x807f954


undefined8 FUN_0807f954(char param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *DAT_0807f980;
  FUN_080054c4(iVar2);
  iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
  *(int *)(iVar2 + 0xc) = iVar1;
  while (iVar1 != iVar2 + 0x14) {
    if (*(char *)(iVar1 + 0x10) == param_1) goto LAB_0807f992;
    iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  iVar1 = 0;
LAB_0807f992:
  return CONCAT44(in_lr,iVar1);
}


