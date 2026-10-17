// undefined FUN_08113fa4(void)
// entry 0x8113fa4


undefined4 FUN_08113fa4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (9 < *(byte *)(param_1 + 2)) {
    FUN_0810e4cc();
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08113fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + DAT_08113fbc))();
  return uVar1;
}


