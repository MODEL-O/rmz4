// undefined FUN_0806bb3c(void)
// entry 0x806bb3c


undefined4 FUN_0806bb3c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = DAT_0806bba8;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 1) goto LAB_0806bc2c;
    FUN_0801cf00(param_1,DAT_0806bbac);
    FUN_08005784(param_1 + 0x74,DAT_0806bbb0);
    FUN_08002b5c(200);
    *(undefined1 *)(param_1 + 0xd8) = 0;
    if (*(int *)(param_1 + 0x5c) < 1) {
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    FUN_0801cff0(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined1 *)(param_1 + 0xd) = 3;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      goto LAB_0806bc2c;
    }
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar2 <= *(int *)(param_1 + 0xb8)) goto LAB_0806bc2c;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    FUN_0801cf00(param_1,DAT_0806bc14);
    FUN_08002b10(0xd3);
    FUN_08005784(param_1 + 0x74,DAT_0806bc18);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0806bc2c:
  FUN_0801cff0(param_1);
  return in_lr;
}


