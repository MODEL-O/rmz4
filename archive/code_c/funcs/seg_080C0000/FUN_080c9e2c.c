// undefined FUN_080c9e2c(void)
// entry 0x80c9e2c


undefined4 FUN_080c9e2c(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c9e94,param_1 + 0x54,0x80);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = bVar1 & 0xfe;
  *(byte *)(param_1 + 10) = bVar2;
  if (*(byte *)(param_1 + 0xb7) == 0) {
    bVar1 = bVar1 & 0xee;
  }
  else {
    bVar1 = bVar2 | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0xb7) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xef | bVar1 << 4;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0xc4;
    *(undefined1 *)(param_1 + 0xb5) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,DAT_080c9ee8);
  }
  else if (*(char *)(param_1 + 0x11) == '\x03') {
    FUN_0801cf00(param_1,DAT_080c9f0c);
    bVar1 = *(byte *)(param_1 + 10);
    bVar2 = ~(bVar1 >> 4) & 1;
    if (bVar2 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar2;
    *pbVar3 = *pbVar3 & 0xef | bVar2 << 4;
  }
  else {
    FUN_0801cf00(param_1,DAT_080c9f64);
  }
  FUN_080ca2ec(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0x200;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0xb7) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


