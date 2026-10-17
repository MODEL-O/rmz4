// undefined FUN_080efc48(void)
// entry 0x80efc48


undefined4 FUN_080efc48(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
LAB_080efcc8:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080efd3a;
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080efd3a;
      puVar4 = (ushort *)(DAT_080efcfc + 0xf6);
      *puVar4 = (ushort)DAT_080efd00;
      puVar5 = (ushort *)(DAT_080efd04 + 0xf6);
      *puVar5 = 6;
      FUN_08001d30(DAT_080efd08,
                   ((uint)*puVar4 - (uint)(*(ushort *)(DAT_080efd08 + 6) >> 6)) * 0x20 + 0x10000);
      FUN_08002208(DAT_080efd0c,((uint)*puVar5 - (uint)*(byte *)(DAT_080efd0c + 7)) * 0x20 + 0x200);
      FUN_0801cf00(param_1,0x7b00);
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
      uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
      goto LAB_080efcc8;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
      }
      goto LAB_080efd3a;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto LAB_080efd3a;
    FUN_0801cf00(param_1,DAT_080efd2c);
  }
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
LAB_080efd3a:
  FUN_0801cff0(param_1);
  return in_lr;
}


