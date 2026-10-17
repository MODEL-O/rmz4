// undefined FUN_0810cccc(void)
// entry 0x810cccc


undefined4 FUN_0810cccc(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  undefined4 in_lr;
  char *local_24;
  
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810cd50);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  iVar3 = DAT_0810ce18;
  iVar8 = DAT_0810cd54;
  if (*(char *)(param_1 + 0x11) != '\0') {
    puVar10 = (ushort *)(param_1 + 0x78);
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)((uint)(*puVar10 >> 8) * 2 + DAT_0810cd54);
    iVar3 = DAT_0810cd58;
    *(char *)(param_1 + 0x7e) = (char)*(undefined2 *)((uint)(*puVar10 >> 8) * 2 + DAT_0810cd58);
    if (*(char *)(param_1 + 0x7f) == '\0') {
      iVar7 = (uint)(*puVar10 >> 8) * 2;
      *(undefined2 *)(iVar7 + iVar8) = 0x200;
      *(undefined2 *)(iVar7 + iVar3) = 4;
    }
    else {
      uVar2 = *puVar10;
      if (uVar2 == 0xce00) {
        *(undefined2 *)(iVar8 + 0x19c) = 0x228;
        *(undefined2 *)(iVar3 + 0x19c) = 5;
      }
      else if (uVar2 == 0xcf00) {
        *(undefined2 *)(iVar8 + 0x19e) = 0x26c;
        *(undefined2 *)(iVar3 + 0x19e) = 6;
      }
      else if (uVar2 == 0xd000) {
        *(short *)(iVar8 + 0x1a0) = (short)DAT_0810cd94;
        *(undefined2 *)(iVar3 + 0x1a0) = 7;
      }
      else {
        iVar7 = (uint)(uVar2 >> 8) * 2;
        *(undefined2 *)(iVar7 + iVar8) = 0x290;
        *(undefined2 *)(iVar7 + iVar3) = 5;
      }
    }
    goto LAB_0810cf2a;
  }
  puVar10 = (ushort *)(param_1 + 0x78);
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)((uint)(*puVar10 >> 8) * 2 + DAT_0810ce18);
  iVar8 = DAT_0810ce1c;
  *(char *)(param_1 + 0x7e) = (char)*(undefined2 *)((uint)(*puVar10 >> 8) * 2 + DAT_0810ce1c);
  if (*(char *)(param_1 + 0x7f) == '\0') {
    iVar7 = (uint)(*puVar10 >> 8) * 2;
    *(undefined2 *)(iVar7 + iVar3) = 0x200;
    *(undefined2 *)(iVar7 + iVar8) = 4;
    iVar14 = (uint)(*puVar10 >> 8) * 0x14;
    iVar7 = iVar14 + DAT_0810d174;
    iVar13 = (uint)(*puVar10 >> 8) * 2;
    FUN_08001d30(iVar7,((uint)*(ushort *)(iVar13 + iVar3) - (uint)(*(ushort *)(iVar7 + 6) >> 6)) *
                       0x20 + 0x10000);
    iVar14 = iVar14 + DAT_0810d178;
    FUN_08002208(iVar14,((uint)*(ushort *)(iVar13 + iVar8) - (uint)*(byte *)(iVar14 + 7)) * 0x20 +
                        0x200);
    goto LAB_0810cf2a;
  }
  uVar2 = *puVar10;
  if (uVar2 == 0xf400) {
    iVar7 = 0x1e8;
    puVar11 = (undefined2 *)(iVar3 + 0x1e8);
    uVar4 = 0x250;
LAB_0810ce64:
    *puVar11 = uVar4;
    *(undefined2 *)(iVar7 + iVar8) = 5;
  }
  else {
    if (uVar2 != 0xf500) {
      if (uVar2 == 0xf300) {
        iVar7 = 0x1e6;
        puVar11 = (undefined2 *)(iVar3 + 0x1e6);
        uVar4 = (undefined2)DAT_0810ce50;
      }
      else {
        if (uVar2 != 0xf200) {
          iVar7 = (uint)(uVar2 >> 8) * 2;
          *(undefined2 *)(iVar7 + iVar3) = 0x280;
          *(undefined2 *)(iVar7 + iVar8) = 5;
          goto LAB_0810ce86;
        }
        iVar7 = 0x1e4;
        puVar11 = (undefined2 *)(iVar3 + 0x1e4);
        uVar4 = (undefined2)DAT_0810ce70;
      }
      goto LAB_0810ce64;
    }
    *(undefined2 *)(iVar3 + 0x1ea) = 0x280;
    *(undefined2 *)(iVar8 + 0x1ea) = 6;
  }
