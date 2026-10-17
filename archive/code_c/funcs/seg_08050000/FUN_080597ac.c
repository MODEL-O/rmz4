// undefined FUN_080597ac(void)
// entry 0x80597ac


undefined8 FUN_080597ac(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54) + ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * 0x800;
  iVar4 = *(int *)(param_1 + 0xbc) + DAT_08059828;
  if ((((iVar3 - *(int *)(*DAT_0805982c + 0x54)) + 0x2800U < 0x5001) &&
      ((iVar4 - (*(int *)(*DAT_0805982c + 0x58) + DAT_08059830)) + 0x2800U < 0x5001)) ||
     ((piVar1 = (int *)FUN_080503a8(param_1), piVar1 != (int *)0x0 &&
      (((iVar3 - *piVar1) + 0x2800U < 0x5001 && ((iVar4 - piVar1[1]) + 0x2800U < 0x5001)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


