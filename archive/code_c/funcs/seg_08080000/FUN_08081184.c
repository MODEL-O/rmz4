// undefined FUN_08081184(void)
// entry 0x8081184


undefined8 FUN_08081184(int param_1)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 in_lr;
  char acStack_54 [56];
  
  piVar1 = DAT_08081200;
  iVar4 = *DAT_08081200;
  FUN_08129258(acStack_54,DAT_08081204,0x38);
  if (((iVar4 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) ||
     ((int)(short)acStack_54[(uint)*(byte *)(param_1 + 0x70) * 8 + (uint)*(byte *)(param_1 + 0x71)]
      == 0x7f)) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0xb6) = 0;
    *(undefined1 *)(param_1 + 0xb5) = 0;
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    uVar5 = 0;
  }
  else {
    pbVar6 = (byte *)(param_1 + 0xb5);
    piVar8 = (int *)(param_1 + 0xb8);
    piVar9 = (int *)(param_1 + 0xbc);
    sVar3 = (short)(((int)(short)acStack_54
                                 [(uint)*(byte *)(param_1 + 0x70) * 8 +
                                  (uint)*(byte *)(param_1 + 0x71)] & 0xffU) << 8);
    if (*pbVar6 == 0) {
      *pbVar6 = 1;
      iVar7 = *piVar1;
      *piVar8 = *(int *)(iVar7 + 0x54) - *(int *)(param_1 + 0x54);
      *piVar9 = *(int *)(iVar7 + 0x58) - (*(int *)(param_1 + 0x58) + (int)sVar3);
      if (*piVar8 < DAT_08081250) {
        *piVar8 = DAT_08081250;
      }
      else if (0x800 < *piVar8) {
        *piVar8 = 0x800;
      }
      iVar7 = DAT_08081284;
      if ((*piVar9 < DAT_08081284) || (iVar7 = 0x400, 0x400 < *piVar9)) {
        *piVar9 = iVar7;
      }
      iVar7 = *(int *)(*DAT_08081288 + 0x54);
      if (iVar7 < *(int *)(param_1 + 0xc0)) {
        bVar2 = 1;
      }
      else if (*(int *)(param_1 + 0xc0) < iVar7) {
        bVar2 = 0;
      }
      else {
        bVar2 = (*(byte *)(*DAT_08081288 + 10) >> 4 ^ 1) & 1;
      }
      *(byte *)(param_1 + 0xb6) = bVar2;
      FUN_08005784(param_1 + 0x74,
                   *(undefined4 *)
                    (*(char *)(param_1 + 0x71) * 4 +
                    *(int *)((uint)*pbVar6 * 4 +
                             ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                             *(undefined1 *)(param_1 + 0x70)) + DAT_08081330) * 8 +
                            DAT_0808132c)));
      *(undefined1 *)(param_1 + 0x25) = 0xf;
    }
    *(undefined1 *)(DAT_08081334 + iVar4) = 1;
    *(undefined1 *)(iVar4 + 0x172) = 0;
    *(undefined4 *)(iVar4 + 0x60) = 0;
    *(int *)(iVar4 + 0x54) = *(int *)(param_1 + 0x54) + *piVar8;
    *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + *piVar9 + (int)sVar3;
    uVar5 = 1;
  }
  return CONCAT44(in_lr,uVar5);
}


