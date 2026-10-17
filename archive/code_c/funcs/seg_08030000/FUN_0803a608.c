// undefined FUN_0803a608(void)
// entry 0x803a608


/* WARNING: Removing unreachable block (ram,0x0803a66a) */
/* WARNING: Removing unreachable block (ram,0x0803a674) */

undefined8 FUN_0803a608(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  undefined8 uVar2;
  
  uVar1 = (param_2 & 0xff) - 3;
  if (4 < uVar1) {
    return CONCAT44(in_lr,0xff);
  }
                    /* WARNING: Could not recover jumptable at 0x0803a624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(uVar1 * 4 + DAT_0803a628))();
  return uVar2;
}


