// undefined FUN_080062e8(void)
// entry 0x80062e8


undefined4 FUN_080062e8(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_lr;
  
  iVar3 = param_2;
  if (param_1 != (int *)0x0) {
    while (iVar3 != 0) {
      iVar3 = param_1[3];
      iVar4 = param_1[4];
      uVar1 = *(ushort *)(param_1 + 5);
      uVar2 = *(ushort *)((int)param_1 + 0x16);
      for (piVar6 = (int *)param_2; piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
        if (((param_1[2] != piVar6[2]) &&
            (uVar5 = (uint)uVar2 + (uint)*(ushort *)((int)piVar6 + 0x16),
            (iVar3 - piVar6[3]) + ((uint)uVar1 + (uint)*(ushort *)(piVar6 + 5) >> 1) <
            (uint)uVar1 + (uint)*(ushort *)(piVar6 + 5))) &&
           ((iVar4 - piVar6[4]) + (uVar5 >> 1) < uVar5)) {
          FUN_080063d8(param_1,piVar6);
        }
      }
      param_1 = (int *)*param_1;
      iVar3 = (int)param_1;
    }
  }
  return in_lr;
}


