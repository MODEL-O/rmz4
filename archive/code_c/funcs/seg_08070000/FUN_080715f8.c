// undefined FUN_080715f8(void)
// entry 0x80715f8


undefined4 FUN_080715f8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  short asStack_20 [4];
  short asStack_18 [4];
  
  FUN_08129258(asStack_20,DAT_080716c0,6);
  FUN_08129258(asStack_18,DAT_080716c4,6);
  bVar1 = *(byte *)(param_1 + 0xc3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080736c4(param_1,5);
    *(int *)(param_1 + 0x60) = -(int)asStack_20[bVar1];
    *(int *)(param_1 + 0x68) = (int)asStack_18[bVar1];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_080716cc) * 4 +
                               DAT_080716c8)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_080716d0))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = FUN_080737e8(param_1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      FUN_080739cc(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    FUN_08073a68(param_1);
  }
  iVar2 = FUN_08128fb8(-*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (iVar2 + 1 < 0x11) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


