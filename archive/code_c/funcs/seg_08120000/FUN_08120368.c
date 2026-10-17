// undefined FUN_08120368(void)
// entry 0x8120368


undefined8 FUN_08120368(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar6 = param_1 + DAT_081203d4;
    FUN_080027b8(iVar6,DAT_081203d8,0x82,0,0);
    FUN_08001f1c(iVar6,(*DAT_081203dc & 0x1f00) << 3,0x1000);
    *(undefined1 *)(param_1 + DAT_081203e0 + 0xd) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  FUN_08120c08(param_1);
  cVar3 = *(char *)(param_1 + 3);
  if (cVar3 == '\x01') {
    uVar1 = *(ushort *)(DAT_081203e4 + 6);
    if ((uVar1 & 0x20) != 0) {
      FUN_08002b10(1);
      uVar5 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined1 *)(param_1 + 3) = 0;
      goto LAB_081205a2;
    }
    if ((uVar1 & 0x10) != 0) {
      FUN_08002b10(1);
      *(undefined1 *)(param_1 + 2) = 3;
      *(byte *)(param_1 + 3) = (byte)uVar1 & 0x20;
      uVar5 = 0;
      goto LAB_081205a2;
    }
    uVar2 = *(ushort *)(DAT_081203e4 + 4);
    if (((uVar2 & 1) == 0) && ((uVar2 & 0x80) == 0)) {
      if ((uVar2 & 2) != 0) {
        *(undefined1 *)(param_1 + DAT_08120474 + 0x11) = 1;
      }
    }
    else {
      iVar6 = param_1 + DAT_08120450;
      if (*(char *)(iVar6 + 3) != '\0') {
        iVar7 = param_1 + DAT_08120454;
        FUN_080027b8(iVar7,DAT_08120458,0xb0,0,uVar1 & 0x10);
        FUN_08001f1c(iVar7,(*DAT_0812045c & 0x1f00) << 3,0x1000);
        FUN_08002b10(2);
        *(char *)(iVar6 + 2) = (char)(uVar1 & 0x10);
        goto LAB_0812059c;
      }
LAB_08120500:
      FUN_08002b10(4);
    }
  }
  else if (cVar3 == '\x02') {
    if ((*(ushort *)(DAT_081204c0 + 4) & 2) != 0) {
      iVar6 = param_1 + DAT_081204c4;
      FUN_080027b8(iVar6,DAT_081204c8,0x82,0,0);
      FUN_08001f1c(iVar6,(*DAT_081204cc & 0x1f00) << 3,0x1000);
      FUN_08002b10(3);
      uVar4 = 1;
      goto LAB_0812059e;
    }
    if ((*(ushort *)(DAT_081204c0 + 4) & 1) == 0) {
      if ((*(ushort *)(DAT_081204c0 + 6) & 0x40) == 0) {
        if ((*(ushort *)(DAT_081204c0 + 6) & 0x80) != 0) {
          param_1 = param_1 + DAT_08120574;
          if (*(byte *)(param_1 + 2) + 1 < (uint)*(byte *)(param_1 + 3)) {
            FUN_08002b10(1);
            *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
          }
          else if (*(char *)(param_1 + 0xf) != '\0') {
            FUN_08002b10(1);
            *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          }
        }
      }
      else {
        iVar6 = param_1 + DAT_0812052c;
        if (*(char *)(iVar6 + 2) == '\0') {
          if (*(char *)(iVar6 + 0xe) == '\0') {
            FUN_08002b10(3);
            uVar4 = 1;
            goto LAB_0812059e;
          }
          FUN_08002b10(1);
          *(char *)(iVar6 + 0xd) = *(char *)(iVar6 + 0xd) + -1;
        }
        else {
          FUN_08002b10(1);
          *(char *)(iVar6 + 2) = *(char *)(iVar6 + 2) + -1;
        }
      }
    }
    else {
      iVar6 = param_1 + DAT_081204f8;
      if (*(char *)(param_1 + DAT_081204fc + (uint)*(byte *)(iVar6 + 2)) == -1) goto LAB_08120500;
      FUN_08002b10(2);
      *(undefined1 *)(param_1 + 3) = 3;
      *(undefined1 *)(iVar6 + 0x12) = 0;
    }
  }
  else if ((cVar3 == '\x03') && (cVar3 = FUN_08120d60(param_1), cVar3 != '\0')) {
LAB_0812059c:
    uVar4 = 2;
LAB_0812059e:
    *(undefined1 *)(param_1 + 3) = uVar4;
  }
  uVar5 = 1;
LAB_081205a2:
  return CONCAT44(in_lr,uVar5);
}


