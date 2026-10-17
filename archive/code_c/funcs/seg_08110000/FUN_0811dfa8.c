// undefined FUN_0811dfa8(void)
// entry 0x811dfa8


void FUN_0811dfa8(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 2);
  if (0xd < uVar1) {
    uVar1 = FUN_0811e98a();
  }
                    /* WARNING: Could not recover jumptable at 0x0811dfbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_PTR_0811dfc0 + uVar1 * 4))();
  return;
}


