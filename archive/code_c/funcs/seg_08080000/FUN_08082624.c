// undefined FUN_08082624(void)
// entry 0x8082624


undefined4 FUN_08082624(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0808268c);
    *(undefined1 *)(param_1 + 0x12) = 0x15;
    uVar6 = DAT_08082690;
    *(undefined4 *)(param_1 + 0x5c) = DAT_08082690;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar6 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    uVar6 = DAT_08082694;
    *(undefined4 *)(param_1 + 0x60) = DAT_08082694;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar6 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar3 = FUN_0808368c(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    if ((uVar3 & 2) != 0) {
      bVar2 = *(byte *)(param_1 + 10);
      bVar5 = ~(bVar2 >> 4) & 1;
      if (bVar5 == 0) {
        bVar2 = bVar2 & 0xef;
      }
      else {
        bVar2 = bVar2 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(byte *)(param_1 + 0x4c) = bVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
    iVar4 = *(int *)(param_1 + 0xc0) + -1;
    *(int *)(param_1 + 0xc0) = iVar4;
    if (iVar4 < 10) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      FUN_08005784(param_1 + 0x74,DAT_08082698);
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


