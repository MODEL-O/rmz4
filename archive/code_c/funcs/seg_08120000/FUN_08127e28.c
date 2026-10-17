// undefined FUN_08127e28(void)
// entry 0x8127e28


undefined4 FUN_08127e28(int param_1,undefined1 *param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (param_3 != 0) {
    if (0x10 < param_3) {
      param_3 = 0x10;
    }
    piVar2 = (int *)*DAT_08127e94;
    if (*piVar2 == DAT_08127e98) {
      *piVar2 = *piVar2 + 1;
      FUN_08127b1c(param_1);
      *(undefined1 **)(param_1 + 0x2c) = param_2;
      *(byte *)(param_1 + 8) = param_3;
      *(undefined4 *)(param_1 + 4) = 0x80000000;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *param_2 = 0;
        param_2 = param_2 + 0x50;
      }
      if (piVar2[8] != 0) {
        *(int *)(param_1 + 0x38) = piVar2[8];
        *(int *)(param_1 + 0x3c) = piVar2[9];
        piVar2[8] = 0;
      }
      piVar2[9] = param_1;
      piVar2[8] = DAT_08127e9c;
      iVar1 = DAT_08127e98;
      *piVar2 = DAT_08127e98;
      *(int *)(param_1 + 0x34) = iVar1;
    }
  }
  return in_lr;
}


