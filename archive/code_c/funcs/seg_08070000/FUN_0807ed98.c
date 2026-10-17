// undefined FUN_0807ed98(void)
// entry 0x807ed98


undefined4 FUN_0807ed98(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((*(ushort *)(DAT_0807eddc + 8) & 8) == 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0807ede0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0807ee80(param_1);
    return in_lr;
  }
  if (*(int *)(param_1 + 0xcc) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar2 = FUN_0802adac(0x1d,param_1,DAT_0807ee78);
      *(undefined4 *)(param_1 + 0xcc) = uVar2;
    }
    if (*(int *)(param_1 + 0xcc) == 0) goto LAB_0807ee1c;
  }
  iVar3 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xcc));
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
LAB_0807ee1c:
  uVar4 = 0;
  piVar1 = (int *)(param_1 + 0xbc);
  do {
    if ((*piVar1 != 0) && (1 < *(byte *)(*piVar1 + 0xc))) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  FUN_0807f7cc(param_1,0,1);
  FUN_0807f7cc(param_1,0,3);
  FUN_0807f7cc(param_1,2,1);
  FUN_0807f7cc(param_1,2,3);
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807ee7c));
  return in_lr;
}


