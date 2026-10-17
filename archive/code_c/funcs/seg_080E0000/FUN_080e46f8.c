// undefined FUN_080e46f8(void)
// entry 0x80e46f8


undefined4 FUN_080e46f8(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(param_1 + 0x12) = 0x60;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if ((*(byte *)(param_1 + 0x12) >> 1 & 1) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      bVar1 = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    pbVar4 = (byte *)(param_1 + 0x4a);
    *pbVar4 = bVar1;
    if (*(byte *)(param_1 + 0x12) >> 1 < 2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined1 *)(param_1 + 0x4d) = 0;
      bVar1 = *pbVar4 & 0xdf;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined1 *)(param_1 + 0x4d) = 1;
      bVar1 = *pbVar4 & 0xdf | 0x20;
    }
    *pbVar4 = bVar1;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      FUN_0801cf00(param_1,DAT_080e47d0);
      FUN_0801cff0(param_1);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e47fc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080e429c(param_1);
  }
  return in_lr;
}


