// undefined FUN_0812782c(void)
// entry 0x812782c


undefined4 FUN_0812782c(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + DAT_0812785c);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + DAT_08127858);
  iVar3 = *piVar1;
  if (*piVar2 == iVar3) {
    if ((short)piVar2[1] == 0) {
      FUN_08127ea0(piVar2,*piVar2);
    }
    else if (piVar2[1] < 0) {
      FUN_081276f4(piVar2);
    }
  }
  else {
    FUN_08127ea0(piVar2,iVar3);
  }
  return in_lr;
}


