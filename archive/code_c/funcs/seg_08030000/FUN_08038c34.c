// undefined FUN_08038c34(void)
// entry 0x8038c34


undefined4 FUN_08038c34(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  byte *pbVar14;
  undefined4 in_lr;
  
  puVar13 = (ushort *)(param_1 + DAT_08038dd0);
  uVar3 = *puVar13;
  bVar7 = *(byte *)(param_1 + 0xe4);
  bVar1 = *(byte *)(param_1 + 0xe5);
  FUN_0802f0e8(param_1);
  *(byte *)(param_1 + 0x14a) = *(byte *)(param_1 + 0xe4);
  *(byte *)(param_1 + DAT_08038dd4) = *(byte *)(param_1 + 0xe5);
  puVar11 = (uint *)(param_1 + 600);
  uVar8 = *puVar11;
  *puVar11 = 0;
  uVar4 = *puVar13;
  *puVar11 = uVar4 & 0xf0;
  uVar9 = (*(ushort *)(param_1 + 0x250) & 0xf0) << 4 | uVar4 & 0xf0;
  *puVar11 = uVar9;
  if (((*(ushort *)(param_1 + 0x25c) & *puVar13) != 0) &&
     (*puVar11 = uVar9 | 2, (*(ushort *)(param_1 + 0x25c) & *(ushort *)(param_1 + 0x250)) != 0)) {
    *puVar11 = uVar9 | 3;
  }
  puVar13 = (ushort *)(param_1 + DAT_08038dd0);
  puVar12 = (ushort *)(param_1 + DAT_08038dd8);
  if ((*puVar12 & *puVar13) != 0) {
    puVar11 = (uint *)(param_1 + 600);
    uVar9 = *puVar11;
    *puVar11 = uVar9 | 8;
    if ((*puVar12 & *(ushort *)(param_1 + 0x250)) != 0) {
      *puVar11 = uVar9 | 0xc;
    }
  }
  if ((*(ushort *)(param_1 + 0x264) & *puVar13) != 0) {
    *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x20000;
  }
  uVar4 = *puVar13;
  if ((uVar4 & 0x8000) == 0) {
    if ((uVar3 & 0x8000) != 0) {
      pbVar10 = (byte *)(param_1 + DAT_08038eb8);
      bVar2 = *pbVar10;
      goto joined_r0x08038e34;
    }
    if (*(char *)(param_1 + 0xdf) == '\0') {
      uVar5 = *(ushort *)(param_1 + 0x260);
      if ((uVar5 & *(ushort *)(param_1 + 0x250)) == 0) {
        if ((uVar5 & uVar4) != 0) {
          if ((*(ushort *)(param_1 + DAT_08038f4c) & uVar4) == 0) {
            *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x2000;
          }
          else {
            *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x8000;
          }
          pbVar10 = (byte *)(param_1 + DAT_08038f78);
          if ((*pbVar10 & 0x10) == 0) {
            cVar6 = *(char *)(param_1 + 0xe4) + '\x01';
          }
          else {
            cVar6 = '\0';
          }
          *(char *)(param_1 + 0xe4) = cVar6;
          if ((*pbVar10 & 0x20) == 0) {
            cVar6 = *(char *)(param_1 + 0xe5) + '\x01';
            goto LAB_08039308;
          }
          goto LAB_08039302;
        }
        if (*(char *)(param_1 + 0xc4) == '\0') {
          if ((uVar3 & *(ushort *)(param_1 + 0x260)) != 0) {
            if ((*(ushort *)(param_1 + DAT_08038fec) & uVar4) == 0) {
              cVar6 = FUN_0803a428(param_1,0);
              if (cVar6 != '\0') {
                *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
                *(undefined1 *)(param_1 + 0xe4) = 0;
              }
            }
            else {
              cVar6 = FUN_0803a428(param_1,1);
              if (cVar6 != '\0') {
                *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
                *(undefined1 *)(param_1 + 0xe5) = 0;
              }
            }
          }
        }
        else {
          if ((*(ushort *)(param_1 + DAT_08039044) & uVar4) == 0) {
LAB_080393a0:
            cVar6 = FUN_0803a428(param_1,0);
            if (cVar6 == '\0') goto LAB_080393be;
            uVar8 = *(uint *)(param_1 + 600);
            uVar9 = 0x1000;
          }
          else {
            cVar6 = FUN_0803a428(param_1,1);
            if (cVar6 == '\0') goto LAB_080393be;
            uVar8 = *(uint *)(param_1 + 600);
            uVar9 = 0x4000;
          }
LAB_080393ba:
          *(uint *)(param_1 + 600) = uVar8 | uVar9;
LAB_080393be:
          *(undefined1 *)(param_1 + 0xe4) = 0;
          *(undefined1 *)(param_1 + 0xe5) = 0;
        }
      }
      else {
        if ((*(ushort *)(param_1 + DAT_08038f0c) & uVar4) == 0) {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
          *(undefined1 *)(param_1 + 0xe4) = 0;
        }
        else {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
          *(undefined1 *)(param_1 + 0xe5) = 0;
        }
LAB_08039284:
        if (*(char *)(param_1 + 0xc4) != '\0') {
          *(undefined1 *)(param_1 + 0xe4) = 0;
          *(undefined1 *)(param_1 + 0xe5) = 0;
        }
      }
    }
    else if (*(char *)(param_1 + 0xdf) == '\x01') {
      uVar5 = *(ushort *)(param_1 + 0x260);
      if ((uVar5 & *(ushort *)(param_1 + 0x250)) == 0) {
        if ((uVar4 & uVar5) == 0) {
          if (*(char *)(param_1 + 0xc4) == '\0') {
            if (((*(ushort *)(param_1 + 0x260) & uVar3) != 0) &&
               (cVar6 = FUN_0803a428(param_1,0), cVar6 != '\0')) {
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
              *(undefined1 *)(param_1 + 0xe4) = 0;
            }
          }
          else {
            cVar6 = FUN_0803a428(param_1,0);
            if (cVar6 != '\0') {
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
            }
            *(undefined1 *)(param_1 + 0xe4) = 0;
          }
        }
        else {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x2000;
          if ((*(byte *)(param_1 + DAT_080390b8) & 0x10) == 0) {
            *(char *)(param_1 + 0xe4) = *(char *)(param_1 + 0xe4) + '\x01';
          }
          else {
            *(undefined1 *)(param_1 + 0xe4) = 0;
          }
        }
      }
      else {
        *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
        *(undefined1 *)(param_1 + 0xe4) = 0;
      }
      uVar4 = *(ushort *)(param_1 + DAT_08039148);
      if ((uVar4 & *(ushort *)(param_1 + 0x250)) == 0) {
        if ((*puVar13 & uVar4) == 0) {
          if (*(char *)(param_1 + 0xc4) == '\0') {
            if (((uVar3 & *(ushort *)(param_1 + DAT_08039148)) != 0) &&
               (cVar6 = FUN_0803a428(param_1,1), cVar6 != '\0')) {
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
              *(undefined1 *)(param_1 + 0xe5) = 0;
            }
          }
          else {
            cVar6 = FUN_0803a428(param_1,1);
            if (cVar6 != '\0') {
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
            }
            *(undefined1 *)(param_1 + 0xe5) = 0;
          }
        }
        else {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x8000;
          if ((*(byte *)(param_1 + DAT_08039180) & 0x20) == 0) {
            cVar6 = *(char *)(param_1 + 0xe5) + '\x01';
            goto LAB_08039308;
          }
          *(undefined1 *)(param_1 + 0xe5) = 0;
        }
      }
      else {
        *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
LAB_08039302:
        cVar6 = '\0';
LAB_08039308:
        *(char *)(param_1 + 0xe5) = cVar6;
      }
    }
    else {
      if ((*(byte *)(param_1 + 0xd) < 9) &&
         ((*(ushort *)(param_1 + DAT_08039264) & *(ushort *)(param_1 + 0x250)) != 0)) {
        FUN_08002b10(5);
        *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) ^ 1;
      }
      uVar4 = *(ushort *)(param_1 + 0x260);
      if ((uVar4 & *(ushort *)(param_1 + 0x250)) != 0) {
        if (*(char *)(param_1 + 0xe0) == '\0') {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
          *(undefined1 *)(param_1 + 0xe4) = 0;
        }
        else {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
          *(undefined1 *)(param_1 + 0xe5) = 0;
        }
        goto LAB_08039284;
      }
      if ((uVar4 & *puVar13) != 0) {
        if (*(char *)(param_1 + 0xe0) == '\0') {
          uVar8 = *(uint *)(param_1 + 600);
          uVar9 = 0x2000;
        }
        else {
          uVar8 = *(uint *)(param_1 + 600);
          uVar9 = 0x8000;
        }
        *(uint *)(param_1 + 600) = uVar8 | uVar9;
        pbVar10 = (byte *)(param_1 + DAT_080392e0);
        if ((*pbVar10 & 0x10) == 0) {
          cVar6 = *(char *)(param_1 + 0xe4) + '\x01';
        }
        else {
          cVar6 = '\0';
        }
        *(char *)(param_1 + 0xe4) = cVar6;
        if ((*pbVar10 & 0x20) != 0) goto LAB_08039302;
        cVar6 = *(char *)(param_1 + 0xe5) + '\x01';
        goto LAB_08039308;
      }
      if (*(char *)(param_1 + 0xc4) != '\0') {
        if (*(char *)(param_1 + 0xe0) == '\0') goto LAB_080393a0;
        cVar6 = FUN_0803a428(param_1,1);
        if (cVar6 != '\0') {
          uVar8 = *(uint *)(param_1 + 600);
          uVar9 = 0x4000;
          goto LAB_080393ba;
        }
        goto LAB_080393be;
      }
      if ((uVar3 & *(ushort *)(param_1 + 0x260)) != 0) {
        if (*(char *)(param_1 + 0xe0) == '\0') {
          cVar6 = FUN_0803a428(param_1,0);
          if (cVar6 != '\0') {
            *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x1000;
            *(undefined1 *)(param_1 + 0xe4) = 0;
          }
        }
        else {
          cVar6 = FUN_0803a428(param_1,1);
          if (cVar6 != '\0') {
            *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x4000;
            *(undefined1 *)(param_1 + 0xe5) = 0;
          }
        }
      }
    }
  }
  else {
    if ((uVar4 & 0x1000) != 0) {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x9000;
    }
    if ((*puVar13 & 0x4000) != 0) {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0xc;
      if (*(char *)(param_1 + DAT_08038ddc) == '\0') {
        *(char *)(param_1 + DAT_08038ddc) = '\x1c';
      }
    }
    if ((*puVar13 & 0x2000) != 0) {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 3;
    }
    if (*(char *)(param_1 + 0xdf) == '\x01') {
      pbVar10 = (byte *)(param_1 + DAT_08038de0);
      if ((*pbVar10 & 0x10) == 0) {
        if ((uVar8 & 0x2000) != 0) {
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x2000;
          *(char *)(param_1 + 0xe4) = *(char *)(param_1 + 0xe4) + '\x01';
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xe4) = 0;
      }
      if ((*pbVar10 & 0x20) != 0) goto LAB_08039302;
      if ((uVar8 & 0x8000) != 0) {
        *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x8000;
        *(char *)(param_1 + 0xe5) = *(char *)(param_1 + 0xe5) + '\x01';
      }
      goto LAB_080393d0;
    }
    pbVar10 = (byte *)(param_1 + DAT_08038e38);
    bVar2 = *pbVar10;
joined_r0x08038e34:
    if ((bVar2 & 0x10) == 0) {
      if ((uVar8 & 0x2000) != 0) {
        *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x2000;
        *(char *)(param_1 + 0xe5) = *(char *)(param_1 + 0xe5) + '\x01';
        *(char *)(param_1 + 0xe4) = *(char *)(param_1 + 0xe4) + '\x01';
      }
    }
    if (((*pbVar10 & 0x20) == 0) && ((uVar8 & 0x8000) != 0)) {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0x8000;
      *(char *)(param_1 + 0xe5) = *(char *)(param_1 + 0xe5) + '\x01';
      *(char *)(param_1 + 0xe4) = *(char *)(param_1 + 0xe4) + '\x01';
    }
  }
