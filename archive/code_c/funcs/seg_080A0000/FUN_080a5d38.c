// undefined FUN_080a5d38(void)
// entry 0x80a5d38


undefined4 FUN_080a5d38(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_08002b10(0x138);
        FUN_0801cf00(param_1,DAT_080a5e00);
        FUN_080e2064(param_1 + 0x54,0,0);
        uVar3 = 0;
        do {
          FUN_080bd94c(uVar4,param_1 + 0x54,1,uVar3 & 0xff);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 6);
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
    FUN_08005784(param_1 + 0x74,DAT_080a5d98);
    FUN_0801cf00(param_1,DAT_080a5d9c);
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


