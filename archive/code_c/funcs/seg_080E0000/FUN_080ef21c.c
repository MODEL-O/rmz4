// undefined FUN_080ef21c(void)
// entry 0x80ef21c


undefined4 FUN_080ef21c(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,DAT_080ef248);
    bVar2 = *(byte *)(param_1 + 0x11) & 3;
    if (bVar2 == 1) {
      uVar1 = 0x700;
LAB_080ef262:
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
    }
    else if (bVar2 < 2) {
      if ((*(byte *)(param_1 + 0x11) & 3) == 0) {
        uVar1 = 0x600;
        goto LAB_080ef262;
      }
    }
    else if (bVar2 == 2) {
      uVar1 = 0x650;
      goto LAB_080ef262;
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_080ef368;
  if (*(byte *)(param_1 + 0x11) < 7) {
                    /* WARNING: Could not recover jumptable at 0x080ef280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_080ef284 + (uint)*(byte *)(param_1 + 0x11) * 4))();
    return uVar1;
  }
LAB_080ef368:
  if (((*(uint *)(param_1 + 0x10) & DAT_080ef398) == 0) && (0x1c2000 < *(int *)(param_1 + 0x54))) {
    FUN_08002b10(0x58);
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


