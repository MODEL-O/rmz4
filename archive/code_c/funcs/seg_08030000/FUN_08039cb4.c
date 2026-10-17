// undefined FUN_08039cb4(void)
// entry 0x8039cb4


undefined8 FUN_08039cb4(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pbVar5 = (byte *)(param_1 + DAT_08039ccc);
  bVar1 = *pbVar5;
  if (bVar1 == 1) {
    pcVar6 = (char *)(param_1 + DAT_08039d74);
    cVar2 = *pcVar6;
    *pcVar6 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *pbVar5 = 0;
    }
    if (*(char *)(param_1 + DAT_08039d78) == '\x01') {
      if ((*(ushort *)(param_1 + DAT_08039d7c) & 0x10) != 0) {
        *pcVar6 = '\n';
LAB_08039de4:
        *pbVar5 = *pbVar5 + 1;
      }
    }
    else if ((*(ushort *)(param_1 + DAT_08039d94) & 0x20) != 0) {
      *pcVar6 = '\n';
      goto LAB_08039de4;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        pcVar6 = (char *)(param_1 + DAT_08039d1c);
        cVar2 = *pcVar6;
        *pcVar6 = cVar2 + -1;
        if ((char)(cVar2 + -1) == -1) {
          *pbVar5 = 0;
        }
        uVar3 = *(ushort *)(param_1 + DAT_08039d20);
        if ((uVar3 & 0x80) != 0) {
          if ((uVar3 & 0x10) == 0) {
            if ((uVar3 & 0x20) == 0) goto LAB_08039e14;
            *(byte *)(param_1 + DAT_08039d3c) = (byte)uVar3 & 0x10;
            *pcVar6 = '\n';
          }
          else {
            *(undefined1 *)(param_1 + DAT_08039d24) = 1;
            *pcVar6 = '\n';
          }
          goto LAB_08039de4;
        }
        goto LAB_08039e14;
      }
    }
    else {
      if (bVar1 == 2) {
        pcVar6 = (char *)(param_1 + DAT_08039dcc);
        cVar2 = *pcVar6;
        *pcVar6 = cVar2 + -1;
        if ((char)(cVar2 + -1) == -1) {
          *pbVar5 = 0;
        }
        if ((*(ushort *)(param_1 + DAT_08039dd0) & 0x40) == 0) {
          if (*(char *)(param_1 + DAT_08039dd4) == '\x01') {
            uVar3 = 0x10;
          }
          else {
            uVar3 = 0x20;
          }
          if ((uVar3 & *(ushort *)(param_1 + DAT_08039dd0)) != 0) {
            *pcVar6 = '\n';
            goto LAB_08039de4;
          }
        }
        goto LAB_08039e14;
      }
      if (bVar1 == 3) {
        cVar2 = *(char *)(param_1 + DAT_08039e04) + -1;
        *(char *)(param_1 + DAT_08039e04) = cVar2;
        if (cVar2 == -1) {
          uVar4 = 0;
          *pbVar5 = 0;
        }
        else {
          uVar4 = 1;
        }
        goto LAB_08039e16;
      }
    }
    *(undefined1 *)(param_1 + DAT_08039e1c) = 0;
  }
LAB_08039e14:
  uVar4 = 0;
LAB_08039e16:
  return CONCAT44(in_lr,uVar4);
}


