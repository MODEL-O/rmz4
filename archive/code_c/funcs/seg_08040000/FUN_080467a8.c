// undefined FUN_080467a8(void)
// entry 0x80467a8


undefined4 FUN_080467a8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  FUN_0801d134();
  if (*(byte *)(param_1 + 0xe) < 2) {
    if ((*(byte *)(param_1 + 0xe) == 1) && (*(byte *)(param_1 + 0x11) < 4)) {
      FUN_08046274(*(undefined4 *)(param_1 + 0x2c),param_1,*(byte *)(param_1 + 0x11) + 1);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (1 < *(byte *)(iVar2 + 0xc)) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0xb8);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080467f0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  return in_lr;
}


