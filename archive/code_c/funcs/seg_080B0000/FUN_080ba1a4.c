// undefined FUN_080ba1a4(void)
// entry 0x80ba1a4


undefined4 FUN_080ba1a4(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080ba20c);
    *DAT_080ba210 = (short)DAT_080ba214;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    FUN_0801ceec(param_1);
    FUN_0801cf00(param_1,0xbf00);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    bVar1 = *(int *)(param_1 + 0x54) <= *(int *)(iVar4 + 0xb4) + 0x7800;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0xb8) + DAT_080ba284;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  *(ushort *)(DAT_080ba288 + 2) =
       0x10 - *(byte *)(param_1 + 0x12) & 0x1f | (ushort)*(byte *)(param_1 + 0x12) << 8;
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


