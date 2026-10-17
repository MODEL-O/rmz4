// undefined FUN_08096800(void)
// entry 0x8096800


undefined4 FUN_08096800(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && ((*(ushort *)(DAT_08096884 + 8) & 8) == 0)) &&
     ((*(byte *)(DAT_08096884 + 0x12) & 1) != 0)) goto LAB_08096b1c;
  uVar4 = 0xf;
  pbVar8 = (byte *)(param_1 + 0xb4);
  do {
    pbVar8[uVar4] = pbVar8[uVar4 - 1];
    uVar4 = uVar4 - 1 & 0xff;
  } while (uVar4 != 0);
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar7 = *(int *)(param_1 + 0x28);
    if ((*(int *)(iVar7 + 0x60) == 0) && (2 < *(byte *)(iVar7 + 0xc))) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08096b00);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
      return in_lr;
    }
    if (*(byte *)(iVar7 + 0xc) < 2) {
      iVar3 = *(int *)(iVar7 + 0x2c);
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 != 0) {
        FUN_08005784(param_1 + 0x74,DAT_08096b24);
        goto LAB_08096b1c;
      }
      FUN_08005784(param_1 + 0x74,DAT_08096b64);
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar7 + 100);
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (1 < *(byte *)(iVar7 + 0xd)) {
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar7 + 0x5c);
        *(undefined1 *)(param_1 + 0xd) = 2;
      }
      if ((*(byte *)(iVar7 + 0x70) & 1) == 0) {
        FUN_0801cf00(param_1,DAT_08096b84);
      }
      else {
        FUN_0801cf00(param_1,DAT_08096b68);
      }
      if (*(byte *)(iVar7 + 0xc) < 2) {
        if (*(char *)(iVar7 + 0x12) == '\x10') {
          if (*(int *)(param_1 + 100) <= DAT_08096be0) {
            bVar1 = *(byte *)(iVar7 + 0xc3);
            *pbVar8 = bVar1;
            iVar7 = DAT_08096be4;
            *(int *)(param_1 + 0x54) =
                 *(int *)(param_1 + 0x54) +
                 (*(short *)((uint)(byte)(bVar1 - 0x40) * 2 + DAT_08096be4) * 3 >> 2);
            *(int *)(param_1 + 0x58) =
                 *(int *)(param_1 + 0x58) +
                 (*(short *)((*pbVar8 + 0x80 & 0xff) * 2 + iVar7) * 3 >> 2);
          }
          if (*(byte *)(param_1 + 0x12) < 0x10) {
            *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
          }
        }
        goto LAB_08096c9c;
      }
      *(char *)(param_1 + 0x13) = *(char *)(iVar7 + 0x13) + '\x04';
    }
    else {
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        FUN_0801cf00(param_1,DAT_08096c24);
      }
      else {
        FUN_0801cf00(param_1,DAT_08096bfc);
      }
      if (((uint)*(byte *)(param_1 + 0x11) + *(int *)(param_1 + 0x5c) & 1) == 0) {
        iVar7 = *(int *)(param_1 + 0x54) + DAT_08096c44;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x54) + 0x280;
      }
      *(int *)(param_1 + 0x54) = iVar7;
      if ((*(byte *)(param_1 + 0x11) - 1 & 3) < 2) {
        iVar7 = *(int *)(param_1 + 0x58) + DAT_08096c94;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x58) + 0x280;
      }
      *(int *)(param_1 + 0x58) = iVar7;
      uVar4 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (((uVar4 & 0xf) == 0) &&
         (bVar1 = *(byte *)(param_1 + 0x12), *(byte *)(param_1 + 0x12) = bVar1 + 1, bVar1 < 0xb5))
      goto LAB_08096c9c;
