// undefined FUN_080edc20(void)
// entry 0x80edc20


undefined4 FUN_080edc20(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (0x23 < *(byte *)(param_1 + 0xd)) {
    FUN_0801cff0(param_1);
    if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
      bVar1 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if (bVar1 < 6) {
        FUN_0801cf00(param_1,DAT_080ee18c);
      }
      else {
        FUN_0801cf00(param_1,DAT_080ee174);
        *(undefined1 *)(param_1 + 0x12) = 0;
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080edc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(PTR_PTR_080edc3c + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar2;
}


