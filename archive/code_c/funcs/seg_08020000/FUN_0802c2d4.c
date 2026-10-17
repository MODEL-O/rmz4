// undefined FUN_0802c2d4(void)
// entry 0x802c2d4


undefined8 FUN_0802c2d4(int param_1,short *param_2,char param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  uint local_24 [3];
  
  iVar7 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  iVar9 = iVar7 + 1;
  if (param_3 == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_24[2] = *(int *)(param_1 + 0x54);
      iVar8 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
      local_24[0] = (local_24[2] + (int)*param_2) - iVar8;
      iVar4 = local_24[2] + (int)*param_2;
    }
    else {
      local_24[2] = *(int *)(param_1 + 0x54);
      iVar8 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
      local_24[0] = (local_24[2] - (int)*param_2) - iVar8;
      iVar4 = local_24[2] - (int)*param_2;
    }
    local_24[1] = iVar4 + iVar8;
    if (*(char *)(param_1 + 0x1b8) != '\0') {
      uVar3 = 0;
      do {
        uVar5 = FUN_0802e058(param_1,local_24[uVar3],iVar9);
        uVar6 = uVar5 & 0xffff;
        if ((uVar6 != 0) && ((uVar5 & 0xf) != 0xf)) goto LAB_0802c4ec;
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 3);
    }
    uVar3 = 0;
    do {
      uVar5 = FUN_08007d28(local_24[uVar3],iVar7);
      uVar6 = uVar5 & 0xffff;
      if ((uVar5 & 0x400) != 0) goto LAB_0802c4ec;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 2);
    iVar4 = FUN_08007e98(local_24[2],iVar9);
    if (iVar4 < 0) {
      uVar3 = FUN_08007d28(local_24[2],iVar9);
      goto joined_r0x0802c3e0;
    }
    uVar1 = FUN_08007020(local_24[0],iVar9);
    uVar6 = (uint)uVar1;
    if (uVar6 != 0) {
      uVar1 = uVar1 & 0xf;
      if (uVar1 == 1) goto LAB_0802c4ec;
      sVar2 = FUN_08007d28(local_24[2],iVar9);
      if (sVar2 == 0) {
        if ((ushort)(uVar1 - 2) < 6) {
          sVar2 = FUN_08007020(local_24[0] + 0x1000,iVar9);
          if ((sVar2 == 0) &&
             (iVar4 = FUN_08007e98((local_24[0] & DAT_0802c444) + DAT_0802c448,iVar9), iVar4 < 1))
          goto LAB_0802c4ec;
        }
        else if (((ushort)(uVar1 - 8) < 6) &&
                (iVar4 = FUN_08007e98((local_24[0] & DAT_0802c4c4) + DAT_0802c4c8,iVar7 + 0x501),
                iVar4 < 0)) goto LAB_0802c4ec;
      }
    }
    uVar1 = FUN_08007020(local_24[1],iVar9);
    uVar6 = (uint)uVar1;
    if (uVar6 != 0) {
      uVar1 = uVar1 & 0xf;
      if (uVar1 == 1) goto LAB_0802c4ec;
      sVar2 = FUN_08007d28(local_24[2],iVar9);
      uVar3 = DAT_0802c4c4;
      if (sVar2 == 0) {
        if ((ushort)(uVar1 - 8) < 6) {
          sVar2 = FUN_08007020(local_24[1] + DAT_0802c4c4,iVar9);
          if ((sVar2 == 0) && (iVar7 = FUN_08007e98(local_24[1] & uVar3,iVar9), iVar7 < 1))
          goto LAB_0802c4ec;
        }
        else if (((ushort)(uVar1 - 2) < 6) &&
                (iVar7 = FUN_08007e98(local_24[1] & DAT_0802c4f8,iVar7 + 0x501), iVar7 < 0))
        goto LAB_0802c4ec;
      }
    }
  }
  else {
    uVar3 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),iVar9);
    if ((uVar3 & 0x8000) == 0) {
joined_r0x0802c3e0:
      uVar6 = uVar3 & 0xffff;
      if ((uVar3 & 0xf) != 0xf) goto LAB_0802c4ec;
    }
  }
  uVar6 = 0;
LAB_0802c4ec:
  return CONCAT44(in_lr,uVar6);
}


