// undefined FUN_0802a908(void)
// entry 0x802a908


undefined8
FUN_0802a908(int param_1,short param_2,uint param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xff;
  iVar4 = 1;
  if (param_1 >> 4 != 0) {
    iVar4 = param_1 >> 4;
  }
  if (param_3 != 0) {
    iVar1 = FUN_08128fb8((int)param_2,param_3);
    if (param_3 * iVar1 - (int)param_2 == 0) {
      FUN_08002b10(0x34);
    }
    iVar1 = iVar1 * iVar4;
    iVar4 = iVar1;
    if (iVar1 < 0) {
      iVar4 = -iVar1;
    }
    iVar3 = param_1;
    if (param_1 < 0) {
      iVar3 = -param_1;
    }
    if (iVar4 <= iVar3) {
      FUN_0802a680(iVar1,param_4,param_5);
      uVar2 = 1;
      goto LAB_0802a996;
    }
  }
  FUN_0802a680(param_1,param_4,param_5);
  uVar2 = 0;
LAB_0802a996:
  return CONCAT44(in_lr,uVar2);
}


