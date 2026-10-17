// undefined FUN_08039a74(void)
// entry 0x8039a74


undefined8 FUN_08039a74(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  pbVar6 = (byte *)(param_1 + DAT_08039a8c);
  bVar1 = *pbVar6;
  if (bVar1 == 1) {
    cVar3 = *(char *)(param_1 + 0x26c) + -1;
    *(char *)(param_1 + 0x26c) = cVar3;
    if (cVar3 == -1) {
      *pbVar6 = 0;
    }
    uVar2 = *(ushort *)(param_1 + DAT_08039b08);
    if (((uVar2 & 0x40) == 0) && ((uVar2 & 0x10) == 0)) {
      uVar4 = 0x20;
LAB_08039b34:
      if ((uVar4 & uVar2) == 0) goto LAB_08039b72;
    }
    *(undefined1 *)(param_1 + 0x26c) = 10;
    goto LAB_08039b3e;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_08039b6a;
    uVar2 = *(ushort *)(param_1 + DAT_08039abc);
    if ((uVar2 & 0x40) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) goto LAB_08039b72;
        *(undefined1 *)(param_1 + 0x26c) = 10;
      }
      else {
        *(undefined1 *)(param_1 + 0x26c) = 10;
      }
LAB_08039b3e:
      *pbVar6 = *pbVar6 + 1;
    }
  }
  else {
    if (bVar1 == 2) {
      cVar3 = *(char *)(param_1 + 0x26c) + -1;
      *(char *)(param_1 + 0x26c) = cVar3;
      if (cVar3 == -1) {
        *pbVar6 = 0;
      }
      uVar2 = *(ushort *)(param_1 + DAT_08039b48);
      if ((uVar2 & 0x30) == 0) {
        uVar4 = 0x40;
        goto LAB_08039b34;
      }
      goto LAB_08039b72;
    }
    if (bVar1 == 3) {
      cVar3 = *(char *)(param_1 + 0x26c) + -1;
      *(char *)(param_1 + 0x26c) = cVar3;
      if (cVar3 == -1) {
        uVar5 = 0;
        *pbVar6 = 0;
      }
      else {
        uVar5 = 1;
      }
      goto LAB_08039b74;
    }
LAB_08039b6a:
    *(undefined1 *)(param_1 + DAT_08039b7c) = 0;
  }
LAB_08039b72:
  uVar5 = 0;
LAB_08039b74:
  return CONCAT44(in_lr,uVar5);
}


