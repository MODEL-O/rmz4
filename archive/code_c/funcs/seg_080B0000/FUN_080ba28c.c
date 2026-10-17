// undefined FUN_080ba28c(void)
// entry 0x80ba28c


undefined4 FUN_080ba28c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined1 auStack_24 [16];
  
  FUN_08129258(auStack_24,DAT_080ba2c8,7,DAT_080ba2c4[1],*DAT_080ba2c4,DAT_080ba2c4[1],
               DAT_080ba2c4[2]);
  if (4 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080ba2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080ba2cc + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


