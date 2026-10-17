// undefined FUN_080f7740(void)
// entry 0x80f7740


undefined4 FUN_080f7740(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(*DAT_080f7768 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*DAT_080f7768 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (4 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f7764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f776c + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


