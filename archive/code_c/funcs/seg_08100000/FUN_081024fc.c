// undefined FUN_081024fc(void)
// entry 0x81024fc


undefined4 FUN_081024fc(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(param_1 + 0xbe));
    uVar3 = *DAT_08102554 * DAT_08102558 + DAT_0810255c;
    *DAT_08102554 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar3 >> 0x10) & 0x3f) + 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
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
    iVar4 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


