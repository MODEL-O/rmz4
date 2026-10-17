// undefined FUN_08085bfc(void)
// entry 0x8085bfc


undefined4 FUN_08085bfc(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08085c40);
    FUN_0801cf00(param_1,DAT_08085c44);
    bVar1 = 0 < *(int *)(*DAT_08085c48 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\x1e') {
    uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_14 = uVar5 * 0xc00 + *(int *)(param_1 + 0x54) + DAT_08085cf0;
    local_10 = *(int *)(param_1 + 0x58) + DAT_08085cf4;
    FUN_08002b10(0x2c);
    FUN_080bd43c(&local_14,0x200,uVar5 * 0x80);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  uVar4 = FUN_08008aa4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  FUN_08085418(param_1,uVar4,0x800);
  FUN_0801cff0(param_1);
  return in_lr;
}


