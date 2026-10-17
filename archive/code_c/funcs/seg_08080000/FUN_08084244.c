// undefined FUN_08084244(void)
// entry 0x8084244


undefined4 FUN_08084244(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08084298);
    local_10 = *(int *)(param_1 + 0x58) + 0x800;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54) + DAT_080842f8;
      FUN_080bd43c(&local_14,0x180,0xef);
      local_10 = *(int *)(param_1 + 0x58) + DAT_080842fc;
      FUN_080bd43c(&local_14,0x180,0x10);
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0x1000;
      FUN_080bd43c(&local_14,0x180,0x90);
      local_10 = *(int *)(param_1 + 0x58) + DAT_0808429c;
      FUN_080bd43c(&local_14,0x180,0x70);
    }
    FUN_08002b10(0x2c);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(int *)(param_1 + 0x2c) == 0) &&
     (sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xa00),
     sVar2 != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 7;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 4;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}


