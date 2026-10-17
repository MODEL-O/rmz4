// undefined FUN_0806c350(void)
// entry 0x806c350


undefined4 FUN_0806c350(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806c400);
    FUN_08002b10(0xc6);
    FUN_08001d30(DAT_0806c404,
                 ((uint)*(ushort *)(DAT_0806c408 + 0xfa) -
                 (uint)(*(ushort *)(DAT_0806c404 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0806c40c,
                 ((uint)*(ushort *)(DAT_0806c410 + 0xfa) - (uint)*(byte *)(DAT_0806c40c + 7)) * 0x20
                 + 0x200);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_0806c414);
    if (*(int *)(*DAT_0806c418 + 0x54) < *(int *)(param_1 + 0xc4)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xcc) - (*(int *)(param_1 + 0x54) + 0x2000);
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 200) - (*(int *)(param_1 + 0x54) + DAT_0806c454)
      ;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    uVar2 = FUN_08128fb8(*(int *)(param_1 + 0x5c) >> 1,0x18);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = DAT_0806c458;
  }
  else if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < 1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0806c488);
    FUN_0801cff0(param_1);
  }
  else {
    if (cVar1 != '\x02') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 0x17;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar3 <= *(int *)(param_1 + 0xb8)) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0806c4d8);
    FUN_08002b10(0xd3);
    FUN_0801cff0(param_1);
    FUN_08005784(param_1 + 0x74,DAT_0806c4dc);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


