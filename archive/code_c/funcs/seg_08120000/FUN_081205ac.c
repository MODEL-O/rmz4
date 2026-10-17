// undefined FUN_081205ac(void)
// entry 0x81205ac


undefined4 FUN_081205ac(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ushort *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  FUN_08120c08();
  iVar2 = DAT_081205d0;
  iVar1 = DAT_081205c8;
  uVar6 = 0;
  puVar4 = (ushort *)(DAT_081205cc + DAT_081205c8);
  do {
    if (6 < uVar6) {
LAB_08120616:
      iVar2 = DAT_08120710;
      iVar1 = DAT_0812070c;
      if (*(byte *)(param_1 + 3) < 2) {
        uVar6 = 0;
        cVar3 = '\0';
        do {
          if (((int)(uint)*(byte *)(((int)(uVar6 + 4) >> 3) + DAT_08120684) >> (uVar6 + 4 & 7) & 1U)
              != 0) {
            cVar3 = cVar3 + '\x01';
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 0x38);
        FUN_08118348(cVar3,0x15,1);
        iVar2 = DAT_0812068c;
        iVar1 = DAT_08120688;
        FUN_0810d85c((uint)*(ushort *)(DAT_08120688 + 0xc) + DAT_0812068c,0x16,1);
        FUN_08118348(0x38,0x18,1);
        FUN_0810d85c((uint)*(ushort *)(iVar1 + DAT_08120690) + iVar2,0x11,5);
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + DAT_081206c0 + (uint)*(byte *)(param_1 + DAT_081206bc + 2)
                               );
        if (uVar6 == 0xff) {
          FUN_0810d85c((uint)*(ushort *)(DAT_081206c4 + DAT_081206c8) + DAT_081206cc,0x11,1);
        }
        else {
          FUN_0810d85c((uint)*(ushort *)((uVar6 + 600) * 2 + DAT_0812070c) + DAT_08120710,0x11,1);
          FUN_0810d85c((uint)*(ushort *)((uVar6 + 700) * 2 + iVar1) + iVar2,0x11,5);
        }
      }
      return in_lr;
    }
    pbVar5 = (byte *)(param_1 + DAT_08120680 + uVar6);
    if (*pbVar5 == 0xff) {
      if (uVar6 == 0) {
        FUN_0810d85c((uint)*puVar4 + iVar2,2,2);
      }
      goto LAB_08120616;
    }
    FUN_0810d85c((uint)*(ushort *)((*pbVar5 + 600) * 2 + iVar1) + iVar2,2,uVar6 * 2 + 2);
    uVar6 = uVar6 + 1 & 0xff;
  } while( true );
}


