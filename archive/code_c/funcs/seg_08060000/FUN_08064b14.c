// undefined FUN_08064b14(void)
// entry 0x8064b14


undefined4 FUN_08064b14(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_38[0] = *DAT_08064c58;
  local_38[1] = DAT_08064c58[1];
  local_38[2] = DAT_08064c58[2];
  local_38[3] = *DAT_08064c5c;
  uStack_28 = DAT_08064c5c[1];
  uStack_24 = DAT_08064c5c[2];
  iVar4 = FUN_08066160(param_1,&stack0xffffffe0);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08065a94(param_1,0);
    bVar1 = *(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xd4) + 0x8800;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(uint *)(param_1 + 0x68) = ((uint)bVar1 * 2 + -1) * local_38[iVar4 + 3];
    *(int *)(param_1 + 0xdc) = local_38[iVar4];
    *(bool *)(param_1 + 0x13) = bVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar2 = *(byte *)(param_1 + 0x13);
  iVar7 = (uint)bVar2 * 2 + -1;
  iVar4 = *(int *)(param_1 + 0xd4) + iVar7 * 0x1800 + 0x8800;
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08064c64) * 4 +
                               DAT_08064c60)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08064c68))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  pcVar5 = (char *)(param_1 + 0xe0);
  if (*pcVar5 != '\0') {
    *pcVar5 = *pcVar5 + -1;
  }
  iVar8 = *(int *)(param_1 + 0x60);
  iVar3 = -*(int *)(param_1 + 0x68);
  iVar6 = FUN_08128fb8(-iVar8,iVar3);
  if (-1 < ((*(int *)(param_1 + 0x58) + ((iVar8 * 2 + iVar3 * iVar6) * (iVar6 + 1) >> 1)) - iVar4) *
           iVar7) {
    *(int *)(param_1 + 0x68) = iVar3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
  iVar8 = iVar8 + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar8;
  if (iVar8 < 0) {
    iVar7 = -*(int *)(param_1 + 0xdc);
    if (iVar7 <= iVar8) goto LAB_08064c7c;
  }
  else if ((iVar8 < 1) || (iVar7 = *(int *)(param_1 + 0xdc), iVar8 <= iVar7)) goto LAB_08064c7c;
  *(int *)(param_1 + 0x60) = iVar7;
LAB_08064c7c:
  if (-1 < (int)(((uint)bVar2 * 2 + -1) * (*(int *)(param_1 + 0x58) - iVar4))) {
    *(int *)(param_1 + 0x58) = iVar4;
    *(byte *)(param_1 + 0x13) = bVar2 + 1 & 1;
  }
  if (*pcVar5 == '\0') {
    FUN_08065b08(param_1);
  }
  return in_lr;
}


