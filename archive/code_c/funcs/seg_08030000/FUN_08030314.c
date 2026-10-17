// undefined FUN_08030314(void)
// entry 0x8030314


undefined4 FUN_08030314(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_08030330) == '\0') {
    if ((*(byte *)(param_1 + DAT_08030394) & 2) != 0) {
      return in_lr;
    }
    uVar3 = *(uint *)(param_1 + 600);
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 8) != 0) {
        return in_lr;
      }
      if ((uVar3 & 0x30) != 0) {
        *(undefined1 *)(param_1 + 0xe) = 1;
        *(undefined1 *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (((uVar3 & 0x80) != 0) && (sVar2 = FUN_0802c4fc(param_1,DAT_08030398,0), sVar2 != 0)) {
      *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x10;
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x58) + 0xd00;
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 7;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


