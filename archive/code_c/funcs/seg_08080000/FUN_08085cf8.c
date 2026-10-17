// undefined FUN_08085cf8(void)
// entry 0x8085cf8


undefined4 FUN_08085cf8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08085d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08085d10))();
  return uVar1;
}


