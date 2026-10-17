// undefined FUN_0805f360(void)
// entry 0x805f360


undefined4 FUN_0805f360(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*DAT_0805f3d0 == 0xb) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(int *)(param_1 + 0xc0) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      iVar6 = *DAT_0805f3d4;
      *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      uVar4 = DAT_0805f3f0;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar4 = 0x1c0;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      *(undefined4 *)(param_1 + 0x60) = DAT_0805f4ac;
      FUN_0801cf00(param_1,DAT_0805f4b0);
      FUN_08002b10(0x122);
      if (*(short *)(param_1 + 0xca) != 0) {
        FUN_08002b5c(0x5d);
        *(undefined2 *)(param_1 + 0xca) = 0;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      if (((*(ushort *)(DAT_0805f4b4 + 8) & 1) != 0) && ((*(byte *)(DAT_0805f4b4 + 0x12) & 1) == 0))
      {
        *(ushort *)(DAT_0805f4b4 + 8) = (ushort)DAT_0805f4b8 & *(ushort *)(DAT_0805f4b4 + 8) | 0x10;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      if ((*(char *)(param_1 + 0xd) == '\x01') &&
         (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == -1)) {
        *(byte *)(DAT_0805f4e8 + 0x12) = *(byte *)(DAT_0805f4e8 + 0x12) | 2;
        *(undefined1 *)(param_1 + 0xd) = 2;
      }
      goto LAB_0805f636;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar6 <= *(int *)(param_1 + 0xb8)) goto LAB_0805f636;
    FUN_0801cf00(param_1,DAT_0805f4bc);
    FUN_0801cff0(param_1);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0x12) = 0x80;
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(int *)(param_1 + 0xc0) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      iVar6 = *DAT_0805f54c;
      *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      FUN_0801cf00(param_1,DAT_0805f5f4);
      FUN_08002b10(DAT_0805f5f8);
      if (*(short *)(param_1 + 0xca) != 0) {
        FUN_08002b5c(0x5d);
        *(undefined2 *)(param_1 + 0xca) = 0;
      }
      *(undefined1 *)(param_1 + 0x12) = 0x40;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      if (((*(ushort *)(DAT_0805f5fc + 8) & 1) != 0) && ((*(byte *)(DAT_0805f5fc + 0x12) & 1) == 0))
      {
        *(ushort *)(DAT_0805f5fc + 8) = (ushort)DAT_0805f600 & *(ushort *)(DAT_0805f5fc + 8) | 0x10;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      if (*(char *)(param_1 + 0xd) == '\x01') {
        if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) goto LAB_0805f636;
        *(byte *)(DAT_0805f624 + 0x12) = *(byte *)(DAT_0805f624 + 0x12) | 2;
        *(undefined1 *)(param_1 + 0x12) = 0x20;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      goto LAB_0805f636;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) goto LAB_0805f636;
    local_14 = 0x600;
    local_10 = DAT_0805f604;
    uVar4 = FUN_080d296c(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
LAB_0805f636:
  iVar6 = DAT_0805f65c;
  iVar5 = *(int *)(DAT_0805f65c + 0x38) + DAT_0805f660;
  if (*(int *)(param_1 + 0x54) < iVar5) {
    *(int *)(param_1 + 0x54) = iVar5;
  }
  iVar6 = *(int *)(iVar6 + 0x38) + DAT_0805f664;
  if (iVar6 < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = iVar6;
  }
  return in_lr;
}


