// undefined FUN_080d06d0(void)
// entry 0x80d06d0


undefined4 FUN_080d06d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x71) == '\x05') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    iVar1 = DAT_080d0784;
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)(((uint)*(byte *)(param_1 + 0x10) * 0x20000000 + 0x40000000 >> 0x17) +
                        DAT_080d0784) / 2;
    *(int *)(param_1 + 0x60) = (int)*(short *)((*(byte *)(param_1 + 0x10) & 7) * 0x40 + iVar1) / 2;
  }
  if (**(ushort **)(param_1 + 0x28) >> 8 == 0xff) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d0788);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


