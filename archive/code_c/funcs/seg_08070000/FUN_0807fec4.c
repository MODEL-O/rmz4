// undefined FUN_0807fec4(void)
// entry 0x807fec4


undefined4 FUN_0807fec4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xe)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0807fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0807fedc + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


