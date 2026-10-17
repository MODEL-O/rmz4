// undefined FUN_080bcee0(void)
// entry 0x80bcee0


undefined4 FUN_080bcee0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4) + DAT_080bcf34) ||
     (*(char *)(param_1 + 0xbd) != '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bcf38);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  else if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_0801cff0(param_1);
    if (*(int *)(DAT_080bcfc4 + 0x14) == 0) {
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if ((0 < iVar2) && (*(int *)(param_1 + 0xb8) < iVar3)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar2 = FUN_08128fb8(iVar2 * 4,6);
      }
      else {
        iVar2 = iVar2 / 2;
      }
      *(int *)(param_1 + 0x60) = -iVar2;
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bcf68);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080bcfd8(param_1);
  }
  return in_lr;
}


