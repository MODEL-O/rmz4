// undefined FUN_080035f8(void)
// entry 0x80035f8


undefined4
FUN_080035f8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  uVar2 = param_2[1];
  param_1[1] = uVar2;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  uVar1 = (ushort)DAT_0800361c;
  *(ushort *)(param_1 + 2) = (ushort)uVar3 & uVar1;
  *(ushort *)((int)param_1 + 10) = (ushort)uVar2 & uVar1;
  return in_lr;
}


