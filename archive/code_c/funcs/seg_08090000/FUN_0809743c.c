// undefined FUN_0809743c(void)
// entry 0x809743c


undefined4 FUN_0809743c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x5000);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x12) < 9) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  }
  else if (((*(int *)(*DAT_08097498 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
          ((*(int *)(*DAT_08097498 + 0x58) - *(int *)(param_1 + 0x58)) + 0x5000U < 0xa001)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


