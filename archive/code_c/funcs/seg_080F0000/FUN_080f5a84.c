// undefined FUN_080f5a84(void)
// entry 0x80f5a84


undefined4 FUN_080f5a84(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0xbb000;
  local_10 = 0x2d000;
  uVar1 = FUN_080f5308(&local_14,2,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  local_14 = 0xcd000;
  local_10 = 0x2d000;
  uVar1 = FUN_080f5308(&local_14,2,0);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  local_14 = 0xc5000;
  local_10 = 0x31000;
  uVar1 = FUN_080f5308(&local_14,2,0);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  return in_lr;
}


