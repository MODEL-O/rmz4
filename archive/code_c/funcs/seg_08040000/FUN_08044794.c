// undefined FUN_08044794(void)
// entry 0x8044794


undefined4 FUN_08044794(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  short sVar11;
  int iVar12;
  undefined4 in_lr;
  
  iVar12 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar12 + 10) >> 4;
  bVar10 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar10;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar10 << 4;
  uVar6 = *(undefined4 *)(iVar12 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar12 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  if ((*(char *)(param_1 + 0xe) == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    puVar7 = (undefined1 *)(iVar12 + DAT_08044828);
    *puVar7 = 1;
    uVar9 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0x1e),*(undefined1 *)(iVar12 + 0x70));
    if (uVar9 == DAT_0804482c) {
      sVar11 = *(short *)(param_1 + 0xbe);
    }
    else if (uVar9 == DAT_08044840) {
      sVar11 = *(short *)(param_1 + 0xbe) + 3;
    }
    else {
      if (uVar9 != DAT_08044868) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        goto LAB_08044dbe;
      }
      sVar11 = *(short *)(param_1 + 0xbe) + 6;
    }
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != sVar11) {
      FUN_0801cfc8(param_1,sVar11,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72))
      ;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto LAB_08044e48;
    if (*(byte *)(iVar12 + 199) < 4) {
      uVar9 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0x1e),*(undefined1 *)(iVar12 + 0x70));
      if (uVar9 == DAT_08044904) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        FUN_08005760(param_1 + 0x74,
                     **(undefined4 **)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08044908),
                     param_1 + 0x54,8);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      else if (uVar9 == DAT_08044940) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        FUN_08005760(param_1 + 0x74,
                     **(undefined4 **)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08044944),
                     param_1 + 0x54,8);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        FUN_08005760(param_1 + 0x74,
                     **(undefined4 **)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08044974),
                     param_1 + 0x54,8);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_080449c8,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    *(undefined4 *)(param_1 + 0x98) = DAT_080449cc;
    *puVar7 = 2;
    *(undefined1 *)(param_1 + 0x12) =
         *(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_080449d0);
    FUN_0801cf00(param_1,sVar11 + 1);
    if (*(char *)(param_1 + 0x10) == '\x02') {
      FUN_08002b10(0x41);
    }
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      if ((*(char *)(param_1 + 0xe) == '\x02') && (*(char *)(param_1 + 0x10) == '\x03')) {
        uVar8 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0x1e),*(undefined1 *)(iVar12 + 0x70));
        uVar9 = DAT_08044d08;
        if (((uVar8 != DAT_08044d04) && (uVar9 = DAT_08044d1c, uVar8 != DAT_08044d18)) &&
           (uVar9 = DAT_08044d30, uVar8 != DAT_08044d2c)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined1 *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08044d64);
          *(undefined4 *)(param_1 + 0xc) = 3;
          goto LAB_08044dd2;
        }
      }
      else {
        uVar9 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0x1e),*(undefined1 *)(iVar12 + 0x70));
        if (uVar9 == DAT_08044d84) {
          uVar9 = *(ushort *)(param_1 + 0xbe) + 2;
        }
        else if (uVar9 == DAT_08044d98) {
          uVar9 = *(ushort *)(param_1 + 0xbe) + 5;
        }
        else {
          if (uVar9 != DAT_08044ddc) {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
            *(undefined4 *)(param_1 + 0x8c) = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined1 *)(param_1 + 0x94) = 0;
            goto LAB_08044dbe;
          }
          uVar9 = *(ushort *)(param_1 + 0xbe) + 8;
        }
        uVar9 = uVar9 & 0xffff;
      }
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != uVar9) {
        FUN_0801cfc8(param_1,uVar9,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72)
                    );
      }
      if (*(char *)(param_1 + 0x73) == '\x03') {
        piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08044e44);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
        FUN_08044e5c(param_1);
        return in_lr;
      }
      goto LAB_08044e48;
    }
    puVar7 = (undefined1 *)(iVar12 + DAT_08044a30);
    *puVar7 = 2;
    if (*(byte *)(iVar12 + 199) < 4) {
      uVar9 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0x1e),*(undefined1 *)(iVar12 + 0x70));
      if (uVar9 == DAT_08044a34) {
        FUN_08005784(param_1 + 0x74,
                     *(undefined4 *)
                      (*(char *)(param_1 + 0x71) * 4 +
                      *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08044a38)));
        sVar11 = *(short *)(param_1 + 0xbe) + 1;
      }
      else if (uVar9 == DAT_08044a6c) {
        FUN_08005784(param_1 + 0x74,
                     *(undefined4 *)
                      (*(char *)(param_1 + 0x71) * 4 +
                      *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08044a70)));
        sVar11 = *(short *)(param_1 + 0xbe) + 4;
      }
      else {
        if (uVar9 != DAT_08044a9c) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined1 *)(param_1 + 0x94) = 0;
          goto LAB_08044dbe;
        }
        FUN_08005784(param_1 + 0x74,
                     *(undefined4 *)
                      (*(char *)(param_1 + 0x71) * 4 +
                      *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08044aa0)));
