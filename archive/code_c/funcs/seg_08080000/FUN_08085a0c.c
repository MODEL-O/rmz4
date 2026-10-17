// undefined FUN_08085a0c(void)
// entry 0x8085a0c


undefined4 FUN_08085a0c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xe) < 8) {
                    /* WARNING: Could not recover jumptable at 0x08085a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_08085a20 + (uint)*(byte *)(param_1 + 0xe) * 4))();
    return uVar1;
  }
  uVar1 = FUN_08008aa4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  FUN_08085418(param_1,uVar1,0x800);
  return in_lr;
}


