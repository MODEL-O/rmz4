// undefined FUN_0808747c(void)
// entry 0x808747c


undefined4 FUN_0808747c(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080874c8);
    FUN_0801cf00(param_1,0x1d00);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 0x3f) == 0) {
    local_1c = DAT_0808752c;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_1c = 0x400;
    }
    local_1c = *(int *)(param_1 + 0x54) + local_1c;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    local_14 = 0x200;
    local_10 = 0;
    FUN_08088ff0(&local_1c,&local_14,0,2);
  }
  if (((*(int *)(*DAT_08087530 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
     ((*(int *)(*DAT_08087530 + 0x58) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x14001)) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


