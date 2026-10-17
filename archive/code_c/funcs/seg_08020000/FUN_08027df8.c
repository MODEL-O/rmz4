// undefined FUN_08027df8(void)
// entry 0x8027df8


undefined8 FUN_08027df8(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar3 + 1) == '\0') {
    if (*(short *)(param_1 + 4) == 0) {
      uVar1 = 0;
    }
    else {
      *(int *)(param_1 + 0xc) = iVar3 + -8;
      uVar1 = 1;
    }
  }
  else {
    piVar2 = (int *)(param_1 + 0xd4);
    iVar4 = *(int *)(iVar3 + 4);
    *piVar2 = iVar4;
    if (*(char *)(iVar3 + 1) == '\x02') {
      *piVar2 = iVar4 - *(int *)(param_1 + 0xd0);
    }
    if (*piVar2 < 1) {
      uVar1 = 0;
      *piVar2 = 0;
    }
    else {
      *piVar2 = *piVar2 + -1;
      uVar1 = 1;
    }
  }
  return CONCAT44(in_lr,uVar1);
}


