// undefined FUN_0805ee6c(void)
// entry 0x805ee6c


undefined4 FUN_0805ee6c(int param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)param_2;
  if (uVar3 < 0x2b) {
    iVar1 = uVar3 * 4;
                    /* WARNING: Could not recover jumptable at 0x0805ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar1 + DAT_0805ee8c))(iVar1,*(code **)(iVar1 + DAT_0805ee8c),iVar1);
    return uVar2;
  }
  FUN_0801cf00(param_1,*(undefined2 *)(uVar3 * 4 + DAT_0805ee88));
  *(byte *)(param_1 + 0xb8) = param_2;
  return in_lr;
}


