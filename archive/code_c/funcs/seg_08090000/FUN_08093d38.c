// undefined FUN_08093d38(void)
// entry 0x8093d38


ulonglong FUN_08093d38(int param_1)

{
  undefined4 in_lr;
  ulonglong uVar1;
  
  if (4 < *(byte *)(param_1 + 0xf)) {
    return (ulonglong)CONCAT14(*(byte *)(param_1 + 10) >> 4,in_lr) & 0x1ffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x08093d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08093d64 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


