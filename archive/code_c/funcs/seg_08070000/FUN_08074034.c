// undefined FUN_08074034(void)
// entry 0x8074034


undefined4 FUN_08074034(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((*(ushort *)(DAT_08074078 + 8) & 8) != 0)) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar2 = FUN_0802adac(0x18,param_1,DAT_080740e4);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
    }
    if ((*(int *)(param_1 + 0x2c) != 0) && (iVar3 = FUN_0802b3e4(), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if ((int)(*(int *)(param_1 + 0xb4) + (uint)*(byte *)(param_1 + 0xe3) * 0xc00 + DAT_080740e8) <
        *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x40;
    }
    if ((*(char *)(param_1 + 0xd) == '\x06') || (*(byte *)(param_1 + 0xe3) != 0)) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08074104));
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 6;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0807407c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08074108(param_1);
  }
  return in_lr;
}


