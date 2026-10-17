// undefined FUN_080d19a8(void)
// entry 0x80d19a8


undefined4 FUN_080d19a8(undefined4 param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  do {
    iVar3 = FUN_08005500(*DAT_080d19f8);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0x25) = 1;
      iVar1 = DAT_080d19fc;
      *(undefined1 *)(iVar3 + 9) = 4;
      *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0x10);
      *(undefined2 *)(iVar3 + 0x20) = 0;
      *(undefined1 *)(iVar3 + 0x22) = 0;
      *(undefined1 *)(iVar3 + 0x10) = 0;
      if (uVar6 == 0) {
        bVar2 = param_3 & 1;
      }
      else {
        bVar2 = 0;
      }
      *(byte *)(iVar3 + 0x11) = bVar2;
      if (bVar2 != 0) {
        *(undefined4 *)(iVar3 + 0x74) = param_1;
        *(undefined4 *)(iVar3 + 0x78) = param_2;
      }
      iVar1 = DAT_080d1a74;
      iVar5 = (param_3 ^ 1) * -0x40 + 0x200;
      iVar4 = iVar5 * *(short *)((uVar6 * 0x20000000 + 0x40000000 >> 0x17) + DAT_080d1a74);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(iVar3 + 0x5c) = iVar4 >> 8;
      iVar5 = iVar5 * *(short *)((uVar6 & 7) * 0x40 + iVar1);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      *(int *)(iVar3 + 0x60) = iVar5 >> 8;
      *(undefined4 *)(iVar3 + 0x54) = param_1;
      *(undefined4 *)(iVar3 + 0x58) = param_2;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 8);
  return in_lr;
}


