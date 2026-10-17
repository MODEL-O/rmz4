// undefined FUN_080a5e04(void)
// entry 0x80a5e04


undefined4 FUN_080a5e04(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_08002b10(0x2c);
        FUN_0801cf00(param_1,DAT_080a5ed0);
        cVar2 = FUN_0810d398(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                             *(undefined4 *)(*DAT_080a5ed4 + 0x54),
                             *(int *)(*DAT_080a5ed4 + 0x58) + DAT_080a5ed8);
        FUN_080bd4d4(param_1 + 0x54,0x280,cVar2 + -0x80);
        *(undefined1 *)(param_1 + 0x12) = 0x18;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      FUN_0801cff0(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_080a5e60);
    FUN_0801cf00(param_1,DAT_080a5e64);
    FUN_0801d3d0(param_1,5);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}


