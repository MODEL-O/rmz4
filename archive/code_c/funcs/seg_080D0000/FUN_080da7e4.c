// undefined FUN_080da7e4(void)
// entry 0x80da7e4


undefined4 FUN_080da7e4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    uVar5 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)uVar5;
    iVar2 = DAT_080da8b8;
    if ((*(byte *)(iVar4 + 0xb6) & 2) != 0) {
      if (*(int *)(iVar4 + 0x58) + 0xa800 < *(int *)(iVar4 + 0xbc) + DAT_080da8b4) {
        if (*(int *)(iVar4 + 0xb8) + DAT_080da8b8 <= *(int *)(iVar4 + 0x58)) {
          iVar3 = (uint)*(byte *)(param_1 + 0x11) * 2;
          local_28 = *(int *)(iVar4 + 0x54) + (iVar3 + -1) * 0x3400;
          *(int *)(param_1 + 0x54) = local_28;
          if ((uVar5 & 7) == 0) {
            local_24 = FUN_08008534(local_28,*(undefined4 *)(param_1 + 0x58));
            iVar2 = (*(int *)(iVar4 + 0xbc) + DAT_080da8b4) - (*(int *)(iVar4 + 0xb8) + iVar2);
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar4 = local_24 - *(int *)(iVar4 + 0x58);
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            else if (iVar2 < iVar4) {
              iVar4 = iVar2;
            }
            iVar4 = FUN_08128fb8(iVar4 << 9);
            FUN_080da994(&local_28,(iVar3 + -1) * (0x300 - iVar4),
                         uVar5 + ((uVar5 & 0xff) >> 3 & 1) & 0xff);
          }
        }
      }
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da818);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080da93c(param_1);
  }
  return in_lr;
}


