// undefined FUN_0806fa6c(void)
// entry 0x806fa6c


undefined4 FUN_0806fa6c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x8d00);
    FUN_0800249c(0x72,0x280);
    FUN_0800249c(0x94,0x2a0);
    FUN_0800249c(0x73,0x40);
    FUN_0800249c(0xdb,0);
    FUN_080025d8(0x72);
    FUN_080025d8(0x94);
    FUN_080025d8(0x73);
    FUN_080025d8(0xdb);
    *(undefined1 *)(param_1 + 0xcd) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x80;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(int *)(DAT_0806fb00 + 0x38) + 0x800 <= *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x20;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    FUN_080025d8(0x72);
    FUN_080025d8(0x94);
    FUN_080025d8(0x73);
    FUN_080025d8(0xdb);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    FUN_08002624(0x72);
    FUN_08002624(0x94);
    FUN_08002624(0x73);
    FUN_08002624(0xdb);
    *(undefined1 *)(param_1 + 0xcd) = 0;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


