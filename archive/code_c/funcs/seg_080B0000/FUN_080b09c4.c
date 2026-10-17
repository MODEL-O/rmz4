// undefined FUN_080b09c4(void)
// entry 0x80b09c4


undefined4 FUN_080b09c4(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x54) + DAT_080b0a28;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xb4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    FUN_080b0c3c(param_1);
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 - 5;
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    iVar2 = *(int *)(param_1 + 0xb8) + *(short *)((bVar1 + 0x3b & 0xff) * 2 + DAT_080b0a2c) * -5;
    iVar4 = DAT_080b0a2c;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8) + *(short *)((bVar1 + 0x3b & 0xff) * 2 + DAT_080b0acc) * 5;
    iVar4 = DAT_080b0acc;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xbc) + *(short *)((uint)*(byte *)(param_1 + 0x13) * 2 + iVar4) * 5;
  FUN_080b0ccc(param_1);
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (((int)(uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xb7) >> *(sbyte *)(param_1 + 0x11) & 1U) ==
      0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b0ad0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


