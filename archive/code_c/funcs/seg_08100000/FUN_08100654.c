// undefined FUN_08100654(void)
// entry 0x8100654


undefined4 FUN_08100654(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb4) = 0;
  pbVar4 = (byte *)(param_1 + 0xb5);
  if (0x5f < *pbVar4) {
    *(undefined1 *)(param_1 + 0xb4) = 1;
    *pbVar4 = *pbVar4 + 0xa0;
  }
  pbVar4 = (byte *)(param_1 + 0xb5);
  *(byte *)(param_1 + 0x13) = *pbVar4;
  if (0x1f < *pbVar4) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    bVar1 = *pbVar4;
    bVar2 = bVar1 - 0x20;
    *pbVar4 = bVar2;
    if (bVar2 < 2) {
      *(undefined1 *)(param_1 + 0xb6) = 0;
      *(char *)(param_1 + 0xb7) = *pbVar4 + 1;
      *(byte *)(param_1 + 0x12) = '4' - *pbVar4;
      FUN_0801cfc8(param_1,DAT_08100730 + (uint)*(byte *)(param_1 + 0xb4) & 0xffff,
                   *(undefined1 *)(param_1 + 0xb6),*(char *)(param_1 + 0xb7));
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    else if (bVar2 < 0x36) {
      *pbVar4 = bVar1 - 0x22;
      *(char *)(param_1 + 0xb6) = (*pbVar4 >> 1 & 3) + 1;
      *(char *)(param_1 + 0xb7) = (*pbVar4 & 1) + 1;
      FUN_0801cfc8(param_1,DAT_08100784 + (uint)*(byte *)(param_1 + 0xb4) & 0xffff,
                   *(char *)(param_1 + 0xb6),*(char *)(param_1 + 0xb7));
      *(byte *)(param_1 + 0x12) = '4' - *pbVar4;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    else {
      if (bVar2 < 0x3b) {
        *pbVar4 = bVar1 + 0xaa;
        *(byte *)(param_1 + 0xb6) = *pbVar4 >> 1;
        *(char *)(param_1 + 0xb7) = (*pbVar4 & 1) + 1;
        *(undefined1 *)(param_1 + 0x12) = 0xff;
        FUN_0801cfc8(param_1,DAT_081007cc + (uint)*(byte *)(param_1 + 0xb4) & 0xffff,
                     *(byte *)(param_1 + 0xb6),*(char *)(param_1 + 0xb7));
        uVar3 = 2;
      }
      else {
        *pbVar4 = bVar1 + 0xa5;
        pbVar5 = (byte *)(param_1 + 0xb4);
        *pbVar5 = *pbVar5 + 1 & 1;
        bVar1 = *pbVar4;
        if ((bVar1 == 0) || (bVar1 == 4)) {
          *(undefined1 *)(param_1 + 0xb7) = 1;
          *(byte *)(param_1 + 0xb6) = *pbVar4 >> 1;
        }
        else {
          *(byte *)(param_1 + 0xb7) = bVar1;
          *(undefined1 *)(param_1 + 0xb6) = 1;
        }
        FUN_0801cfc8(param_1,DAT_08100840 + (uint)*pbVar5 & 0xffff,*(undefined1 *)(param_1 + 0xb6),
                     *(undefined1 *)(param_1 + 0xb7));
        *(undefined1 *)(param_1 + 0x12) = 0xff;
        uVar3 = 3;
      }
      *(undefined1 *)(param_1 + 0xe) = uVar3;
    }
    goto LAB_08100834;
  }
  *(byte *)(param_1 + 0x12) = '!' - *pbVar4;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  bVar1 = *pbVar4;
  if (bVar1 < 0x10) {
LAB_081006b2:
    *(byte *)(param_1 + 0xb6) = *pbVar4 >> 1;
    bVar1 = *pbVar4 & 1;
  }
  else {
    if (0x19 < bVar1) {
      *pbVar4 = bVar1 - 0x1a;
      goto LAB_081006b2;
    }
    *pbVar4 = bVar1 - 0x10;
    *(undefined1 *)(param_1 + 0xb6) = 8;
    bVar1 = *pbVar4;
  }
  *(char *)(param_1 + 0xb7) = bVar1 + 1;
  FUN_0801cfc8(param_1,*(byte *)(param_1 + 0xb4) | 0xbe00,*(undefined1 *)(param_1 + 0xb6),
               *(char *)(param_1 + 0xb7));
LAB_08100834:
  *pbVar4 = 0;
  return in_lr;
}


