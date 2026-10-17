// undefined FUN_08028430(void)
// entry 0x8028430


undefined8 FUN_08028430(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar2 + 1) == '\0') {
    if (((uint)*(byte *)(DAT_08028468 + 0x12) & *(uint *)(iVar2 + 4)) != 0) goto LAB_0802845c;
  }
  else if (((uint)*(byte *)(DAT_0802844c + 0x12) & *(uint *)(iVar2 + 4)) == 0) {
LAB_0802845c:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar1 = 1;
    goto LAB_08028464;
  }
  uVar1 = 0;
LAB_08028464:
  return CONCAT44(in_lr,uVar1);
}


