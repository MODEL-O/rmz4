// undefined FUN_08116b3c(void)
// entry 0x8116b3c


undefined4 FUN_08116b3c(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (0x31 < *(byte *)(param_1 + 3)) {
    if ((*(short *)(DAT_08116c68 + 2) == 0) || (*(short *)(DAT_08116c68 + 2) == 4)) {
      *(undefined1 *)(param_1 + 3) = 0;
      FUN_0810e584(0);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      if (((*(short *)(DAT_08116c68 + 2) == 0) || (*(short *)(DAT_08116c68 + 2) == 4)) &&
         (sVar2 = FUN_08117a68(param_1), sVar2 != 0)) {
        if (sVar2 == 1) {
          uVar1 = 3;
        }
        else if (sVar2 == -1) {
          uVar1 = 0x20;
        }
        else {
          uVar1 = 2;
        }
        *(undefined1 *)(param_1 + 3) = uVar1;
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08116b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(PTR_PTR_08116b50 + (uint)*(byte *)(param_1 + 3) * 4))();
  return uVar3;
}


