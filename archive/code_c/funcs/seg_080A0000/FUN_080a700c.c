// undefined FUN_080a700c(void)
// entry 0x80a700c


undefined4 FUN_080a700c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x8b00);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x12) < 9) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    if (((*(int *)(*DAT_080a706c + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
       ((*(int *)(*DAT_080a706c + 0x58) - *(int *)(param_1 + 0x58)) + 0x5000U < 0xa001)) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


