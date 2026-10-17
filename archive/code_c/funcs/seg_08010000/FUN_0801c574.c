// undefined FUN_0801c574(void)
// entry 0x801c574


undefined8 FUN_0801c574(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_08006f94(1,param_1);
  if (((((uint)(*param_1 + DAT_0801c5b4) < 0xf001) && (DAT_0801c5b8 < param_1[1])) &&
      (param_1[1] < 0x32001)) && (3 < ((uVar1 & 0xffff) + DAT_0801c5bc & 0xffff))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


