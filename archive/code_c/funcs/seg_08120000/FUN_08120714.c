// undefined FUN_08120714(void)
// entry 0x8120714


undefined8 FUN_08120714(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar6 = param_1 + DAT_08120784;
    FUN_080027b8(iVar6,DAT_08120788,0x83,0,0);
    FUN_08001f1c(iVar6,(*DAT_0812078c & 0x1f00) << 3,0x1000);
    *(undefined1 *)(param_1 + DAT_08120790 + 0xd) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  FUN_08120cb0(param_1);
  cVar2 = *(char *)(param_1 + 3);
  if (cVar2 == '\x01') {
    uVar4 = *(ushort *)(DAT_08120794 + 6) & 0x20;
    if ((*(ushort *)(DAT_08120794 + 6) & 0x20) != 0) {
      FUN_08002b10(1);
      *(undefined1 *)(param_1 + 2) = 2;
      *(undefined1 *)(param_1 + 3) = 0;
      uVar5 = 0;
      goto LAB_08120936;
    }
    uVar1 = *(ushort *)(DAT_08120794 + 4);
    if (((uVar1 & 1) == 0) && ((uVar1 & 0x80) == 0)) {
      if ((uVar1 & 2) != 0) {
        *(undefined1 *)(param_1 + DAT_08120808 + 0x11) = 1;
      }
    }
    else {
      iVar6 = param_1 + DAT_081207e4;
      if (*(char *)(iVar6 + 3) != '\0') {
        iVar7 = param_1 + DAT_081207e8;
        FUN_080027b8(iVar7,DAT_081207ec,0xb1,0,uVar4);
        FUN_08001f1c(iVar7,(*DAT_081207f0 & 0x1f00) << 3,0x1000);
        FUN_08002b10(2);
        *(char *)(iVar6 + 2) = (char)uVar4;
        goto LAB_08120930;
      }
LAB_08120894:
      FUN_08002b10(4);
    }
  }
  else if (cVar2 == '\x02') {
    if ((*(ushort *)(DAT_08120854 + 4) & 2) != 0) {
      iVar6 = param_1 + DAT_08120858;
      FUN_080027b8(iVar6,DAT_0812085c,0x83,0,0);
      FUN_08001f1c(iVar6,(*DAT_08120860 & 0x1f00) << 3,0x1000);
      FUN_08002b10(3);
      uVar3 = 1;
      goto LAB_08120932;
    }
    if ((*(ushort *)(DAT_08120854 + 4) & 1) == 0) {
      if ((*(ushort *)(DAT_08120854 + 6) & 0x40) == 0) {
        if ((*(ushort *)(DAT_08120854 + 6) & 0x80) != 0) {
          param_1 = param_1 + DAT_08120908;
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
        iVar6 = param_1 + DAT_081208c0;
        if (*(char *)(iVar6 + 2) == '\0') {
          if (*(char *)(iVar6 + 0xe) == '\0') {
            FUN_08002b10(3);
            uVar3 = 1;
            goto LAB_08120932;
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
      iVar6 = param_1 + DAT_0812088c;
      if (*(char *)(param_1 + DAT_08120890 + (uint)*(byte *)(iVar6 + 2)) == -1) goto LAB_08120894;
      FUN_08002b10(2);
      *(undefined1 *)(param_1 + 3) = 3;
      *(undefined1 *)(iVar6 + 0x12) = 0;
    }
  }
  else if ((cVar2 == '\x03') && (cVar2 = FUN_08120d60(param_1), cVar2 != '\0')) {
LAB_08120930:
    uVar3 = 2;
LAB_08120932:
    *(undefined1 *)(param_1 + 3) = uVar3;
  }
  uVar5 = 1;
LAB_08120936:
  return CONCAT44(in_lr,uVar5);
}


