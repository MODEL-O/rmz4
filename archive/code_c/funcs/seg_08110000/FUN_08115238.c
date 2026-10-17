// undefined FUN_08115238(void)
// entry 0x8115238


undefined4 FUN_08115238(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (0x17 < *(byte *)(param_1 + 3)) {
    if ((*(short *)(DAT_08115300 + 2) == 0) || (*(short *)(DAT_08115300 + 2) == 4)) {
      *(undefined1 *)(param_1 + 3) = 0;
      FUN_0810e584(0);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      if (((*(short *)(DAT_08115300 + 2) == 0) || (*(short *)(DAT_08115300 + 2) == 4)) &&
         (sVar1 = FUN_08117a68(param_1), sVar1 != 0)) {
        if (sVar1 == 1) {
          *(undefined1 *)(param_1 + 3) = 3;
        }
        else if (sVar1 == -1) {
          *(undefined1 *)(param_1 + 3) = 0x11;
        }
        else {
          *(undefined1 *)(param_1 + 3) = 2;
        }
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0811524a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(PTR_PTR_0811524c + (uint)*(byte *)(param_1 + 3) * 4))();
  return uVar2;
}


