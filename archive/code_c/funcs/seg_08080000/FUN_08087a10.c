// undefined FUN_08087a10(void)
// entry 0x8087a10


undefined4 FUN_08087a10(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  bVar2 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08087a94);
    FUN_0801cf00(param_1,DAT_08087a98);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    FUN_08002b10(0x2c);
    local_14 = *(int *)(param_1 + 0x54) + ((bVar2 >> 4 & 1) * 2 + -1) * 0xe00;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    bVar2 = FUN_0810d398(*(undefined4 *)(*DAT_08087a9c + 0x54),
                         *(int *)(*DAT_08087a9c + 0x58) + DAT_08087aa0);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      bVar2 = bVar2 + 0x80;
    }
    if (bVar2 < 0x70) {
      bVar2 = 0x70;
    }
    else if (0x90 < bVar2) {
      bVar2 = 0x90;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      bVar2 = bVar2 + 0x80;
    }
    FUN_080bd43c(&local_14,0x180,bVar2);
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


