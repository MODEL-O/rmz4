// undefined FUN_08068a44(void)
// entry 0x8068a44


undefined4 FUN_08068a44(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  byte abStack_54 [4];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_08129258(abStack_54,DAT_08068bd8,2);
  uVar4 = *DAT_08068bdc * DAT_08068be0 + DAT_08068be4;
  *DAT_08068bdc = uVar4 & 0x7fffffff;
  uVar4 = (uVar4 & 0x7fffffff) >> 0x10 & 1;
  local_30 = (uint)abStack_54[uVar4];
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08068be8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  *(undefined1 *)(param_1 + 0xd) = 3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  local_40 = *(undefined4 *)(param_1 + 0x54);
  local_3c = *(undefined4 *)(param_1 + 0x58);
  uVar6 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  local_3c = uVar6;
  uVar7 = FUN_08008988(local_40,uVar6);
  *(undefined4 *)(param_1 + 0xd8) = uVar7;
  uVar6 = FUN_08008748(local_40,uVar6);
  *(undefined4 *)(param_1 + 0xdc) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar8 = DAT_08068bec;
  local_2c = DAT_08068bf4;
  FUN_08001d30(DAT_08068bec + DAT_08068bf0,
               ((uint)*(ushort *)(DAT_08068bf4 + 0xae) -
               (uint)(*(ushort *)(DAT_08068bec + DAT_08068bf0 + 6) >> 6)) * 0x20 + 0x10000);
  iVar9 = DAT_08068bf8;
  local_28 = DAT_08068bfc;
  FUN_08002208(iVar8 + DAT_08068bf8,
               ((uint)*(ushort *)(DAT_08068bfc + 0xae) - (uint)*(byte *)(iVar8 + DAT_08068bf8 + 7))
               * 0x20 + 0x200);
  FUN_08001d30(DAT_08068bf0 + 0x6e0,
               ((uint)*(ushort *)(local_2c + 0xb0) - (uint)(*(ushort *)(DAT_08068bf0 + 0x6e6) >> 6))
               * 0x20 + 0x10000);
  FUN_08002208(iVar9 + 0x6e0,
               ((uint)*(ushort *)(local_28 + 0xb0) - (uint)*(byte *)(iVar9 + 0x6e7)) * 0x20 + 0x200)
  ;
  iVar8 = DAT_08068c00;
  FUN_08001d30(DAT_08068c00 + DAT_08068bf0,
               ((uint)*(ushort *)(local_2c + 0xb2) -
               (uint)(*(ushort *)(DAT_08068c00 + DAT_08068bf0 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar8 + iVar9,
               ((uint)*(ushort *)(local_28 + 0xb2) - (uint)*(byte *)(iVar8 + iVar9 + 7)) * 0x20 +
               0x200);
  FUN_0801cc9c(param_1);
  iVar8 = FUN_0809ea98(param_1,0,0);
  if (iVar8 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08068be8);
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
  else {
    iVar9 = FUN_0809ea98(param_1,3,0);
    if (iVar9 == 0) {
      *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xfc;
      *(undefined4 *)(iVar8 + 0x8c) = 0;
      *(undefined4 *)(iVar8 + 0x90) = 0;
      *(undefined1 *)(iVar8 + 0x94) = 0;
      *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xfb;
      piVar5 = (int *)((uint)*(byte *)(iVar8 + 9) * 4 + DAT_08068c78);
      *(undefined4 *)(iVar8 + 0xc) = 3;
      *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08068c7c);
    }
    else {
      iVar10 = FUN_0809ea98(param_1,2,0);
      if (iVar10 == 0) {
        *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfc;
        *(undefined4 *)(iVar9 + 0x8c) = 0;
        *(undefined4 *)(iVar9 + 0x90) = 0;
        *(undefined1 *)(iVar9 + 0x94) = 0;
        *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfb;
        iVar10 = DAT_08068d28;
        piVar5 = (int *)((uint)*(byte *)(iVar9 + 9) * 4 + DAT_08068d28);
        *(undefined4 *)(iVar9 + 0xc) = 3;
        *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
        *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xfc;
        *(undefined4 *)(iVar8 + 0x8c) = 0;
        *(undefined4 *)(iVar8 + 0x90) = 0;
        *(undefined1 *)(iVar8 + 0x94) = 0;
        *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xfb;
        *(undefined4 *)(iVar8 + 0xc) = 3;
        *(undefined4 *)(iVar8 + 0x14) =
             *(undefined4 *)(*(int *)((uint)*(byte *)(iVar8 + 9) * 4 + iVar10) + 0xc);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08068d2c);
        *(undefined4 *)(param_1 + 0xc) = 3;
        goto LAB_08068e0e;
      }
      iVar11 = FUN_0809ea98(param_1,1,0);
      if (iVar11 != 0) {
        *(int *)(param_1 + 0xb4) = iVar8;
        *(int *)(param_1 + 0xb8) = iVar11;
        *(int *)(param_1 + 0xbc) = iVar10;
        *(int *)(param_1 + 0xc0) = iVar9;
        FUN_0809eaf8(iVar8);
        FUN_0809eaf8(iVar11);
        FUN_0809eaf8(iVar10);
        FUN_0809eaf8(iVar9);
        if (uVar4 == 0) {
          local_50 = FUN_0806a7c8(param_1,1);
          local_50 = local_50 + DAT_08068e64;
        }
        else {
          local_50 = FUN_0806a7c8(param_1,1);
          local_50 = local_50 + DAT_08068f60;
        }
        local_4c = FUN_0806a7c8(param_1,3);
        uVar2 = local_30;
        local_4c = local_4c + DAT_08068f60;
        local_48 = local_50 + (uVar4 * 2 + -1) * -0x2800;
        local_40 = (local_48 - local_50) / 2 + local_50;
        local_38 = local_50 + *(short *)((local_30 + 0xc0 & 0xff) * 2 + DAT_08068f64) * 0xc;
        local_38 = ((local_48 + *(short *)((local_30 + 0x40 & 0xff) * 2 + DAT_08068f64) * 0xc) -
                   local_38) / 2 + local_38;
        local_34 = local_4c + *(short *)((local_30 + 0x80 & 0xff) * 2 + DAT_08068f64) * 0xc;
        local_34 = local_34 +
                   ((local_4c + *(short *)(local_30 * 2 + DAT_08068f64) * 0xc) - local_34) / 2;
        uVar1 = (undefined1)uVar4;
        *(undefined1 *)(param_1 + 0x4c) = uVar1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        if (uVar4 == 0) {
          *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xef;
        }
        else {
          *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) | 0x10;
        }
        *(undefined1 *)(iVar8 + 0x4c) = uVar1;
        *(byte *)(iVar8 + 0x4a) = *(byte *)(iVar8 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          *(byte *)(iVar11 + 10) = *(byte *)(iVar11 + 10) & 0xef;
        }
        else {
          *(byte *)(iVar11 + 10) = *(byte *)(iVar11 + 10) | 0x10;
        }
        *(undefined1 *)(iVar11 + 0x4c) = uVar1;
        *(byte *)(iVar11 + 0x4a) = *(byte *)(iVar11 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          bVar3 = *(byte *)(iVar10 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(iVar10 + 10) | 0x10;
        }
        *(byte *)(iVar10 + 10) = bVar3;
        *(undefined1 *)(iVar10 + 0x4c) = uVar1;
        *(byte *)(iVar10 + 0x4a) = *(byte *)(iVar10 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          bVar3 = *(byte *)(iVar9 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(iVar9 + 10) | 0x10;
        }
        *(byte *)(iVar9 + 10) = bVar3;
        *(undefined1 *)(iVar9 + 0x4c) = uVar1;
        *(byte *)(iVar9 + 0x4a) = *(byte *)(iVar9 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        *(int *)(param_1 + 0x54) = local_40;
        *(int *)(param_1 + 0x58) = local_4c;
        *(int *)(iVar8 + 0x54) = local_38;
        *(int *)(iVar8 + 0x58) = local_34;
        *(int *)(iVar11 + 0x54) = local_50;
        *(int *)(iVar11 + 0x58) = local_4c;
        *(int *)(iVar9 + 0x54) = local_48;
        *(int *)(iVar9 + 0x58) = local_4c;
        *(int *)(iVar10 + 0x54) = local_48;
        *(int *)(iVar10 + 0x58) = local_4c;
        *(undefined1 *)(iVar9 + 0xb4) = (undefined1)local_30;
        *(undefined1 *)(iVar10 + 0xb4) = (undefined1)local_30;
        *(undefined1 *)(iVar11 + 0xb4) = (undefined1)local_30;
        *(undefined1 *)(iVar8 + 0xb4) = (undefined1)local_30;
        *(undefined1 *)(param_1 + 0xc4) = (undefined1)local_30;
        local_44 = local_4c;
        local_3c = local_4c;
        local_24 = local_4c;
        FUN_0806a7fc(param_1,local_30,uVar4,1);
        FUN_0806aaf8(iVar8,uVar2,uVar4,1);
        FUN_0806a8c4(iVar11,uVar2,uVar4,1);
        FUN_0806a8c4(iVar10,uVar2,uVar4,1);
        FUN_0806a8c4(iVar9,uVar2,uVar4,1);
        FUN_080503cc(param_1,DAT_080690e8,0x60);
        FUN_080690ec(param_1);
        return in_lr;
      }
      *(byte *)(iVar10 + 10) = *(byte *)(iVar10 + 10) & 0xfc;
      *(undefined4 *)(iVar10 + 0x8c) = 0;
      *(undefined4 *)(iVar10 + 0x90) = 0;
      *(undefined1 *)(iVar10 + 0x94) = 0;
      *(byte *)(iVar10 + 10) = *(byte *)(iVar10 + 10) & 0xfb;
      iVar11 = DAT_08068e18;
      piVar5 = (int *)((uint)*(byte *)(iVar10 + 9) * 4 + DAT_08068e18);
      *(undefined4 *)(iVar10 + 0xc) = 3;
      *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
      *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfc;
      *(undefined4 *)(iVar9 + 0x8c) = 0;
      *(undefined4 *)(iVar9 + 0x90) = 0;
      *(undefined1 *)(iVar9 + 0x94) = 0;
      *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfb;
      *(undefined4 *)(iVar9 + 0xc) = 3;
      *(undefined4 *)(iVar9 + 0x14) =
           *(undefined4 *)(*(int *)((uint)*(byte *)(iVar9 + 9) * 4 + iVar11) + 0xc);
      *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xfc;
      *(undefined4 *)(iVar8 + 0x8c) = 0;
      *(undefined4 *)(iVar8 + 0x90) = 0;
      *(undefined1 *)(iVar8 + 0x94) = 0;
      *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xfb;
      *(undefined4 *)(iVar8 + 0xc) = 3;
      *(undefined4 *)(iVar8 + 0x14) =
           *(undefined4 *)(*(int *)((uint)*(byte *)(iVar8 + 9) * 4 + iVar11) + 0xc);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08068e1c);
    }
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
LAB_08068e0e:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
  return in_lr;
}


