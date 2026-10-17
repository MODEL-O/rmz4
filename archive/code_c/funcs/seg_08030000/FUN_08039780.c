// undefined FUN_08039780(void)
// entry 0x8039780


undefined8 FUN_08039780(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pbVar5 = (byte *)(param_1 + DAT_08039798);
  bVar1 = *pbVar5;
  if (bVar1 == 1) {
    pcVar6 = (char *)(param_1 + DAT_080397fc);
    cVar3 = *pcVar6;
    *pcVar6 = cVar3 + -1;
    if ((char)(cVar3 + -1) == -1) {
      *pbVar5 = 0;
    }
    uVar2 = *(ushort *)(param_1 + DAT_08039800);
    if ((uVar2 & 0x80) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) goto LAB_080398a8;
        *pcVar6 = '\n';
      }
      else {
        *pcVar6 = '\n';
      }
    }
    else {
      *pcVar6 = '\n';
    }
LAB_08039878:
    *pbVar5 = *pbVar5 + 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (((*(ushort *)(param_1 + DAT_080397c8) & 0x30) != 0) ||
           ((*(ushort *)(param_1 + DAT_080397c8) & 0x80) == 0)) goto LAB_080398a8;
        *(undefined1 *)(param_1 + DAT_080397cc) = 10;
        goto LAB_08039878;
      }
    }
    else {
      if (bVar1 == 2) {
        pcVar6 = (char *)(param_1 + DAT_0803985c);
        cVar3 = *pcVar6;
        *pcVar6 = cVar3 + -1;
        if ((char)(cVar3 + -1) == -1) {
          *pbVar5 = 0;
        }
        uVar2 = *(ushort *)(param_1 + DAT_08039860);
        if ((uVar2 & 0x80) == 0) {
          if ((uVar2 & 0x10) == 0) {
            if ((uVar2 & 0x20) == 0) goto LAB_080398a8;
            *(byte *)(param_1 + 0x268) = (byte)uVar2 & 0x10;
          }
          else {
            *(undefined1 *)(param_1 + 0x268) = 1;
          }
          *pcVar6 = '\n';
          goto LAB_08039878;
        }
        goto LAB_080398a8;
      }
      if (bVar1 == 3) {
        cVar3 = *(char *)(param_1 + DAT_08039898) + -1;
        *(char *)(param_1 + DAT_08039898) = cVar3;
        if (cVar3 == -1) {
          uVar4 = 0;
          *pbVar5 = 0;
        }
        else {
          uVar4 = 1;
        }
        goto LAB_080398aa;
      }
    }
    *(undefined1 *)(param_1 + DAT_080398b0) = 0;
  }
LAB_080398a8:
  uVar4 = 0;
LAB_080398aa:
  return CONCAT44(in_lr,uVar4);
}


