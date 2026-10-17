// undefined FUN_0811d468(void)
// entry 0x811d468


undefined4 FUN_0811d468(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar3 = 0;
  iVar4 = param_1 + DAT_0811d4e0;
  do {
    *(undefined1 *)(iVar4 + uVar3) = 0xff;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 7);
  iVar1 = param_1 + DAT_0811d4e4;
  *(undefined1 *)(iVar1 + 0x17) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 3) = 0;
  uVar3 = 0;
  uVar6 = 0;
  uVar5 = 0;
  iVar1 = *DAT_0811d4e8;
  do {
    if (((int)(*(byte *)((uVar3 >> 2) + iVar1) & 0xf) >> (uVar3 & 3) & 1U) != 0) {
      iVar2 = param_1 + DAT_0811d4e4;
      if (uVar6 == *(byte *)(iVar2 + 0x16) + uVar5) {
        *(char *)(iVar4 + uVar5) = (char)uVar3;
        *(char *)(iVar2 + 3) = *(char *)(iVar2 + 3) + '\x01';
        if (uVar5 < 6) {
          uVar5 = uVar5 + 1 & 0xff;
        }
      }
      else if (uVar5 == 0) {
        *(undefined1 *)(iVar2 + 0x17) = 1;
      }
      else if (uVar5 == 6) {
        *(undefined1 *)(iVar2 + 0x18) = 1;
        return in_lr;
      }
      uVar6 = uVar6 + 1 & 0xff;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x1c);
  return in_lr;
}


