// undefined FUN_080a63b8(void)
// entry 0x80a63b8


undefined4 FUN_080a63b8(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = FUN_080a66b4(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
      cVar1 = '\0';
      goto LAB_080a646a;
    }
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
    FUN_0801cf00(param_1,DAT_080a6410);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\x02') {
    cVar1 = '\0';
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
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
    FUN_0801cf00(param_1,DAT_080a6474);
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_080a646a:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}


