// undefined FUN_080c48e0(void)
// entry 0x80c48e0


undefined4 FUN_080c48e0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar3 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xb9) = 1;
    FUN_08005784(param_1 + 0x74,DAT_080c4918);
    FUN_0801cc9c(param_1);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    FUN_0801cf00(param_1,DAT_080c4978);
    *(undefined4 *)(param_1 + 0x5c) = 0x140;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 0x5c) + -1;
  *(int *)(param_1 + 0x5c) = iVar2;
  if ((iVar2 == 0) || (1 < *(byte *)(iVar4 + 0xc))) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


