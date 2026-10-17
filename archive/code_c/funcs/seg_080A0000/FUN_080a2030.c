// undefined FUN_080a2030(void)
// entry 0x80a2030


undefined4 FUN_080a2030(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080a2054);
    *(undefined4 *)(param_1 + 0x60) = DAT_080a2058;
    FUN_08002b10(DAT_080a205c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar2 < *(int *)(param_1 + 0xb8)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    }
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_08002b10(0x13e);
      uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      FUN_0801fe64(4,param_1 + 0x54);
    }
  }
  return in_lr;
}


