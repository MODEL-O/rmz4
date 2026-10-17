// undefined FUN_080b38b0(void)
// entry 0x80b38b0


undefined4 FUN_080b38b0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    FUN_080b3d68(param_1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b3908));
    }
    else {
      FUN_080b3dbc(param_1);
    }
    if (*(char *)(param_1 + 0xd) != '\0') {
      FUN_0801cff0(param_1);
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b38e4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080b3924(param_1);
  }
  return in_lr;
}


