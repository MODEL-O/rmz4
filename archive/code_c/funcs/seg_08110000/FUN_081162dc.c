// undefined FUN_081162dc(void)
// entry 0x81162dc


undefined4 FUN_081162dc(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (0x27 < *(byte *)(param_1 + 3)) {
    if ((*(short *)(DAT_081163e8 + 2) == 0) || (*(short *)(DAT_081163e8 + 2) == 4)) {
      *(undefined1 *)(param_1 + 3) = 0;
      FUN_0810e584(0);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      if (((*(short *)(DAT_081163e8 + 2) == 0) || (*(short *)(DAT_081163e8 + 2) == 4)) &&
         (sVar1 = FUN_08117a68(param_1), sVar1 != 0)) {
        if (sVar1 == 1) {
          *(undefined1 *)(param_1 + 3) = 3;
        }
        else if (sVar1 == -1) {
          *(undefined1 *)(param_1 + 3) = 0x20;
        }
        else {
          *(undefined1 *)(param_1 + 3) = 2;
        }
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x081162f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(PTR_PTR_081162f4 + (uint)*(byte *)(param_1 + 3) * 4))();
  return uVar2;
}


