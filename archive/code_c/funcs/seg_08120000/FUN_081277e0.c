// undefined FUN_081277e0(void)
// entry 0x81277e0


undefined4 FUN_081277e0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + DAT_08127810);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + DAT_0812780c);
  iVar3 = *piVar1;
  if (*piVar2 == iVar3) {
    if (((short)piVar2[1] == 0) || (piVar2[1] < 0)) {
      FUN_08127ea0(piVar2,*piVar2);
    }
  }
  else {
    FUN_08127ea0(piVar2,iVar3);
  }
  return in_lr;
}


