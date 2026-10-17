// undefined FUN_080f8588(void)
// entry 0x80f8588


undefined4 FUN_080f8588(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_080f872c(param_1,param_2,param_3 << 0x18);
  if (0xb < (uVar1 & 0xff)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f85a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(PTR_PTR_080f85a8 + (uVar1 & 0xff) * 4))();
  return uVar2;
}


