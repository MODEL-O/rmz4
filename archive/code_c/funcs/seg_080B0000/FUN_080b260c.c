// undefined FUN_080b260c(void)
// entry 0x80b260c


undefined4 FUN_080b260c(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b266c + (uint)*(byte *)(param_1 + 0xb5) & 0xffff);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_080b2b94(param_1);
  cVar1 = FUN_080b2b20(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xf);
    *(undefined1 *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xb7) == '\x01') {
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
      *(char *)(param_1 + 0xb7) = '\0';
    }
  }
  return in_lr;
}


