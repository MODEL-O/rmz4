// undefined FUN_08087be4(void)
// entry 0x8087be4


undefined4 FUN_08087be4(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  char cVar4;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08087c88);
    FUN_0801cf00(param_1,DAT_08087c8c);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    FUN_08002b10(0x2c);
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + DAT_08087c90;
    uVar2 = FUN_0810d398(*(undefined4 *)(*DAT_08087c94 + 0x54),
                         *(int *)(*DAT_08087c94 + 0x58) + DAT_08087c98);
    FUN_080bd43c(&local_18,0x180,uVar2);
    cVar1 = *(char *)(param_1 + 0xb4);
    cVar4 = cVar1 + -1;
    *(char *)(param_1 + 0xb4) = cVar4;
    if (cVar1 != '\x01') {
      uVar3 = *DAT_08087c9c * DAT_08087ca0 + DAT_08087ca4;
      *DAT_08087c9c = uVar3 & 0x7fffffff;
      uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 1;
      cVar4 = (char)uVar3;
      if (uVar3 != 0) {
        *(undefined1 *)(param_1 + 0x12) = 0x18;
        return in_lr;
      }
    }
    *(undefined1 *)(param_1 + 0xe) = 6;
    *(char *)(param_1 + 0xf) = cVar4;
  }
  return in_lr;
}


