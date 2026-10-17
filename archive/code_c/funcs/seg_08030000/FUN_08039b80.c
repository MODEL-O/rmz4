// undefined FUN_08039b80(void)
// entry 0x8039b80


undefined8 FUN_08039b80(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  pbVar7 = (byte *)(param_1 + DAT_08039b98);
  bVar1 = *pbVar7;
  if (bVar1 == 1) {
    pcVar6 = (char *)(param_1 + DAT_08039c08);
    cVar3 = *pcVar6;
    *pcVar6 = cVar3 + -1;
    if ((char)(cVar3 + -1) == -1) {
      *pbVar7 = 0;
    }
    uVar2 = *(ushort *)(param_1 + DAT_08039c0c);
    if ((uVar2 & 0x80) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) goto LAB_08039ca8;
        *(byte *)(param_1 + 0x270) = (byte)uVar2 & 0x10;
        *pcVar6 = '\n';
      }
      else {
        *(undefined1 *)(param_1 + 0x270) = 1;
        *pcVar6 = '\n';
      }
    }
    else {
      *pcVar6 = '\n';
    }
LAB_08039c70:
    *pbVar7 = *pbVar7 + 1;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      pcVar6 = (char *)(param_1 + DAT_08039bd4);
      cVar3 = *pcVar6;
      *pcVar6 = cVar3 + -1;
      if ((char)(cVar3 + -1) == -1) {
        *pbVar7 = 0;
      }
      uVar2 = *(ushort *)(param_1 + DAT_08039bd8);
      if ((uVar2 & 0x80) == 0) {
        if ((uVar2 & 0x10) == 0) {
          uVar4 = 0x20;
          goto LAB_08039c66;
        }
LAB_08039c6c:
        *pcVar6 = '\n';
        goto LAB_08039c70;
      }
    }
    else {
LAB_08039ca0:
      *(undefined1 *)(param_1 + DAT_08039cb0) = 0;
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        cVar3 = *(char *)(param_1 + DAT_08039c98) + -1;
        *(char *)(param_1 + DAT_08039c98) = cVar3;
        if (cVar3 == -1) {
          uVar5 = 0;
          *pbVar7 = 0;
        }
        else {
          uVar5 = 1;
        }
        goto LAB_08039caa;
      }
      goto LAB_08039ca0;
    }
    pcVar6 = (char *)(param_1 + DAT_08039c78);
    cVar3 = *pcVar6;
    *pcVar6 = cVar3 + -1;
    if ((char)(cVar3 + -1) == -1) {
      *pbVar7 = 0;
    }
    uVar2 = *(ushort *)(param_1 + DAT_08039c7c);
    if ((uVar2 & 0x30) == 0) {
      uVar4 = 0x80;
LAB_08039c66:
      if ((uVar4 & uVar2) != 0) goto LAB_08039c6c;
    }
  }
LAB_08039ca8:
  uVar5 = 0;
LAB_08039caa:
  return CONCAT44(in_lr,uVar5);
}


