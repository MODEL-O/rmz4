// undefined FUN_0807a138(void)
// entry 0x807a138


undefined4 FUN_0807a138(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0807a174);
    FUN_08002b10(0x150);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_0807a1e8)
       && (*(char *)(param_1 + 0x73) == '\x03')) {
      FUN_0801cf00(param_1,DAT_0807a1e8 - 2);
      FUN_0801cff0(param_1);
    }
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 8;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807a1a4);
    FUN_0801cff0(param_1);
    uVar3 = FUN_080ae098(param_1,0,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


