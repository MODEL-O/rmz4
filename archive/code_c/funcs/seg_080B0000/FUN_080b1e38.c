// undefined FUN_080b1e38(void)
// entry 0x80b1e38


undefined4 FUN_080b1e38(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    bVar3 = ~(bVar1 >> 4) & 1;
    if (bVar3 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    FUN_0801cf00(param_1,0xc200);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x12);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = FUN_080b2158(param_1);
  if (cVar2 == '\0') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe);
  uVar4 = DAT_080b1ea0;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      bVar1 = *(byte *)(param_1 + 10);
      bVar3 = ~(bVar1 >> 4) & 1;
      if (bVar3 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
      goto LAB_080b1ef6;
    }
    if (cVar2 != '\x03') {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x13);
      return in_lr;
    }
    uVar4 = 0xc200;
  }
  FUN_0801cf00(param_1,uVar4);
LAB_080b1ef6:
  *(undefined1 *)(param_1 + 0x12) = 8;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


