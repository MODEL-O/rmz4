// undefined FUN_0809e910(void)
// entry 0x809e910


undefined4 FUN_0809e910(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    FUN_0809e5f4(param_1 + 0x54,1,uVar2 & 0xff,*(byte *)(param_1 + 10) >> 4 & 1);
    uVar1 = uVar2 * 0x10000 + 0x10000;
    uVar2 = uVar1 >> 0x10;
  } while ((int)uVar1 >> 0x10 < 4);
  FUN_08002b10(0x13a);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0x10;
  }
  return in_lr;
}


