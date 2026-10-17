// undefined FUN_080b31d4(void)
// entry 0x80b31d4


undefined4 FUN_080b31d4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  char acStack_10 [4];
  
  FUN_08129258(acStack_10,DAT_080b3200,4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      iVar1 = *(int *)(param_1 + 0x54) + DAT_080b3204;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54) + 0x1600;
    }
    *(int *)(param_1 + 0xb8) = iVar1;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) == '\0') || (*(char *)(param_1 + 0x12) == -1)) {
    FUN_080b37b8(param_1);
  }
  *(char *)(param_1 + 0x12) =
       acStack_10[(uint)*(byte *)(param_1 + 0xf) * 2] + *(char *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080b3654(param_1);
  }
  else {
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + -1;
  }
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    iVar2 = *(int *)(param_1 + 0xb8) +
            *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_080b3288) * -0x16;
    iVar1 = DAT_080b3288;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8) +
            *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_080b32cc) * 0x16;
    iVar1 = DAT_080b32cc;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xbc) + *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar1) * 0x16;
  return in_lr;
}


