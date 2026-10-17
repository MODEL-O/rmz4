// undefined FUN_08076568(void)
// entry 0x8076568


undefined4 FUN_08076568(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 in_lr;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  byte *local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  
  if ((*(char *)(param_1 + 0xdd) == '\0') && (*DAT_0807658c != 0x10)) {
    iVar13 = 0;
  }
  else {
    iVar13 = 1;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080765e0);
    FUN_08002b10(0xdb);
    FUN_08005784(param_1 + 0x74,DAT_080765e4);
    if (*DAT_080765e8 == 3) {
      iVar5 = FUN_080dad0c(param_1 + 0x54,0,0x91);
      *(int *)(param_1 + 0xc0) = iVar5;
      *(undefined1 *)(iVar5 + 0x78) = 0x33;
      iVar5 = *(int *)(param_1 + 0xc0);
      uVar12 = 0xc;
    }
    else {
      iVar5 = FUN_080dad0c(param_1 + 0x54,0,0xe1);
      *(int *)(param_1 + 0xc0) = iVar5;
      *(undefined1 *)(iVar5 + 0x78) = 0x39;
      iVar5 = *(int *)(param_1 + 0xc0);
      uVar12 = 6;
    }
    *(undefined1 *)(iVar5 + 0x79) = uVar12;
    *(undefined2 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x74) = 0xff;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x75) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x76) = 0;
    FUN_080cc030(param_1,iVar13,0x3000);
    FUN_080cc030(param_1,iVar13,0x6000);
    FUN_080cc030(param_1,iVar13,0x9000);
    FUN_080cc030(param_1,iVar13,0xc000);
    FUN_080cc030(param_1,iVar13,0xf000);
    FUN_080cc030(param_1,iVar13,0x12000);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar5 = *(int *)(param_1 + 0xd0);
  iVar6 = FUN_08129198(iVar5,6);
  *(int *)(param_1 + 0xd0) = iVar5 + 1;
  iVar7 = DAT_0807680c;
  iVar5 = DAT_08076750;
  local_34 = (byte *)(param_1 + 0x24);
  if (iVar6 == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_64 = *(int *)(param_1 + 0x54) +
                 *(short *)(((*local_34 + 0x20) * 0x1000000 + 0x40000000 >> 0x17) + DAT_0807680c) *
                 0x14;
      local_60 = *(int *)(param_1 + 0x58) +
                 *(short *)((*local_34 + 0x20 & 0xff) * 2 + DAT_0807680c) * 0x14;
      FUN_080cbf1c(&local_64,2,*local_34 + 0x30,0);
      local_64 = *(int *)(param_1 + 0x54) +
                 *(short *)(((*local_34 + 0xa0) * 0x1000000 + 0x40000000 >> 0x17) + iVar7) * 0x14;
      local_60 = *(int *)(param_1 + 0x58) + *(short *)((*local_34 + 0xa0 & 0xff) * 2 + iVar7) * 0x14
      ;
      FUN_080cbf1c(&local_64,2,*local_34 + 0xb0,1);
    }
    else {
      local_64 = *(int *)(param_1 + 0x54) +
                 *(short *)(((0x60 - *local_34) * 0x1000000 + 0x40000000 >> 0x17) + DAT_08076750) *
                 0x14;
      local_60 = *(int *)(param_1 + 0x58) +
                 *(short *)((0x60 - *local_34 & 0xff) * 2 + DAT_08076750) * 0x14;
      FUN_080cbf1c(&local_64,2,'P' - *local_34,0);
      local_64 = *(int *)(param_1 + 0x54) +
                 *(short *)(((0xe0 - *local_34) * 0x1000000 + 0x40000000 >> 0x17) + iVar5) * 0x14;
      local_60 = *(int *)(param_1 + 0x58) + *(short *)((0xe0 - *local_34 & 0xff) * 2 + iVar5) * 0x14
      ;
      FUN_080cbf1c(&local_64,2,-0x30 - *local_34,1);
    }
  }
  if (*(short *)(param_1 + 0xa4) < 0x10) {
    if (iVar13 == 0) {
      iVar5 = 0x1a0;
      local_50 = 4;
    }
    else {
      iVar5 = 0x1c0;
      local_50 = 5;
    }
  }
  else if (*(short *)(param_1 + 0xa4) < 0x20) {
    if (iVar13 == 0) {
      iVar5 = 0x180;
      local_50 = 3;
    }
    else {
      iVar5 = 0x1a0;
      local_50 = 4;
    }
  }
  else if (iVar13 == 0) {
    iVar5 = 0x160;
    local_50 = 3;
  }
  else {
    iVar5 = 0x180;
    local_50 = 4;
  }
  iVar7 = *(int *)(param_1 + 100) + 8;
  *(int *)(param_1 + 100) = iVar7;
  if (iVar5 < iVar7) {
    *(int *)(param_1 + 100) = iVar5;
  }
  local_54 = (uint)*(ushort *)(param_1 + 0xd6);
  iVar5 = local_54 + *(int *)(param_1 + 100);
  *(short *)(param_1 + 0xd6) = (short)iVar5;
  *local_34 = (byte)((uint)iVar5 >> 8);
  iVar5 = *(int *)(param_1 + 0xc0);
  if (iVar5 != 0) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar8 = *(ushort *)(param_1 + 0xd4) + 2;
      *(short *)(param_1 + 0xd4) = (short)uVar8;
      iVar7 = DAT_080768f4;
      uVar8 = uVar8 & 0xff;
      uVar9 = FUN_08129198(*(undefined2 *)(param_1 + 0xd4),3);
      *(undefined1 *)(iVar5 + 0x74) = *(undefined1 *)((uVar9 & 0xffff) + iVar7);
      iVar7 = DAT_080768f8;
      uVar9 = FUN_08129198(*(undefined2 *)(param_1 + 0xd4),3);
      *(undefined1 *)(iVar5 + 0x75) = *(undefined1 *)((uVar9 & 0xffff) + iVar7);
      iVar7 = DAT_080768fc;
      uVar9 = FUN_08129198(*(undefined2 *)(param_1 + 0xd4),3);
      *(undefined1 *)(iVar5 + 0x76) = *(undefined1 *)((uVar9 & 0xffff) + iVar7);
      pbVar10 = (byte *)(iVar13 * 3 + DAT_08076900 + 2);
      if (*pbVar10 <= uVar8) {
        uVar8 = (uint)*pbVar10;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else {
      uVar2 = FUN_08129050(*(ushort *)(param_1 + 0xd4) + 1,3);
      *(undefined2 *)(param_1 + 0xd4) = uVar2;
      uVar8 = (uint)*(byte *)((uint)*(ushort *)(param_1 + 0xd4) + iVar13 * 3 + DAT_08076964);
      *(undefined1 *)(iVar5 + 0x74) =
           *(undefined1 *)((uint)*(ushort *)(param_1 + 0xd4) + DAT_08076968);
      *(undefined1 *)(iVar5 + 0x75) =
           *(undefined1 *)((uint)*(ushort *)(param_1 + 0xd4) + DAT_0807696c);
      *(undefined1 *)(iVar5 + 0x76) =
           *(undefined1 *)((uint)*(ushort *)(param_1 + 0xd4) + DAT_08076970);
    }
    iVar13 = DAT_08076a74;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar9 = (uint)*local_34;
    }
    else {
      uVar9 = -(uint)*local_34;
    }
    uVar11 = uVar9 + 0xc0 & 0xff;
    *(uint *)(iVar5 + 0x54) =
         *(int *)(param_1 + 0x54) +
         uVar8 * (int)*(short *)((uVar11 + 0x80 & 0xff) * 2 + DAT_08076a74);
    local_2c = uVar11 + 0x40;
    local_4c = (local_2c & 0xff) * 2;
    local_48 = (int)*(short *)(local_4c + iVar13);
    *(uint *)(iVar5 + 0x58) = *(int *)(param_1 + 0x58) + uVar8 * local_48;
    *(uint *)(iVar5 + 100) = *(int *)(param_1 + 0x54) + uVar8 * (int)*(short *)(uVar11 * 2 + iVar13)
    ;
    *(uint *)(iVar5 + 0x68) =
         *(int *)(param_1 + 0x58) + uVar8 * (int)*(short *)((uVar11 + 0xc0 & 0xff) * 2 + iVar13);
    uVar8 = DAT_08076a78;
    uVar9 = 0x20;
    local_28 = (int *)(iVar5 + 0x80);
    local_30 = uVar11 * 2;
    local_44 = (int)*(short *)(local_30 + iVar13);
    local_24 = local_48;
    do {
      *(uint *)(iVar5 + 0x7c) = *(int *)(iVar5 + 0x54) + uVar9 * local_48;
      *local_28 = *(int *)(iVar5 + 0x58) + uVar9 * local_44;
      sVar3 = FUN_08007c7c(*(undefined4 *)(iVar5 + 0x7c));
      if ((sVar3 != 0) && (uVar11 = uVar9 - 0x10 & 0xffff, uVar9 = uVar11, uVar11 <= uVar8)) {
        sVar3 = *(short *)(local_4c + DAT_08076a74);
        sVar1 = *(short *)(local_30 + DAT_08076a74);
        do {
          *(uint *)(iVar5 + 0x7c) = *(int *)(iVar5 + 0x54) + uVar11 * (int)sVar3;
          *local_28 = *(int *)(iVar5 + 0x58) + uVar11 * (int)sVar1;
          sVar4 = FUN_08007c7c(*(undefined4 *)(iVar5 + 0x7c));
          uVar9 = DAT_08076a7c;
          if (sVar4 != 0) break;
          uVar11 = uVar11 + 1 & 0xffff;
          uVar9 = uVar11;
        } while (uVar11 <= uVar8);
      }
      uVar11 = DAT_08076b20;
      uVar9 = uVar9 + 8 & 0xffff;
    } while (uVar9 <= uVar8);
    uVar8 = 0x20;
    local_38 = (int)*(short *)(local_30 + DAT_08076b1c);
    local_40 = (local_2c & 0xff) * 2;
    local_3c = (int)*(short *)(local_40 + DAT_08076b1c);
    do {
      *(uint *)(iVar5 + 0x5c) = *(int *)(iVar5 + 100) + uVar8 * local_3c;
      *(uint *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x68) + uVar8 * local_38;
      sVar3 = FUN_08007c7c();
      if ((sVar3 != 0) && (uVar9 = uVar8 - 0x10 & 0xffff, uVar8 = uVar9, uVar9 <= uVar11)) {
        sVar3 = *(short *)(local_40 + DAT_08076b1c);
        sVar1 = *(short *)(local_30 + DAT_08076b1c);
        do {
          *(uint *)(iVar5 + 0x5c) = *(int *)(iVar5 + 100) + uVar9 * (int)sVar3;
          *(uint *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x68) + uVar9 * (int)sVar1;
          sVar4 = FUN_08007c7c();
          uVar8 = DAT_08076b24;
          if (sVar4 != 0) break;
          uVar9 = uVar9 + 1 & 0xffff;
          uVar8 = uVar9;
        } while (uVar9 <= uVar11);
      }
      uVar8 = uVar8 + 8 & 0xffff;
    } while (uVar8 <= uVar11);
    if (*(short *)(param_1 + 0xd4) == 0) {
      local_5c = *(undefined4 *)(iVar5 + 0x5c);
      local_58 = *(undefined4 *)(iVar5 + 0x60);
      FUN_080e2e8c(&local_5c,0,0);
      local_5c = *(undefined4 *)(iVar5 + 0x7c);
      local_58 = *local_28;
      FUN_080e2e8c(&local_5c,0,0);
    }
  }
  if (*(ushort *)(param_1 + 0xd6) < local_54) {
    if ((*(ushort *)(DAT_08076bcc + 8) & 8) != 0) {
      *(undefined1 *)(param_1 + 0x13) = 0x10;
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if (local_50 <= *(byte *)(param_1 + 0x13)) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *local_34 = 0;
    *(undefined1 *)(param_1 + 0xd) = 0x15;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


