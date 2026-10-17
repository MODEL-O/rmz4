// undefined FUN_0811ce58(void)
// entry 0x811ce58


undefined8 FUN_0811ce58(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar8 = param_1 + DAT_0811cec8;
    FUN_080027b8(iVar8,DAT_0811cecc,0x84,0,0);
    FUN_08001f1c(iVar8,(*DAT_0811ced0 & 0x1f00) << 3,0x1000);
    iVar8 = param_1 + DAT_0811ced4;
    *(undefined1 *)(iVar8 + 2) = 0;
    *(undefined1 *)(iVar8 + 4) = 4;
    *(undefined1 *)(iVar8 + 0x16) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  FUN_0811d468(param_1);
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\x01') {
    uVar3 = *(ushort *)(DAT_0811ced8 + 6);
    if ((uVar3 & 0x10) != 0) {
      FUN_08002b10(1);
      uVar5 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      goto LAB_0811d082;
    }
    if ((*(ushort *)(DAT_0811ced8 + 4) & 0x81) == 0) {
      if ((*(ushort *)(DAT_0811ced8 + 4) & 2) != 0) {
        *(undefined1 *)(param_1 + DAT_0811cf14 + 0x1b) = 1;
      }
    }
    else {
      iVar8 = param_1 + DAT_0811cefc;
      if (*(char *)(iVar8 + 3) != '\0') {
        FUN_08002b10(2);
        *(byte *)(iVar8 + 2) = (byte)uVar3 & 0x10;
LAB_0811d07c:
        uVar4 = 2;
        goto LAB_0811d07e;
      }
LAB_0811cf94:
      FUN_08002b10(4);
    }
  }
  else {
    if (cVar1 == '\x02') {
      if ((*(ushort *)(DAT_0811cf34 + 4) & 2) == 0) {
        if ((*(ushort *)(DAT_0811cf34 + 4) & 1) == 0) {
          if ((*(ushort *)(DAT_0811cf34 + 6) & 0x40) == 0) {
            if ((*(ushort *)(DAT_0811cf34 + 6) & 0x80) != 0) {
              param_1 = param_1 + DAT_0811d008;
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
            iVar8 = param_1 + DAT_0811cfc0;
            if (*(char *)(iVar8 + 2) == '\0') {
              if (*(char *)(iVar8 + 0x17) == '\0') {
                FUN_08002b10(3);
                uVar4 = 1;
                goto LAB_0811d07e;
              }
              FUN_08002b10(1);
              *(char *)(iVar8 + 0x16) = *(char *)(iVar8 + 0x16) + -1;
            }
            else {
              FUN_08002b10(1);
              *(char *)(iVar8 + 2) = *(char *)(iVar8 + 2) + -1;
            }
          }
          goto LAB_0811d080;
        }
        bVar2 = *(byte *)(param_1 + DAT_0811cf8c + 6 + (uint)*(byte *)(param_1 + DAT_0811cf8c + 2));
        uVar6 = (uint)bVar2;
        uVar7 = 0;
        if ((uVar6 != 0xff) &&
           (((int)(uint)*(byte *)(*DAT_0811cf90 + (uint)(bVar2 >> 2)) >> (uVar6 & 3) + 4 & 1U) == 0)
           ) {
          uVar6 = FUN_0811d8f4(uVar6);
          uVar7 = -(uVar6 & 0xff) >> 0x1f;
        }
        if (uVar7 == 0) goto LAB_0811cf94;
        FUN_08002b10(2);
        uVar4 = 3;
      }
      else {
        FUN_08002b10(3);
        uVar4 = 1;
      }
    }
    else {
      if (cVar1 != '\x03') {
        if ((cVar1 == '\x04') && (*(short *)(DAT_0811d08c + 4) != 0)) goto LAB_0811d07c;
        goto LAB_0811d080;
      }
      if ((*(ushort *)(DAT_0811d03c + 4) & 2) == 0) {
        if ((*(ushort *)(DAT_0811d03c + 4) & 1) == 0) goto LAB_0811d080;
        FUN_0811d818(*(undefined1 *)
                      (param_1 + DAT_0811d06c + (uint)*(byte *)(param_1 + DAT_0811d068 + 2)));
        FUN_08002b10(0x1c);
        uVar4 = 4;
      }
      else {
        FUN_08002b10(3);
        uVar4 = 2;
      }
    }
LAB_0811d07e:
    *(undefined1 *)(param_1 + 3) = uVar4;
  }
LAB_0811d080:
  uVar5 = 1;
LAB_0811d082:
  return CONCAT44(in_lr,uVar5);
}


