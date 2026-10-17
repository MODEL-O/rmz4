// undefined FUN_08103ef4(void)
// entry 0x8103ef4


undefined4 FUN_08103ef4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08103f68);
    iVar2 = DAT_08103f70;
    iVar1 = DAT_08103f6c;
    *(undefined4 *)(DAT_08103f6c + DAT_08103f70) = 0;
    *(undefined4 *)(iVar1 + iVar2 + 4) = 0;
    *(undefined4 *)(iVar1 + DAT_08103f74) = 0x3c0000;
    *(undefined4 *)(iVar1 + DAT_08103f78) = 0x280000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) ||
     ((*(uint *)(*DAT_08103f7c + 0xc) & DAT_08103f80) != 0)) {
LAB_08103fbc:
    FUN_0801cff0(param_1);
    if (*(short *)(param_1 + 0xb4) == 0x1ae) {
      FUN_08002b10(0x19e);
      *(short *)(param_1 + 0xb4) = 0x19e;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x11) == 0) || ((*(ushort *)(DAT_08103f84 + 4) & 0x40) == 0)) {
      if ((3 < *(byte *)(param_1 + 0x11)) || ((*(ushort *)(DAT_08103fb8 + 4) & 0x80) == 0))
      goto LAB_08103fbc;
      *(undefined4 *)(param_1 + 0x60) = 0x200;
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = DAT_08103f88;
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    FUN_08103e54(param_1);
  }
  return in_lr;
}


