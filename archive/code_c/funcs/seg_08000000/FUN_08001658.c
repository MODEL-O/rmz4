// undefined FUN_08001658(void)
// entry 0x8001658


undefined8 FUN_08001658(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_10;
  
  param_1 = param_1 & 0xff;
  local_10 = 0;
  if (param_1 < 6) {
    uVar1 = FUN_08001bb0(&local_10,param_1 * 0x55,4);
    uVar2 = FUN_08001bb0(&local_10,(param_1 + 6) * 0x55,4);
    iVar3 = (int)(short)(uVar1 | uVar2);
  }
  else {
    iVar3 = -1;
  }
  return CONCAT44(in_lr,iVar3);
}


