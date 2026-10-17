// undefined FUN_08046520(void)
// entry 0x8046520


undefined4 FUN_08046520(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar3 = FUN_08007c7c();
  if (uVar3 != 0) {
    sVar4 = FUN_08007020(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c),
                         *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60));
    if (sVar4 != 0) {
      uVar3 = FUN_08007020(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c),
                           *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60));
    }
    if ((uVar3 & 0xf) == 0xf) {
      uVar3 = 0;
    }
    uVar3 = uVar3 & 0xf;
    if (0xd < uVar3) {
      uVar3 = 1;
    }
    if (uVar3 != 0) {
      if (*(char *)(param_1 + 0x13) != '\0') {
        piVar9 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080465d4);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar9 + 8);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
        return in_lr;
      }
      if (*(int *)(param_1 + 0x5c) < 1) {
        iVar5 = FUN_0800834c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar5 == -1) goto LAB_08046600;
      }
      else {
        iVar5 = FUN_0800816c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar5 == 1) {
LAB_08046600:
          iVar5 = 0;
        }
      }
      if (*(int *)(param_1 + 0x60) < 1) {
        iVar6 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar6 == -1) goto LAB_0804662a;
      }
      else {
        iVar6 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar6 == 1) {
LAB_0804662a:
          iVar6 = 0;
        }
      }
      iVar10 = iVar6;
      if (iVar6 < 0) {
        iVar10 = -iVar6;
      }
      if (iVar10 == 1) {
        iVar6 = 0;
      }
      if ((iVar5 != 0) && (iVar6 != 0)) {
        iVar10 = iVar5;
        if (iVar5 < 0) {
          iVar10 = -iVar5;
        }
        iVar7 = iVar6;
        if (iVar6 < 0) {
          iVar7 = -iVar6;
        }
        if (iVar7 < iVar10) {
          iVar5 = 0;
        }
        else {
          iVar6 = 0;
        }
      }
      if (*(byte *)(param_1 + 0x12) < 0x81) {
        iVar10 = *(int *)(param_1 + 0x5c);
        if (iVar10 < 0) {
          if (uVar3 < 10) {
            if (uVar3 < 8) {
              if (iVar6 == 0) goto LAB_080466b8;
              uVar2 = 0x94;
            }
            else {
              uVar2 = 0xa5;
            }
          }
          else {
            uVar2 = 0x9c;
          }
        }
        else if ((uVar3 < 8) && (uVar3 != 1)) {
          if (uVar3 < 4) {
            uVar2 = 0xdb;
          }
          else {
            uVar2 = 0xe4;
          }
        }
        else {
          if (iVar6 == 0) goto LAB_080466b8;
          uVar2 = 0xec;
        }
LAB_080466b0:
        *(undefined1 *)(param_1 + 0x12) = uVar2;
      }
      else {
        if (iVar6 != 0) {
          if (*(int *)(param_1 + 0x5c) < 0) {
            uVar2 = 0x6c;
          }
          else {
            uVar2 = 0x14;
          }
          goto LAB_080466b0;
        }
        iVar10 = *(int *)(param_1 + 0x5c);
LAB_080466b8:
        if (iVar10 < 0) {
          if (*(int *)(param_1 + 0x60) < 0) {
            uVar2 = 0xd4;
          }
          else {
            uVar2 = 0x2c;
          }
        }
        else if (*(int *)(param_1 + 0x60) < 0) {
          uVar2 = 0xac;
        }
        else {
          uVar2 = 0x54;
        }
        *(undefined1 *)(param_1 + 0x12) = uVar2;
      }
      iVar10 = DAT_08046750;
      *(int *)(param_1 + 0x5c) =
           *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_08046750) * 6;
      *(int *)(param_1 + 0x60) = *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar10) * 6;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
  }
  puVar11 = (uint *)(param_1 + 0x8c);
  if ((*puVar11 & 4) == 0) {
    uVar8 = FUN_0801fb14(DAT_08046754,param_1 + 0x54);
    if (uVar8 < 0x4001) {
      if ((*puVar11 & 0x1000) == 0) {
        return in_lr;
      }
      *puVar11 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      bVar1 = *(byte *)(param_1 + 10);
      *(byte *)(param_1 + 10) = bVar1 & 0xfb;
      FUN_080d1bcc(param_1 + 0x54,6,bVar1 >> 4 & 1);
      FUN_08002b10(0x2b);
      goto LAB_0804678c;
    }
  }
  *puVar11 = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
LAB_0804678c:
  piVar9 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080467a4);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar9 + 8);
  return in_lr;
}


