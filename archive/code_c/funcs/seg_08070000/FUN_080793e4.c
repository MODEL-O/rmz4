// undefined FUN_080793e4(void)
// entry 0x80793e4


undefined4 FUN_080793e4(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((*(ushort *)(DAT_0807942c + 8) & 8) != 0)) {
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    if ((*(int *)(param_1 + 200) != 0) && (1 < *(byte *)(*(int *)(param_1 + 200) + 0xc))) {
      *(undefined4 *)(param_1 + 200) = 0;
    }
    if ((*(int *)(param_1 + 0xcc) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0xcc) + 0xc))) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080794c4));
    if (*(char *)(param_1 + 0xd) != '\0') {
      pbVar2 = (byte *)(param_1 + 0xd5);
      if (*pbVar2 != 0) {
        *(int *)(param_1 + 0x58) =
             *(int *)(param_1 + 0xb8) + *(short *)((uint)*pbVar2 * 2 + DAT_080794c8) * 4;
      }
      *pbVar2 = *pbVar2 + 1;
      local_14 = *(int *)(param_1 + 0x54) + DAT_080794cc;
      local_10 = *(int *)(param_1 + 0x58) + 0xb900;
      FUN_0801c550(&local_14);
      *(undefined1 *)(param_1 + 0xd7) = 0;
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08079430);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080794d0(param_1);
  }
  return in_lr;
}


