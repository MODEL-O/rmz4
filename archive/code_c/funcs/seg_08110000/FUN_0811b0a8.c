// undefined FUN_0811b0a8(void)
// entry 0x811b0a8


undefined4 FUN_0811b0a8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar2 = 0;
  iVar3 = param_1 + DAT_0811b124;
  do {
    *(undefined1 *)(iVar3 + uVar2) = 0xff;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 6);
  *(undefined1 *)(param_1 + 0xddc) = 0;
  *(undefined1 *)(param_1 + 0xddd) = 0;
  *(undefined1 *)(param_1 + 0xdda) = 0;
  uVar2 = 0;
  uVar5 = 0;
  uVar4 = 0;
  iVar1 = *DAT_0811b128;
  do {
    if (((int)(uint)*(byte *)((uVar2 >> 1) + iVar1) >> ((uVar2 & 1) << 2) & 0xfU) != 0) {
      if (uVar5 == *(byte *)(param_1 + 0xddb) + uVar4) {
        *(char *)(iVar3 + uVar4) = (char)uVar2;
        *(char *)(param_1 + 0xdda) = *(char *)(param_1 + 0xdda) + '\x01';
        if (uVar4 < 5) {
          uVar4 = uVar4 + 1 & 0xff;
        }
      }
      else if (uVar4 == 0) {
        *(undefined1 *)(param_1 + 0xddc) = 1;
      }
      else if (uVar4 == 5) {
        *(undefined1 *)(param_1 + 0xddd) = 1;
        return in_lr;
      }
      uVar5 = uVar5 + 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x33);
  return in_lr;
}


