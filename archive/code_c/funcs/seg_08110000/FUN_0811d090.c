// undefined FUN_0811d090(void)
// entry 0x811d090


undefined4 FUN_0811d090(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  ushort *puVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  
  FUN_0811d468();
  iVar3 = DAT_0811d0b8;
  iVar10 = DAT_0811d0b0;
  puVar5 = (ushort *)(DAT_0811d0b4 + DAT_0811d0b0);
  for (uVar9 = 0; uVar9 < 7; uVar9 = uVar9 + 1 & 0xff) {
    pbVar6 = (byte *)(param_1 + DAT_0811d138 + uVar9);
    if (*pbVar6 == 0xff) {
      if (uVar9 == 0) {
        FUN_0810d85c((uint)*puVar5 + iVar3,2,2);
      }
      break;
    }
    FUN_0810d85c((uint)*(ushort *)((*pbVar6 + 400) * 2 + iVar10) + iVar3,2,uVar9 * 2 + 2);
  }
  puVar5 = DAT_0811d13c;
  cVar4 = *(char *)(param_1 + 3);
  if (cVar4 == '\x01') {
    uVar9 = 0;
    do {
      iVar10 = DAT_0811d140;
      FUN_0810d85c((uint)*puVar5 + DAT_0811d140,0x11,uVar9 * 2 + 6);
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < 4);
    FUN_0810d85c((uint)*(ushort *)(DAT_0811d144 + 0x3cc) + iVar10,1,0x12);
    return in_lr;
  }
  if (cVar4 == '\x04') {
    puVar5 = (ushort *)(DAT_0811d154 + DAT_0811d158);
  }
  else {
    if (cVar4 != '\x02') {
      FUN_0810d85c((uint)*(ushort *)(DAT_0811d1c4 + 0x3d4) + DAT_0811d1c8,1,0x12);
      goto LAB_0811d19a;
    }
    puVar5 = (ushort *)(DAT_0811d178 + DAT_0811d17c);
  }
  FUN_0810d85c((uint)*puVar5 + DAT_0811d180,1,0x12);
LAB_0811d19a:
  iVar3 = DAT_0811d208;
  iVar10 = DAT_0811d204;
  iVar7 = param_1 + DAT_0811d1cc + 6;
  pbVar6 = (byte *)(iVar7 + (uint)*(byte *)(param_1 + DAT_0811d1cc + 2));
  if (*pbVar6 == 0xff) {
    FUN_0810d85c((uint)*(ushort *)(DAT_0811d1c4 + DAT_0811d1d0) + DAT_0811d1c8,0x11,6);
  }
  else {
    bVar2 = *pbVar6;
    uVar9 = 0;
    do {
      pbVar6 = (byte *)(uVar9 + (uint)bVar2 * 4 + DAT_0811d20c);
      if (*pbVar6 == 0xff) {
        FUN_0810d85c((uint)*DAT_0811d210 + iVar3,0x11,uVar9 * 2 + 6);
      }
      else {
        bVar1 = *pbVar6;
        uVar8 = (uint)bVar1;
        if (((int)(uint)*(byte *)(*DAT_0811d254 + (uint)(bVar1 >> 1)) >> ((uVar8 & 1) << 2) & 0xfU)
            == 0) {
          FUN_0810d85c((uint)*(ushort *)((uVar8 + 0x154) * 2 + iVar10) + iVar3,0x11,uVar9 * 2 + 6);
        }
        else {
          FUN_0810d85c((uint)*(ushort *)((uVar8 + 0x118) * 2 + iVar10) + iVar3,0x11,uVar9 * 2 + 6);
          FUN_0811d5cc(param_1,uVar8);
        }
      }
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < 4);
    FUN_0811d6c0(param_1);
  }
  iVar10 = param_1 + DAT_0811d2cc;
  uVar9 = (uint)*(byte *)(iVar7 + (uint)*(byte *)(iVar10 + 2));
  if (uVar9 != 0xff) {
    FUN_0810d85c((uint)*(ushort *)((uVar9 + 400) * 2 + DAT_0811d2d0) + DAT_0811d2d4,0x11,1);
  }
  if (*(char *)(param_1 + 3) == '\x04') {
    FUN_0810d85c((uint)*(ushort *)(DAT_0811d2d0 + DAT_0811d2d8) + DAT_0811d2d4,0x11,0xf);
    *(undefined1 *)(iVar10 + 0x19) = 1;
  }
  else {
    bVar2 = *(byte *)((uint)*(byte *)(iVar10 + 2) + iVar7);
    uVar9 = (uint)bVar2;
    if (uVar9 != 0xff) {
      if (((int)(uint)*(byte *)(*DAT_0811d318 + (uint)(bVar2 >> 2)) >> (uVar9 & 3) + 4 & 1U) == 0) {
        cVar4 = FUN_0811d8f4(uVar9);
        if (cVar4 == '\0') {
          FUN_0810d85c((uint)*(ushort *)(DAT_0811d378 + 0x3c0) + DAT_0811d37c,0x11,0xf);
        }
        else {
          FUN_0810d85c((uint)*(ushort *)(DAT_0811d348 + DAT_0811d34c) + DAT_0811d350,0x11,0xf);
          *(undefined1 *)(iVar10 + 0x19) = 1;
        }
      }
      else {
        FUN_0810d85c((uint)*(ushort *)(DAT_0811d31c + 0x3c4) + DAT_0811d320,0x11,0xf);
      }
    }
  }
  return in_lr;
}


