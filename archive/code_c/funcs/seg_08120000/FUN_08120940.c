// undefined FUN_08120940(void)
// entry 0x8120940


undefined4 FUN_08120940(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ushort *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  FUN_08120cb0();
  iVar2 = DAT_08120964;
  iVar1 = DAT_0812095c;
  uVar6 = 0;
  puVar4 = (ushort *)(DAT_08120960 + DAT_0812095c);
  do {
    if (6 < uVar6) {
LAB_081209aa:
      iVar2 = DAT_08120aa4;
      iVar1 = DAT_08120aa0;
      if (*(byte *)(param_1 + 3) < 2) {
        uVar6 = 0;
        cVar3 = '\0';
        do {
          if (((int)(uint)*(byte *)(((int)(uVar6 + 0x54) >> 3) + DAT_08120a18) >> (uVar6 + 0x54 & 7)
              & 1U) != 0) {
            cVar3 = cVar3 + '\x01';
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 0x10);
        FUN_08118348(cVar3,0x15,1);
        iVar2 = DAT_08120a20;
        iVar1 = DAT_08120a1c;
        FUN_0810d85c((uint)*(ushort *)(DAT_08120a1c + 0xc) + DAT_08120a20,0x16,1);
        FUN_08118348(0x10,0x18,1);
        FUN_0810d85c((uint)*(ushort *)(iVar1 + DAT_08120a24) + iVar2,0x11,5);
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + DAT_08120a54 + (uint)*(byte *)(param_1 + DAT_08120a50 + 2)
                               );
        if (uVar6 == 0xff) {
          FUN_0810d85c((uint)*(ushort *)(DAT_08120a58 + DAT_08120a5c) + DAT_08120a60,0x11,1);
        }
        else {
          FUN_0810d85c((uint)*(ushort *)((uVar6 + 600) * 2 + DAT_08120aa0) + DAT_08120aa4,0x11,1);
          FUN_0810d85c((uint)*(ushort *)((uVar6 + 700) * 2 + iVar1) + iVar2,0x11,5);
        }
      }
      return in_lr;
    }
    pbVar5 = (byte *)(param_1 + DAT_08120a14 + uVar6);
    if (*pbVar5 == 0xff) {
      if (uVar6 == 0) {
        FUN_0810d85c((uint)*puVar4 + iVar2,2,2);
      }
      goto LAB_081209aa;
    }
    FUN_0810d85c((uint)*(ushort *)((*pbVar5 + 600) * 2 + iVar1) + iVar2,2,uVar6 * 2 + 2);
    uVar6 = uVar6 + 1 & 0xff;
  } while( true );
}


