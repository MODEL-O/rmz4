// undefined FUN_08060f68(void)
// entry 0x8060f68


undefined4 FUN_08060f68(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0x1b;
    FUN_0801cf00(param_1,DAT_08060fb8);
    *(undefined4 *)(param_1 + 0x60) = DAT_08060fbc;
    iVar4 = *(int *)(DAT_08060fc4 + 0x38);
    if (*(int *)(*DAT_08060fc0 + 0x54) < iVar4) {
      iVar2 = *(int *)(param_1 + 0x54) + DAT_08060fc8;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) + 0x6800;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = FUN_08128fb8(iVar4 - iVar2,0x28);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(char *)(param_1 + 0xce) = *(char *)(param_1 + 0xce) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) != '\0') {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0 < iVar4) {
      *(undefined1 *)(param_1 + 0xd) = 0x1c;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


