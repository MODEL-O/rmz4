// undefined FUN_08088294(void)
// entry 0x8088294


undefined4 FUN_08088294(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080882e4);
    FUN_0801cf00(param_1,DAT_080882e8);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    uVar3 = FUN_0801fb14(DAT_080882ec,param_1 + 0x54);
    if (uVar3 < 0x4001) {
      uVar2 = 10;
    }
    else {
      uVar2 = 8;
    }
    *(undefined1 *)(param_1 + 0xd) = uVar2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


