// undefined FUN_081019d0(void)
// entry 0x81019d0


undefined4 FUN_081019d0(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xd);
  if (bVar2 == 1) {
LAB_08101a5c:
    if ((((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) || (*DAT_08101ab0 == '\0')) ||
       (*(int *)(DAT_08101ab4 + 0x628) != param_1 + 0x74)) goto LAB_08101b92;
    bVar1 = 0 < *(int *)(*DAT_08101ab8 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if ((*(byte *)(DAT_08101af4 + 0xd) & 2) == 0) {
      uVar6 = 0;
      uVar5 = 0;
      do {
        if (((int)(uint)*(byte *)(((int)(uVar5 + 0x45) >> 3) + DAT_08101af4 + 4) >>
             (uVar5 + 0x45 & 7) & 1U) != 0) {
          uVar6 = uVar6 + 1 & 0xff;
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < 4);
      if (uVar6 == 4) {
        FUN_0810e518(DAT_08101b44);
        *(byte *)(DAT_08101b48 + 0xd) = *(byte *)(DAT_08101b48 + 0xd) | 2;
        uVar3 = 0x10;
        goto LAB_08101b90;
      }
      FUN_0810e518(uVar6 + DAT_08101b74);
    }
    else {
      FUN_0810e518(DAT_08101af8);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08101b5a:
    if (DAT_08101b78[1] != 0) goto LAB_08101b92;
    *DAT_08101b78 = *DAT_08101b78 | 2;
    *DAT_08101b7c = 0;
    uVar3 = 1;
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) goto LAB_08101b92;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0801cc9c(param_1);
      uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_08101aac,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      FUN_0801cf00(param_1,0x7a00);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(undefined1 *)(param_1 + 0x25) = 0x18;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_08101a5c;
    }
    if (bVar2 == 2) goto LAB_08101b5a;
    if ((bVar2 != 0x10) || (*(short *)(DAT_08101ba0 + 2) != 0)) goto LAB_08101b92;
    FUN_0810e518(DAT_08101ba4);
    uVar3 = 2;
  }
LAB_08101b90:
  *(undefined1 *)(param_1 + 0xd) = uVar3;
LAB_08101b92:
  FUN_0801cff0(param_1);
  return in_lr;
}


