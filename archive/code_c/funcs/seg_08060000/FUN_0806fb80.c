// undefined FUN_0806fb80(void)
// entry 0x806fb80


undefined4 FUN_0806fb80(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806fc00);
    FUN_0800249c(0x74,0x280);
    FUN_0800249c(0x95,0x2a0);
    FUN_0800249c(0x75,0x40);
    FUN_080025d8(0x74);
    FUN_080025d8(0x95);
    FUN_080025d8(0x75);
    FUN_08002624(0x74);
    FUN_08002624(0x95);
    FUN_08002624(0x75);
    FUN_08002b10(0x15e);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(DAT_0806fc04 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}