LAB_0810ce86:
  iVar13 = (uint)(*puVar10 >> 8) * 0x14;
  iVar8 = iVar13 + DAT_0810cecc;
  iVar7 = (uint)(*puVar10 >> 8) * 2;
  FUN_08001d30(iVar8,((uint)*(ushort *)(iVar7 + iVar3) - (uint)(*(ushort *)(iVar8 + 6) >> 6)) * 0x20
                     + 0x10000);
  iVar13 = iVar13 + DAT_0810ced0;
  FUN_08002208(iVar13,((uint)*(ushort *)(iVar7 + DAT_0810ced4) - (uint)*(byte *)(iVar13 + 7)) * 0x20
                      + 0x200);
LAB_0810cf2a:
  local_24 = (char *)(param_1 + 0x7f);
  puVar10 = (ushort *)(param_1 + 0x78);
  FUN_0801cc9c(param_1);
  if (*(char *)(param_1 + 0x11) != '\0') {
    FUN_0801ceec(param_1);
  }
  if ((*puVar10 == DAT_0810d17c) &&
     (uVar9 = *DAT_0810d180 * DAT_0810d184 + DAT_0810d188, *DAT_0810d180 = uVar9 & 0x7fffffff,
     ((uVar9 & 0x7fffffff) >> 0x10 & 0xff) == 0)) {
    *puVar10 = (ushort)DAT_0810d18c;
  }
  FUN_0801cf00(param_1,*puVar10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801d3d0(param_1,*(byte *)(param_1 + 0x7d) + 4);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  pbVar12 = (byte *)(param_1 + 0x4a);
  *pbVar12 = *pbVar12 & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *pbVar12 = *pbVar12 & 0xdf;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(char *)(param_1 + 0x80) = '\0';
  if ((*local_24 == '\0') || (*(undefined1 *)(param_1 + 0x25) = 0x11, *local_24 == '\0')) {
    if (*(char *)(param_1 + 0x10) == '8') {
      FUN_0810cc50(uVar5,0x38,0,0xf300,*(undefined4 *)(param_1 + 0x54),
                   *(undefined4 *)(param_1 + 0x58),1);
    }
    if (*local_24 == '\0') {
      if (*(char *)(param_1 + 0x10) == ':') {
        FUN_0810cc50(uVar5,0x3a,0,0x9c00,*(undefined4 *)(param_1 + 0x54),
                     *(undefined4 *)(param_1 + 0x58),1);
      }
      if (*local_24 == '\0') {
        if (*(char *)(param_1 + 0x10) == ';') {
          FUN_0810cc50(uVar5,0x3b,0,DAT_0810d190,*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x58),1);
        }
        if (*local_24 == '\0') {
          if (*(char *)(param_1 + 0x10) == '<') {
            FUN_0810cc50(uVar5,0x3c,1,0xa400,*(undefined4 *)(param_1 + 0x54),
                         *(undefined4 *)(param_1 + 0x58),1);
          }
          if (*local_24 == '\0') {
            if (*(char *)(param_1 + 0x10) == '@') {
              FUN_0810cc50(uVar5,0x40,1,0xce00,*(undefined4 *)(param_1 + 0x54),
                           *(undefined4 *)(param_1 + 0x58),1);
              FUN_0810cc50(uVar5,*(undefined1 *)(param_1 + 0x10),1,0xcf00,
                           *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),2);
              FUN_0810cc50(uVar5,*(undefined1 *)(param_1 + 0x10),1,0xd000,
                           *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),3);
            }
            if (*local_24 == '\0') {
              if (*(char *)(param_1 + 0x10) == 'E') {
                FUN_0810cc50(uVar5,0x45,0,0xf200,*(undefined4 *)(param_1 + 0x54),
                             *(undefined4 *)(param_1 + 0x58),1);
              }
              if ((*local_24 == '\0') && (*(char *)(param_1 + 0x10) == 'O')) {
                FUN_0810cc50(uVar5,0x4f,0,0xf400,*(undefined4 *)(param_1 + 0x54),
                             *(undefined4 *)(param_1 + 0x58),1);
                FUN_0810cc50(uVar5,*(undefined1 *)(param_1 + 0x10),0,0xf500,
                             *(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1000,2);
              }
            }
          }
        }
      }
    }
  }
  cVar1 = *(char *)(param_1 + 0x80);
  if (cVar1 != '\0') {
    FUN_0800249c(cVar1,(*(byte *)(param_1 + 0x7d) + 4) * 0x20 | 0x200);
  }
  FUN_0810d194(param_1);
  return in_lr;
}


