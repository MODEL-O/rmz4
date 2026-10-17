// undefined FUN_08116060(void)
// entry 0x8116060


undefined4 FUN_08116060(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (0x15 < *(byte *)(param_1 + 3)) {
    if ((*(short *)(DAT_08116124 + 2) == 0) || (*(short *)(DAT_08116124 + 2) == 4)) {
      *(undefined1 *)(param_1 + 3) = 0;
      FUN_0810e584(DAT_08116128);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      if (((*(short *)(DAT_08116124 + 2) == 0) || (*(short *)(DAT_08116124 + 2) == 4)) &&
         (sVar1 = FUN_08117a68(param_1), sVar1 != 0)) {
        if (sVar1 == 1) {
          *(undefined1 *)(param_1 + 3) = 0x10;
        }
        else if (sVar1 == -1) {
          *(undefined1 *)(param_1 + 3) = 2;
        }
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08116074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(PTR_PTR_08116078 + (uint)*(byte *)(param_1 + 3) * 4))();
  return uVar2;
}


