// undefined FUN_0801e204(void)
// entry 0x801e204


undefined4 FUN_0801e204(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  short *psVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_0801e230;
  piVar3 = *(undefined4 **)(DAT_0801e230 + DAT_0801e234);
  piVar4 = *(undefined4 **)(DAT_0801e230 + DAT_0801e234);
  while (piVar1 = piVar3, piVar1 != param_1) {
    piVar4 = piVar1;
    piVar3 = (int *)*piVar1;
  }
  if (piVar1 == piVar4) {
    *(int *)(DAT_0801e230 + DAT_0801e234) = *param_1;
  }
  else {
    *piVar4 = *param_1;
  }
  piVar4 = (int *)(iVar2 + 0x448);
  *param_1 = *piVar4;
  *piVar4 = (int)param_1;
  psVar5 = (short *)(iVar2 + DAT_0801e258);
  *psVar5 = *psVar5 + 1;
  return in_lr;
}


