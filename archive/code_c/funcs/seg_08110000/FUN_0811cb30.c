// undefined FUN_0811cb30(void)
// entry 0x811cb30


undefined4 FUN_0811cb30(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  FUN_0811d380();
  iVar4 = DAT_0811cb54;
  iVar9 = DAT_0811cb4c;
  uVar8 = 0;
  puVar3 = (ushort *)(DAT_0811cb50 + DAT_0811cb4c);
  do {
    if (6 < uVar8) {
LAB_0811cb9a:
      FUN_0811d514(param_1);
      iVar1 = DAT_0811cc48;
      iVar7 = DAT_0811cc40;
      iVar4 = DAT_0811cbe4;
      iVar9 = DAT_0811cbdc;
      if (*(char *)(param_1 + 3) == '\x04') {
        uVar8 = 0;
        iVar7 = DAT_0811cbd8 + param_1;
        puVar3 = (ushort *)(DAT_0811cbe0 + DAT_0811cbdc);
        do {
          pbVar5 = (byte *)(iVar7 + uVar8);
          if (*pbVar5 == 0xff) {
            FUN_0810d85c((uint)*puVar3 + iVar4,0x11,uVar8 * 2 + 6);
          }
          else {
            FUN_0810d85c((uint)*(ushort *)((*pbVar5 + 0x118) * 2 + iVar9) + iVar4,0x11,uVar8 * 2 + 6
                        );
          }
          uVar8 = uVar8 + 1 & 0xff;
        } while (uVar8 < 4);
      }
      else {
        uVar8 = 0;
        iVar9 = DAT_0811cc3c + param_1;
        puVar3 = (ushort *)(DAT_0811cc44 + DAT_0811cc40);
        do {
          pbVar5 = (byte *)(iVar9 + uVar8);
          if (*pbVar5 == 0xff) {
            FUN_0810d85c((uint)*puVar3 + iVar1,0x11,uVar8 * 2 + 6);
          }
          else {
            FUN_0810d85c((uint)*(ushort *)((*pbVar5 + 0x118) * 2 + iVar7) + iVar1,0x11,uVar8 * 2 + 6
                        );
          }
          uVar8 = uVar8 + 1 & 0xff;
        } while (uVar8 < 4);
      }
      if (*(char *)(param_1 + 3) == '\x01') {
        puVar3 = (ushort *)(DAT_0811cc80 + DAT_0811cc84);
      }
      else {
        iVar9 = 0;
        if (*(char *)(param_1 + 3) == '\x04') {
          iVar6 = param_1 + DAT_0811ccc0;
          *(undefined1 *)(iVar6 + 0x19) = 1;
          iVar2 = DAT_0811cd00;
          iVar1 = DAT_0811ccfc;
          iVar7 = DAT_0811ccc8;
          iVar4 = DAT_0811ccc4;
          if (*(char *)(iVar6 + 0x15) == -1) {
            FUN_0810d85c((uint)*(ushort *)(DAT_0811ccc4 + 0x23c) + DAT_0811ccc8,0x11,1);
            iVar7 = (uint)*(ushort *)(iVar4 + 0x3c8) + iVar7;
          }
          else {
            FUN_0810d85c((uint)*(ushort *)((*(byte *)(iVar6 + 0x15) + 400) * 2 + DAT_0811ccfc) +
                         DAT_0811cd00,0x11,1);
            iVar7 = (uint)*(ushort *)(iVar1 + DAT_0811cd04) + iVar2;
          }
          FUN_0810d85c(iVar7,0x11,0xf);
        }
        else if (*(char *)(param_1 + DAT_0811cd2c + 0xe) == -1) {
          FUN_0810d85c((uint)*(ushort *)(DAT_0811cd30 + 0x3c0) + DAT_0811cd34,0x11,0xf);
          iVar9 = 1;
        }
        else {
          *(undefined1 *)(param_1 + DAT_0811cd2c + 0x19) = 1;
          uVar8 = FUN_0811d718(param_1 + DAT_0811cdcc);
          iVar7 = DAT_0811cdd8;
          iVar4 = DAT_0811cdd4;
          if (((uVar8 & 0xff) != 0xff) &&
             (((int)(uint)*(byte *)(*DAT_0811cdd0 + ((uVar8 & 0xff) >> 2)) >> (uVar8 & 3) + 4 & 1U)
              != 0)) {
            FUN_0810d85c((uint)*(ushort *)(((uVar8 & 0xff) + 400) * 2 + DAT_0811cdd4) + DAT_0811cdd8
                         ,0x11,1);
            FUN_0810d85c((uint)*(ushort *)(iVar4 + 0x3c4) + iVar7,0x11,0xf);
            iVar9 = 2;
          }
          iVar7 = DAT_0811cdd8;
          iVar4 = DAT_0811cdd4;
          if (iVar9 == 0) {
            FUN_0810d85c((uint)*(ushort *)(DAT_0811cdd4 + 0x3bc) + DAT_0811cdd8,0x11,1);
            FUN_0810d85c((uint)*(ushort *)(iVar4 + DAT_0811cddc) + iVar7,0x11,0xf);
          }
        }
        if (*(char *)(param_1 + 3) == '\x04') {
          puVar3 = (ushort *)(DAT_0811cdd4 + DAT_0811cde0);
        }
        else {
          iVar4 = DAT_0811cdf0;
          iVar7 = DAT_0811cdf4;
          if (*(char *)(param_1 + 3) != '\x02') {
            if (3 < *(byte *)(param_1 + DAT_0811ce1c + 4)) {
              FUN_0810d85c((uint)*(ushort *)((iVar9 + 0x1ea) * 2 + DAT_0811ce50) + DAT_0811ce54,1,
                           0x12);
              return in_lr;
            }
            iVar4 = DAT_0811ce20;
            iVar7 = 0x3d0;
          }
          puVar3 = (ushort *)(iVar4 + iVar7);
        }
      }
      FUN_0810d85c((uint)*puVar3 + DAT_0811ce24,1,0x12);
      return in_lr;
    }
    pbVar5 = (byte *)(param_1 + DAT_0811cbd4 + uVar8);
    if (*pbVar5 == 0xff) {
      if (uVar8 == 0) {
        FUN_0810d85c((uint)*puVar3 + iVar4,2,2);
      }
      goto LAB_0811cb9a;
    }
    FUN_0810d85c((uint)*(ushort *)((*pbVar5 + 0x118) * 2 + iVar9) + iVar4,2,uVar8 * 2 + 2);
    uVar8 = uVar8 + 1 & 0xff;
  } while( true );
}


