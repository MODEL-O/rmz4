// undefined FUN_0809de4c(void)
// entry 0x809de4c


undefined4 FUN_0809de4c(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x6e00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xf);
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if (((*(char *)(param_1 + 0xbd) == '\0') && (cVar1 = FUN_0809e124(param_1), cVar1 != '\x01')) &&
       (*(char *)(param_1 + 0x12) == '\x19')) {
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
      FUN_0809e1d0(param_1);
    }
  }
  return in_lr;
}


