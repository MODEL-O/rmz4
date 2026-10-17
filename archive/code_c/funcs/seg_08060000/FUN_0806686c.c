// undefined FUN_0806686c(void)
// entry 0x806686c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0806686c(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar5 = *DAT_080668b8;
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((*(ushort *)(DAT_080668bc + 8) & 8) == 0)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080668c0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080669ec(param_1);
    goto LAB_080669e2;
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar3 = FUN_0802adac(0x11,param_1,0x885b5ec);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
    }
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
      if (*(char *)((uint)*(byte *)(param_1 + 0xd) + iRam080669b0) != '\0') {
        *(undefined1 *)(param_1 + 0xd) = 0x29;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      goto LAB_080668fe;
    }
  }
  else {
LAB_080668fe:
    iVar4 = FUN_0802b3e4(iVar4);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  if ((*(int *)(param_1 + 200) != 0) && (1 < *(byte *)(*(int *)(param_1 + 200) + 0xc))) {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (1 < *(byte *)(param_1 + 0xd)) {
    iVar4 = *(int *)(param_1 + 0xbc) + 0x2800;
    if (*(int *)(param_1 + 0x54) < iVar4) {
      *(int *)(param_1 + 0x54) = iVar4;
    }
    iVar4 = *(int *)(param_1 + 0xc0) + -0x2800;
    if (iVar4 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar4;
    }
  }
  if ((((DAT_0202cac0 & 0x10) != 0) && ((DAT_0202e8b4 & 4) == 0)) || (_DAT_0202e910 == 0x10)) {
    if (*(int *)(iVar5 + 0xec) == 0) {
      *(undefined1 *)(param_1 + 0xde) = 0;
    }
    else if (((*(char *)(iVar5 + 0x1b9) != '\0') &&
             (bVar1 = *(byte *)(param_1 + 0xde) + 1, *(byte *)(param_1 + 0xde) = bVar1,
             (bVar1 & 0x1f) == 0)) && (bVar1 = FUN_0802b6b0(iVar5,0), bVar1 < 0xf0)) {
      FUN_080dec78(iVar5,param_1);
    }
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080669e8));
LAB_080669e2:
                    /* WARNING: Could not recover jumptable at 0x080669e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