LAB_08044b76:
        sVar11 = *(short *)(param_1 + 0xbe) + 7;
      }
    }
    else {
      pcVar4 = (char *)(param_1 + 0x71);
      bVar1 = '\0' < *pcVar4;
      uVar9 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0x1e),*(undefined1 *)(iVar12 + 0x70));
      if (uVar9 == DAT_08044b10) {
        if (bVar1) {
          FUN_08005784(param_1 + 0x74,
                       *(undefined4 *)
                        (*pcVar4 * 4 + *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08044b14))
                      );
        }
        sVar11 = *(short *)(param_1 + 0xbe) + 1;
      }
      else {
        if (uVar9 != DAT_08044b48) {
          if (uVar9 == DAT_08044b84) {
            if (bVar1) {
              FUN_08005784(param_1 + 0x74,
                           *(undefined4 *)
                            (*pcVar4 * 4 +
                            *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08044b88)));
            }
            goto LAB_08044b76;
          }
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined1 *)(param_1 + 0x94) = 0;
LAB_08044dbe:
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08044de0);
          *(undefined4 *)(param_1 + 0xc) = 3;
LAB_08044dd2:
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
          return in_lr;
        }
        if (bVar1) {
          FUN_08005784(param_1 + 0x74,
                       *(undefined4 *)
                        (*pcVar4 * 4 + *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08044b4c))
                      );
        }
        sVar11 = *(short *)(param_1 + 0xbe) + 4;
      }
    }
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != sVar11) {
      FUN_0801cfc8(param_1,sVar11,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72))
      ;
    }
    if (*(byte *)(iVar12 + 199) < 4) {
      if ((*(char *)(param_1 + 0x73) != '\x03') ||
         (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != -1))
      goto LAB_08044e48;
      if ((*(char *)(param_1 + 0xe) != '\0') && (cVar3 = FUN_0803aacc(iVar12), cVar3 != '\0')) {
        *(undefined1 *)(param_1 + 0xe) = 2;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *puVar7 = 3;
      if ((*(char *)(param_1 + 0xe) != '\x02') || (*(char *)(param_1 + 0x10) != '\x03')) {
        FUN_0801cf00(param_1,sVar11 + 1);
        goto LAB_08044cda;
      }
      uVar8 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0x1e),*(undefined1 *)(iVar12 + 0x70));
      uVar9 = DAT_08044c50;
      if (((uVar8 != DAT_08044c4c) && (uVar9 = DAT_08044c64, uVar8 != DAT_08044c60)) &&
         (uVar9 = DAT_08044c78, uVar8 != DAT_08044c74)) goto LAB_08044cce;
    }
    else {
      if (((*(char *)(iVar12 + 0x166) != '\0') || (*(char *)(param_1 + 0x73) != '\x03')) ||
         (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != -1))
      goto LAB_08044e48;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *puVar7 = 3;
LAB_08044cce:
      uVar9 = (uint)(ushort)(sVar11 + 1);
    }
    FUN_0801cf00(param_1,uVar9);
  }
LAB_08044cda:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08044e48:
  FUN_0801cff0(param_1);
  return in_lr;
}


