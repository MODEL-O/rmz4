// undefined FUN_0807d1a4(void)
// entry 0x807d1a4


undefined4 FUN_0807d1a4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined1 auStack_40 [12];
  int local_34;
  int local_30;
  int local_2c;
  
  FUN_08129258(auStack_40,PTR_DAT_0807d200,2,*(undefined4 *)(PTR_DAT_0807d1fc + 0x10),
               *(undefined4 *)PTR_DAT_0807d1fc,*(undefined4 *)(PTR_DAT_0807d1fc + 4),
               *(undefined4 *)(PTR_DAT_0807d1fc + 8),*(undefined4 *)(PTR_DAT_0807d1fc + 0xc),
               *(undefined4 *)(PTR_DAT_0807d1fc + 0x10),*(undefined4 *)(PTR_DAT_0807d1fc + 0x14));
  if (5 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
  local_2c = param_1 + 0x74;
  local_30 = param_1 + 0x71;
  local_34 = param_1 + 100;
                    /* WARNING: Could not recover jumptable at 0x0807d1fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0807d204 + (uint)*(byte *)(param_1 + 0xf) * 4))
                    (*(code **)(PTR_PTR_0807d204 + (uint)*(byte *)(param_1 + 0xf) * 4),local_34,
                     *(byte *)(param_1 + 10) >> 4 & 1);
  return uVar1;
}


