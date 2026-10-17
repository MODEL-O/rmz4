// undefined FUN_080c1500(void)
// entry 0x80c1500


undefined4 FUN_080c1500(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  byte abStack_c [4];
  
  FUN_081292b8(abStack_c,0,2);
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(int *)(DAT_080c1580 + 0x3c) + DAT_080c1584 < *(int *)(param_1 + 0x58)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c1588);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    }
    else if ((*(char *)(*(int *)(param_1 + 0x28) + 200) == '\0') ||
            (FUN_08005784(param_1 + 0x74,
                          (uint)abStack_c[*(byte *)(param_1 + 0xb4)] * 0x18 + DAT_080c15d0),
            *(char *)(param_1 + 0xd) == '\x03')) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080c15d4));
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c1534);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080c1934(param_1);
  }
  return in_lr;
}


