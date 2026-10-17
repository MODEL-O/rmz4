// undefined FUN_080a20b8(void)
// entry 0x80a20b8


undefined4 FUN_080a20b8(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  pbVar1 = (byte *)(param_1 + 0xb5);
  do {
    if (((int)(uint)*pbVar1 >> uVar2 & 1U) == 0) {
      FUN_080ca948(param_1 + 0x54,uVar2,*(undefined1 *)(param_1 + 0xb4));
      *pbVar1 = (byte)(1 << uVar2) | *pbVar1;
      return in_lr;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 8);
  if (*pbVar1 == 0xff) {
    *pbVar1 = 0;
  }
  return in_lr;
}


