// undefined FUN_08039e20(void)
// entry 0x8039e20


undefined8 FUN_08039e20(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pbVar5 = (byte *)(param_1 + DAT_08039e38);
  bVar1 = *pbVar5;
  if (bVar1 == 1) {
    pcVar6 = (char *)(param_1 + 0x274);
    cVar2 = *pcVar6;
    *pcVar6 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *pbVar5 = 0;
    }
    if (*(char *)(param_1 + DAT_08039ee0) == '\x01') {
      if ((*(ushort *)(param_1 + DAT_08039ee4) & 0x10) != 0) {
        *pcVar6 = '\n';
LAB_08039f48:
        *pbVar5 = *pbVar5 + 1;
      }
    }
    else if ((*(ushort *)(param_1 + DAT_08039efc) & 0x20) != 0) {
      *pcVar6 = '\n';
      goto LAB_08039f48;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        pcVar6 = (char *)(param_1 + 0x274);
        cVar2 = *pcVar6;
        *pcVar6 = cVar2 + -1;
        if ((char)(cVar2 + -1) == -1) {
          *pbVar5 = 0;
        }
        uVar3 = *(ushort *)(param_1 + DAT_08039e88);
        if ((uVar3 & 0x40) != 0) {
          if ((uVar3 & 0x10) == 0) {
            if ((uVar3 & 0x20) == 0) goto LAB_08039f76;
            *(byte *)(param_1 + DAT_08039ea4) = (byte)uVar3 & 0x10;
            *pcVar6 = '\n';
          }
          else {
            *(undefined1 *)(param_1 + DAT_08039e8c) = 1;
            *pcVar6 = '\n';
          }
          goto LAB_08039f48;
        }
        goto LAB_08039f76;
      }
    }
    else {
      if (bVar1 == 2) {
        pcVar6 = (char *)(param_1 + 0x274);
        cVar2 = *pcVar6;
        *pcVar6 = cVar2 + -1;
        if ((char)(cVar2 + -1) == -1) {
          *pbVar5 = 0;
        }
        if ((*(ushort *)(param_1 + DAT_08039f34) & 0x80) == 0) {
          if (*(char *)(param_1 + DAT_08039f38) == '\x01') {
            uVar3 = 0x10;
          }
          else {
            uVar3 = 0x20;
          }
          if ((uVar3 & *(ushort *)(param_1 + DAT_08039f34)) != 0) {
            *pcVar6 = '\n';
            goto LAB_08039f48;
          }
        }
        goto LAB_08039f76;
      }
      if (bVar1 == 3) {
        cVar2 = *(char *)(param_1 + 0x274) + -1;
        *(char *)(param_1 + 0x274) = cVar2;
        if (cVar2 == -1) {
          uVar4 = 0;
          *pbVar5 = 0;
        }
        else {
          uVar4 = 1;
        }
        goto LAB_08039f78;
      }
    }
    *(undefined1 *)(param_1 + DAT_08039f80) = 0;
  }
LAB_08039f76:
  uVar4 = 0;
LAB_08039f78:
  return CONCAT44(in_lr,uVar4);
}


