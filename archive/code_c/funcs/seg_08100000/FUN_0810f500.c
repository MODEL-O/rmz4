// undefined FUN_0810f500(void)
// entry 0x810f500


undefined4 FUN_0810f500(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (6 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810f514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0810f518 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


