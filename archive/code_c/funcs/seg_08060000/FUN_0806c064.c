// undefined FUN_0806c064(void)
// entry 0x806c064


undefined4 FUN_0806c064(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806c0a0);
    FUN_08002b10(0xd2);
    FUN_08005784(param_1 + 0x74,DAT_0806c0a4);
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    *(undefined4 *)(param_1 + 100) = 0x80;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x62;
    }
    else {
      uVar2 = 0x1e;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = DAT_0806c134;
  iVar3 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       (iVar3 * *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_0806c134) >> 8);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       (iVar3 * *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar1) >> 8);
  if (iVar3 <= DAT_0806c138) {
    *(int *)(param_1 + 0x5c) = iVar3 + *(int *)(param_1 + 100);
  }
  if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    FUN_08002b10(0xd3);
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + iVar1) *
         *(int *)(param_1 + 0x5c) >> 8;
    *(undefined1 *)(param_1 + 0xd) = 0x12;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


