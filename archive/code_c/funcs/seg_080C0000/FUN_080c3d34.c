// undefined FUN_080c3d34(void)
// entry 0x80c3d34


undefined4 FUN_080c3d34(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(byte *)(iVar3 + 0xc) < 2) {
      if (*(char *)(iVar3 + 0xd) == '\x02') {
        uVar2 = FUN_08128bdc((*(int *)(*DAT_080c3dd4 + 0x54) - *(int *)(param_1 + 0x54)) * 0x100 >>
                             0x10,(*(int *)(*DAT_080c3dd4 + 0x58) -
                                  (*(int *)(param_1 + 0x58) + 0x1400)) * 0x100 >> 0x10);
        iVar3 = DAT_080c3dd8;
        uVar2 = (uVar2 & 0xffff) >> 8;
        *(int *)(param_1 + 0x5c) = *(short *)((uVar2 + 0x40 & 0xff) * 2 + DAT_080c3dd8) * 0xb >> 2;
        *(int *)(param_1 + 0x60) = *(short *)(uVar2 * 2 + iVar3) * 0xb >> 2;
        *(undefined1 *)(param_1 + 0x12) = 0x40;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else {
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c3d68);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
      *(undefined1 *)(param_1 + 0x12) = 0x40;
      FUN_080c3e50(param_1);
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(char *)(param_1 + 0x12) == '\0') {
      uVar2 = FUN_0801fb14(DAT_080c3e48,param_1 + 0x54);
      if (0x1000 < uVar2) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c3e4c);
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
      }
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
  }
  return in_lr;
}


