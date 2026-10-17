// undefined FUN_080b08a4(void)
// entry 0x80b08a4


undefined4 FUN_080b08a4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + DAT_080b08f4;
    FUN_080b0358(&local_10,1,param_1);
    FUN_0801cf00(param_1,DAT_080b08f8);
    *(undefined1 *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