LAB_080393d0:
  pbVar10 = (byte *)(param_1 + 0xe5);
  pbVar14 = (byte *)(param_1 + 0xe4);
  if (*(char *)(param_1 + 0xe1) == '\0') {
    FUN_080394fc(param_1);
  }
  else {
    *(undefined1 *)(param_1 + DAT_08039470) = 0;
  }
  if (*(char *)(param_1 + 0xf3) == '\a') {
    FUN_08039780(param_1);
    FUN_080398b4(param_1);
    FUN_08039a74(param_1);
    FUN_08039b80(param_1);
    FUN_08039cb4(param_1);
    FUN_08039e20(param_1);
  }
  if (((*puVar13 & 0x8000) == 0) && (*(char *)(param_1 + 0xc4) == '\0')) {
    if ((bVar7 == *pbVar14) && ((*(byte *)(param_1 + DAT_08039474) & 0x10) == 0)) {
      *pbVar14 = *pbVar14 + 1;
    }
    if ((bVar1 == *pbVar10) && ((*(byte *)(param_1 + DAT_08039474) & 0x20) == 0)) {
      *pbVar10 = *pbVar10 + 1;
    }
  }
  if (*(char *)(param_1 + 0xd) == '\t') {
    bVar7 = 0;
    *pbVar14 = 0;
  }
  else if (*(char *)(param_1 + 199) == '\x01') {
    if (*(char *)(param_1 + 0xc0) == '\0') {
      if (0x28 < *pbVar14) {
        bVar7 = 0x28;
        goto LAB_080394a0;
      }
    }
    else {
      if (*(char *)(param_1 + 0xc0) == '\x01') {
        bVar7 = 0;
      }
      else {
        if (*pbVar14 < 0xc9) goto LAB_080394a2;
        bVar7 = 200;
      }
LAB_080394a0:
      *pbVar14 = bVar7;
    }
LAB_080394a2:
    if (*(char *)(param_1 + 0xc1) == '\0') {
      if (*pbVar10 < 0x29) goto LAB_080394d2;
      bVar7 = 0x28;
    }
    else {
      if (*(char *)(param_1 + 0xc1) != '\x01') goto LAB_080394c8;
      bVar7 = 0;
    }
  }
  else {
    if (200 < *pbVar14) {
      *pbVar14 = 200;
    }
LAB_080394c8:
    if (*pbVar10 < 0xc9) goto LAB_080394d2;
    bVar7 = 200;
  }
  *pbVar10 = bVar7;
LAB_080394d2:
  if (2 < *(byte *)(param_1 + 0xc0)) {
    *pbVar14 = 0;
  }
  if (2 < *(byte *)(param_1 + 0xc1)) {
    *pbVar10 = 0;
  }
  return in_lr;
}


