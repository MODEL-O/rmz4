// undefined FUN_08088000(void)
// entry 0x8088000


undefined4 FUN_08088000(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0808804c);
    FUN_0801cf00(param_1,DAT_08088050);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    local_18 = DAT_080880b8;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_18 = 0x400;
    }
    local_18 = *(int *)(param_1 + 0x54) + local_18;
    local_14 = *(undefined4 *)(param_1 + 0x58);
    local_10 = 0x200;
    local_c = 0;
    FUN_08088ff0(&local_18,&local_10,1,2);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if (((*(int *)(*DAT_080880bc + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
       ((*(int *)(*DAT_080880bc + 0x58) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x14001)) {
      *(undefined1 *)(param_1 + 0xd) = 9;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 8;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


