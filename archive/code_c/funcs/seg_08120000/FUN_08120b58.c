// undefined FUN_08120b58(void)
// entry 0x8120b58


undefined4 FUN_08120b58(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar4 = 0;
  iVar2 = param_1 + DAT_08120bd4;
  do {
    *(undefined1 *)(iVar2 + uVar4) = 0xff;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 7);
  iVar1 = param_1 + DAT_08120bd8;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  *(undefined1 *)(iVar1 + 3) = 0;
  iVar1 = DAT_08120bdc;
  uVar4 = 0;
  uVar6 = 0;
  uVar5 = 0;
  do {
    if (((int)(uint)*(byte *)(((int)(uVar4 + 0x4c) >> 3) + iVar1) >> (uVar4 + 0x4c & 7) & 1U) != 0)
    {
      iVar3 = param_1 + DAT_08120bd8;
      if (uVar6 == *(byte *)(iVar3 + 0xd) + uVar5) {
        *(char *)(iVar2 + uVar5) = (char)uVar4 + 'H';
        *(char *)(iVar3 + 3) = *(char *)(iVar3 + 3) + '\x01';
        if (uVar5 < 6) {
          uVar5 = uVar5 + 1 & 0xff;
        }
      }
      else if (uVar5 == 0) {
        *(undefined1 *)(iVar3 + 0xe) = 1;
      }
      else if (uVar5 == 6) {
        *(undefined1 *)(iVar3 + 0xf) = 1;
        return in_lr;
      }
      uVar6 = uVar6 + 1 & 0xff;
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 8);
  return in_lr;
}


