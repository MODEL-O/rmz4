// undefined FUN_0811c7bc(void)
// entry 0x811c7bc


undefined8 FUN_0811c7bc(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar7 = param_1 + DAT_0811c860;
    FUN_080027b8(iVar7,DAT_0811c864,0x85,0,0);
    FUN_08001f1c(iVar7,(*DAT_0811c868 & 0x1f00) << 3,0x1000);
    iVar7 = param_1 + DAT_0811c86c;
    *(undefined1 *)(iVar7 + 2) = 0;
    *(undefined1 *)(iVar7 + 4) = 0;
    *(undefined1 *)(iVar7 + 0x16) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  FUN_0811d380(param_1);
  cVar3 = *(char *)(param_1 + 3);
  if (cVar3 == '\x01') {
    FUN_0811d6c0(param_1);
    uVar1 = *(ushort *)(DAT_0811c870 + 6);
    if ((uVar1 & 0x20) != 0) {
      FUN_08002b10(1);
      iVar7 = param_1 + DAT_0811c860;
      FUN_080027b8(iVar7,DAT_0811c864,0x85,0,0);
      FUN_08001f1c(iVar7,(*DAT_0811c868 & 0x1f00) << 3,0x1000);
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined1 *)(param_1 + 3) = 0;
      uVar5 = 0;
      goto LAB_0811cb1e;
    }
    if ((*(ushort *)(DAT_0811c870 + 4) & 0x81) != 0) {
      iVar7 = param_1 + DAT_0811c894;
      if (*(char *)(iVar7 + 3) == '\0') goto LAB_0811caa6;
      FUN_08002b10(2);
      *(byte *)(iVar7 + 2) = (byte)uVar1 & 0x20;
LAB_0811cb18:
      uVar4 = 2;
      goto LAB_0811cb1a;
    }
    if ((*(ushort *)(DAT_0811c870 + 4) & 2) != 0) {
      *(undefined1 *)(param_1 + DAT_0811c8ac + 0x1b) = 1;
    }
  }
  else if (cVar3 == '\x02') {
    uVar1 = *(ushort *)(DAT_0811c8c8 + 4);
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar2 = *(ushort *)(DAT_0811c8c8 + 6);
        if ((uVar2 & 0x10) != 0) {
          FUN_08002b10(1);
          *(byte *)(param_1 + DAT_0811c914 + 4) = (byte)uVar1 & 1;
          uVar4 = 3;
          goto LAB_0811cb1a;
        }
        if ((uVar2 & 0x40) == 0) {
          if ((uVar2 & 0x80) != 0) {
            param_1 = param_1 + DAT_0811c980;
            if (*(byte *)(param_1 + 2) + 1 < (uint)*(byte *)(param_1 + 3)) {
              FUN_08002b10(1);
              *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
            }
            else if (*(char *)(param_1 + 0x18) != '\0') {
              FUN_08002b10(1);
              *(char *)(param_1 + 0x16) = *(char *)(param_1 + 0x16) + '\x01';
            }
          }
        }
        else {
          iVar7 = param_1 + DAT_0811c938;
          if (*(char *)(iVar7 + 2) == '\0') {
            if (*(char *)(iVar7 + 0x17) == '\0') {
              FUN_08002b10(3);
              uVar4 = 1;
              goto LAB_0811cb1a;
            }
            FUN_08002b10(1);
            *(char *)(iVar7 + 0x16) = *(char *)(iVar7 + 0x16) + -1;
          }
          else {
            FUN_08002b10(1);
            *(char *)(iVar7 + 2) = *(char *)(iVar7 + 2) + -1;
          }
        }
      }
      else {
        cVar3 = FUN_0811d5cc(param_1,*(undefined1 *)
                                      (param_1 + DAT_0811c8f4 + 6 +
                                      (uint)*(byte *)(param_1 + DAT_0811c8f4 + 2)));
        if (cVar3 == '\0') goto LAB_0811caa6;
LAB_0811ca9e:
        FUN_08002b10(2);
      }
    }
    else {
      FUN_08002b10(3);
      uVar4 = 1;
LAB_0811cb1a:
      *(undefined1 *)(param_1 + 3) = uVar4;
    }
  }
  else if (cVar3 == '\x03') {
    if ((*(ushort *)(DAT_0811c9c0 + 4) & 2) == 0) {
      if ((*(ushort *)(DAT_0811c9c0 + 4) & 1) == 0) {
        uVar1 = *(ushort *)(DAT_0811c9c0 + 6);
        if ((uVar1 & 0x20) != 0) {
          FUN_08002b10(1);
          uVar4 = 2;
          goto LAB_0811cb1a;
        }
        if ((uVar1 & 0x40) == 0) {
          if (((uVar1 & 0x80) != 0) &&
             (param_1 = param_1 + DAT_0811cb08, *(byte *)(param_1 + 4) < 4)) {
            FUN_08002b10(1);
            *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
          }
        }
        else {
          param_1 = param_1 + DAT_0811cae4;
          if (*(char *)(param_1 + 4) != '\0') {
            FUN_08002b10(1);
            *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + -1;
          }
        }
      }
      else {
        iVar7 = param_1 + DAT_0811ca60;
        if (*(char *)(iVar7 + 4) == '\x04') {
          uVar6 = FUN_0811d718(param_1 + DAT_0811ca64);
          *(char *)(iVar7 + 0x15) = (char)uVar6;
          if ((((int)(uint)*(byte *)(*DAT_0811ca68 + ((uVar6 & 0xff) >> 2)) >> (uVar6 & 3) + 4 & 1U)
               == 0) && (*(char *)(iVar7 + 0xe) != -1)) {
            *(undefined1 *)(iVar7 + 0x11) = *(undefined1 *)(iVar7 + 0xd);
            *(char *)(iVar7 + 0x12) = *(char *)(iVar7 + 0xe);
            *(undefined1 *)(iVar7 + 0x13) = *(undefined1 *)(iVar7 + 0xf);
            *(undefined1 *)(iVar7 + 0x14) = *(undefined1 *)(iVar7 + 0x10);
            if ((uVar6 & 0xff) == 0xff) {
              FUN_0811d8c4(param_1);
            }
            else {
              FUN_0811d6c0(param_1);
              FUN_0811d818(uVar6 & 0xff);
            }
            FUN_08002b10(0x1c);
            *(undefined1 *)(param_1 + DAT_0811ca8c + 2) = 0;
            uVar4 = 4;
            goto LAB_0811cb1a;
          }
        }
        else {
          cVar3 = FUN_0811d62c(param_1,*(undefined1 *)(iVar7 + 4));
          if (cVar3 != '\0') goto LAB_0811ca9e;
        }
LAB_0811caa6:
        FUN_08002b10(4);
      }
    }
    else {
      iVar7 = param_1 + DAT_0811c9c4;
      if (*(char *)(iVar7 + 0x10) == -1) {
        if (*(char *)(iVar7 + 0xf) == -1) {
          if (*(char *)(iVar7 + 0xe) == -1) {
            if (*(char *)(iVar7 + 0xd) == -1) {
              *(undefined1 *)(param_1 + 3) = 1;
            }
            else {
              FUN_0811d62c(param_1,0);
            }
          }
          else {
            FUN_0811d62c(param_1,1);
          }
        }
        else {
          FUN_0811d62c(param_1,2);
        }
      }
      else {
        FUN_0811d62c(param_1,3);
      }
      FUN_08002b10(3);
    }
  }
  else if ((cVar3 == '\x04') && (*(short *)(DAT_0811cb2c + 4) != 0)) goto LAB_0811cb18;
  uVar5 = 1;
LAB_0811cb1e:
  return CONCAT44(in_lr,uVar5);
}


