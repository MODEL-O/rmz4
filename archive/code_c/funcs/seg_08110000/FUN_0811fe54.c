// undefined FUN_0811fe54(void)
// entry 0x811fe54


undefined4 FUN_0811fe54(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ushort *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  FUN_08120aa8();
  iVar2 = DAT_0811fe78;
  iVar1 = DAT_0811fe70;
  uVar6 = 0;
  puVar4 = (ushort *)(DAT_0811fe74 + DAT_0811fe70);
  do {
    if (6 < uVar6) {
LAB_0811febe:
      iVar2 = DAT_0811ffb8;
      iVar1 = DAT_0811ffb4;
      if (*(byte *)(param_1 + 3) < 2) {
        uVar6 = 0;
        cVar3 = '\0';
        do {
          if (((int)(uint)*(byte *)(((int)(uVar6 + 0x3c) >> 3) + DAT_0811ff30) >> (uVar6 + 0x3c & 7)
              & 1U) != 0) {
            cVar3 = cVar3 + '\x01';
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 0x10);
        FUN_08118348(cVar3,0x15,1);
        iVar2 = DAT_0811ff38;
        iVar1 = DAT_0811ff34;
        FUN_0810d85c((uint)*(ushort *)(DAT_0811ff34 + 0xc) + DAT_0811ff38,0x16,1);
        FUN_08118348(0x10,0x18,1);
        FUN_0810d85c((uint)*(ushort *)(iVar1 + 0x570) + iVar2,0x11,5);
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + DAT_0811ff68 + (uint)*(byte *)(param_1 + DAT_0811ff64 + 2)
                               );
        if (uVar6 == 0xff) {
          FUN_0810d85c((uint)*(ushort *)(DAT_0811ff6c + DAT_0811ff70) + DAT_0811ff74,0x11,1);
        }
        else {
          FUN_0810d85c((uint)*(ushort *)((uVar6 + 600) * 2 + DAT_0811ffb4) + DAT_0811ffb8,0x11,1);
          FUN_0810d85c((uint)*(ushort *)((uVar6 + 700) * 2 + iVar1) + iVar2,0x11,5);
        }
      }
      return in_lr;
    }
    pbVar5 = (byte *)(param_1 + DAT_0811ff2c + uVar6);
    if (*pbVar5 == 0xff) {
      if (uVar6 == 0) {
        FUN_0810d85c((uint)*puVar4 + iVar2,2,2);
      }
      goto LAB_0811febe;
    }
    FUN_0810d85c((uint)*(ushort *)((*pbVar5 + 600) * 2 + iVar1) + iVar2,2,uVar6 * 2 + 2);
    uVar6 = uVar6 + 1 & 0xff;
  } while( true );
}