LAB_08096c72:
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08096c98);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
LAB_08096c8a:
    FUN_08096ca8(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    FUN_08006984(0x2b);
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(undefined4 *)(param_1 + 0x60) = 1;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08096888);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_0801cff0(param_1);
    goto LAB_08096c8a;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080968b4:
      if (*(int *)(param_1 + 0x2c) != 0) goto LAB_080968ba;
    }
    else {
      iVar7 = FUN_0802adac(0,param_1,DAT_080968e4);
      *(int *)(param_1 + 0x2c) = iVar7;
      if (iVar7 != 0) {
        FUN_08005784(param_1 + 0x74,DAT_080968e8);
        goto LAB_080968b4;
      }
    }
  }
  else {
LAB_080968ba:
    iVar7 = FUN_0802b3e4();
    if (iVar7 == 0) {
      FUN_0801cfc8(param_1,CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70))
                   ,(short)*(char *)(param_1 + 0x71),4);
LAB_08096b1c:
      FUN_0801cff0(param_1);
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_08096918);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar7 = FUN_0801fb14(DAT_0809691c,param_1 + 0x54);
    if (iVar7 == 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    goto LAB_08096c9c;
  }
  if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_08096c72;
  iVar7 = *(int *)(param_1 + 100);
  if (DAT_0809694c < iVar7) {
    FUN_0801cf00(param_1,DAT_08096950);
    if ((byte)(*pbVar8 + 0xbf) < 0x7f) {
      *(undefined4 *)(param_1 + 0x5c) = 1;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (DAT_0809696c < iVar7) {
    uVar5 = DAT_08096974;
    if (1 < (iVar7 + DAT_08096970 & 3U)) {
      uVar5 = 0x4400;
    }
    FUN_0801cf00(param_1,uVar5);
  }
  else if (DAT_080969b8 < iVar7) {
    if ((iVar7 - 0xf8U & 7) < 2) {
      FUN_0801cfc8(param_1,DAT_080969bc,(short)*(char *)(param_1 + 0x71),
                   (short)*(char *)(param_1 + 0x72));
    }
    else {
      FUN_0801cfc8(param_1,0x4400,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72))
      ;
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 100) - 0x79U < 0x7f) {
    bVar1 = (char)*(undefined4 *)(param_1 + 0x68) * '\x02' + *pbVar8;
LAB_08096a58:
    *pbVar8 = bVar1;
  }
  else {
    uVar4 = FUN_08128bdc((*(int *)(param_1 + 0x54) - *(int *)(*DAT_08096a38 + 0x54)) * 0x100 >> 0x10
                         ,((*(int *)(param_1 + 0x58) + 0x2000) - *(int *)(*DAT_08096a38 + 0x58)) *
                          0x100 >> 0x10);
    uVar6 = (uVar4 & 0xffff) >> 8;
    uVar4 = (uint)*pbVar8;
    if (uVar6 != uVar4) {
      if ((int)(uVar6 * 0x1000000) < 0) {
        if ((uVar4 < uVar6) && ((int)(uVar6 - 0x80) < (int)uVar4)) {
          bVar1 = *pbVar8 + 1;
        }
        else {
          bVar1 = *pbVar8 - 1;
        }
      }
      else if ((uVar6 < uVar4) && ((uint)*pbVar8 < uVar6 + 0x80)) {
        bVar1 = *pbVar8 - 1;
      }
      else {
        bVar1 = *pbVar8 + 1;
      }
      goto LAB_08096a58;
    }
  }
  iVar7 = DAT_08096ab8;
  if (*(int *)(param_1 + 100) <= DAT_08096ab4) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (*(short *)((*pbVar8 + 0xc0 & 0xff) * 2 + DAT_08096ab8) * 3 >> 2);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (*(short *)((*pbVar8 + 0x80 & 0xff) * 2 + iVar7) * 3 >> 2);
    *(byte *)(param_1 + 0x24) = *pbVar8;
  }
  if (*(byte *)(param_1 + 0x12) < 0x10) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
LAB_08096c9c:
  FUN_0801cff0(param_1);
  return in_lr;
}


