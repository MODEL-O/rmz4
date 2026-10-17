// undefined FUN_0800e788(void)
// entry 0x800e788


void FUN_0800e788(int param_1)

{
  ushort uVar1;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = *(byte *)(DAT_0800e820 + 9) & 0x20;
    if ((*(byte *)(DAT_0800e820 + 9) & 0x20) != 0) {
      FUN_080074c0(2,3,0x4b);
      FUN_080074c0(2,4,0x5b);
      FUN_080074c0(1,3,0x4a);
      FUN_080074c0(1,4,0x5a);
      uVar1 = 1;
    }
    *(ushort *)(param_1 + 0x10) = uVar1;
    *(int *)DAT_0800e824 = 0x38000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(short *)(param_1 + 0x10) == 0) && ((*(byte *)(DAT_0800e820 + 9) & 0x20) != 0)) {
    FUN_080074c0(2,3,0x4b);
    FUN_080074c0(2,4,0x5b);
    FUN_080074c0(1,3,0x4a);
    FUN_080074c0(1,4,0x5a);
    *(undefined2 *)(param_1 + 0x10) = 1;
  }
  return;
}


