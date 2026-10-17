// undefined FUN_08120200(void)
// entry 0x8120200


undefined4 FUN_08120200(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ushort *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  FUN_08120b58();
  iVar2 = DAT_08120224;
  iVar1 = DAT_0812021c;
  uVar6 = 0;
  puVar4 = (ushort *)(DAT_08120220 + DAT_0812021c);
  do {
    if (6 < uVar6) {
LAB_0812026a:
      iVar2 = DAT_08120364;
      iVar1 = DAT_08120360;
      if (*(byte *)(param_1 + 3) < 2) {
        uVar6 = 0;
        cVar3 = '\0';
        do {
          if (((int)(uint)*(byte *)(((int)(uVar6 + 0x4c) >> 3) + DAT_081202d8) >> (uVar6 + 0x4c & 7)
              & 1U) != 0) {
            cVar3 = cVar3 + '\x01';
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 8);
        FUN_08118348(cVar3,0x15,1);
        iVar2 = DAT_081202e0;
        iVar1 = DAT_081202dc;
        FUN_0810d85c((uint)*(ushort *)(DAT_081202dc + 0xc) + DAT_081202e0,0x16,1);
        FUN_08118348(8,0x17,1);
        FUN_0810d85c((uint)*(ushort *)(iVar1 + DAT_081202e4) + iVar2,0x11,5);
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + DAT_08120314 + (uint)*(byte *)(param_1 + DAT_08120310 + 2)
                               );
        if (uVar6 == 0xff) {
          FUN_0810d85c((uint)*(ushort *)(DAT_08120318 + DAT_0812031c) + DAT_08120320,0x11,1);
        }
        else {
          FUN_0810d85c((uint)*(ushort *)((uVar6 + 600) * 2 + DAT_08120360) + DAT_08120364,0x11,1);
          FUN_0810d85c((uint)*(ushort *)((uVar6 + 700) * 2 + iVar1) + iVar2,0x11,5);
        }
      }
      return in_lr;
    }
    pbVar5 = (byte *)(param_1 + DAT_081202d4 + uVar6);
    if (*pbVar5 == 0xff) {
      if (uVar6 == 0) {
        FUN_0810d85c((uint)*puVar4 + iVar2,2,2);
      }
      goto LAB_0812026a;
    }
    FUN_0810d85c((uint)*(ushort *)((*pbVar5 + 600) * 2 + iVar1) + iVar2,2,uVar6 * 2 + 2);
    uVar6 = uVar6 + 1 & 0xff;
  } while( true );
}


