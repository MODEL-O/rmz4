// undefined FUN_080bc004(void)
// entry 0x80bc004


undefined4 FUN_080bc004(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = DAT_080bc08c[1];
  local_18 = *DAT_080bc08c;
  local_28[0] = *DAT_080bc090;
  local_28[1] = DAT_080bc090[1];
  local_28[2] = DAT_080bc090[2];
  local_28[3] = DAT_080bc090[3];
  uVar4 = (uint)*(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080bc094);
    *DAT_080bc098 = (short)DAT_080bc09c;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    FUN_0801ceec(param_1);
    *(undefined1 *)(param_1 + 0x22) = 0;
    FUN_0801cf00(param_1,(short)local_28[uVar4 + 4]);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_080bc0a0 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_28[uVar4 * 2];
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_28[uVar4 * 2 + 1];
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  *(ushort *)(DAT_080bc120 + 2) =
       0x10 - *(byte *)(param_1 + 0x12) & 0x1f | (ushort)*(byte *)(param_1 + 0x12) << 8;
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


