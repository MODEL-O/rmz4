// undefined FUN_080f6a24(void)
// entry 0x80f6a24


undefined4 FUN_080f6a24(int param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  FUN_080f6ab8(param_1 + 0x54,param_2);
  iVar1 = FUN_080f6a90();
  if ((*(ushort *)(DAT_080f6a60 + 0x1d0) & 0x7f) == 10) {
    uVar2 = FUN_08129198(*(undefined4 *)(DAT_080f6a60 + DAT_080f6a64),(iVar1 + 0x3c) * 2);
  }
  else {
    uVar2 = 0;
  }
  iVar1 = DAT_080f6a8c;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + iVar1));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return in_lr;
}


