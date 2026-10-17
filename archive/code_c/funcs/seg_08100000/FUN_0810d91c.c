// undefined FUN_0810d91c(void)
// entry 0x810d91c


undefined4
FUN_0810d91c(byte *param_1,undefined1 param_2,undefined1 param_3,ushort param_4,ushort param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  short sVar5;
  ushort uVar6;
  undefined4 in_lr;
  
  iVar3 = DAT_0810d9f8;
  if (*(short *)(DAT_0810d9f8 + 4) < 0x60) {
    uVar6 = 0;
    if (param_4 != 0) {
      bVar1 = *param_1;
      if (0xfc < bVar1) {
        return in_lr;
      }
      do {
        if (bVar1 == 0xfc) {
          uVar6 = uVar6 + 1;
        }
        param_1 = param_1 + 1;
      } while ((uVar6 < param_4) && (bVar1 = *param_1, bVar1 < 0xfd));
    }
    if (*param_1 < 0xfd) {
      *(byte **)(*(short *)(DAT_0810d9f8 + 4) * 4 + DAT_0810d9f8 + 8) = param_1;
      *(undefined1 *)((int)*(short *)(iVar3 + 4) + iVar3 + 0x188) = param_2;
      *(undefined1 *)((int)*(short *)(iVar3 + 4) + iVar3 + 0x1e8) = param_3;
      sVar5 = 0;
      if ((uVar6 < param_5) && (bVar1 = *param_1, bVar1 < 0xfd)) {
        puVar4 = (undefined4 *)(DAT_0810d9fc + iVar3);
        sVar5 = 0;
        do {
          if (bVar1 == 0xf9) {
            sVar2 = FUN_0810d7ec(*puVar4);
            sVar5 = sVar5 + sVar2;
          }
          if (*param_1 < 0xf0) {
            sVar5 = sVar5 + 1;
          }
          if (*param_1 == 0xfc) {
            uVar6 = uVar6 + 1;
          }
          param_1 = param_1 + 1;
          iVar3 = DAT_0810d9f8;
        } while ((uVar6 < param_5) && (bVar1 = *param_1, bVar1 < 0xfd));
      }
      *(short *)(*(short *)(iVar3 + 4) * 2 + iVar3 + 0x248) = sVar5;
      *(short *)(iVar3 + 4) = *(short *)(iVar3 + 4) + 1;
    }
  }
  return in_lr;
}


