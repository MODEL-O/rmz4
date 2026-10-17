// undefined FUN_080b3a1c(void)
// entry 0x80b3a1c


undefined4 FUN_080b3a1c(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b3a48);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xb5) == '\0') {
    FUN_0801d1f4(param_1);
  }
  else {
    FUN_0801cff0(param_1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080b3aa8,param_1 + 0x54,0x14);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080b3aac;
    cVar1 = FUN_080b3e38(param_1);
    if (cVar1 == '\x01') {
      bVar2 = *(byte *)(param_1 + 10);
      bVar3 = ~(bVar2 >> 4) & 1;
      if (bVar3 == 0) {
        bVar2 = bVar2 & 0xef;
      }
      else {
        bVar2 = bVar2 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(byte *)(param_1 + 0x4c) = bVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


