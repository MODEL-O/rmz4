// undefined FUN_080a1a74(void)
// entry 0x80a1a74


undefined4 FUN_080a1a74(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xb8)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080a1a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080a1a98 + (uint)*(byte *)(param_1 + 0xb8) * 4))();
  return uVar1;
}


