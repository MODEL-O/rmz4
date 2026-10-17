// undefined FUN_080c6088(void)
// entry 0x80c6088


undefined4 FUN_080c6088(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar2 = 0;
  do {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    uVar2 = uVar2 + 1;
    FUN_080d4c8c(&local_1c,(uVar2 & 3) * 0x1c + DAT_080c60d0,0,uVar1 | uVar1 << 4);
  } while ((int)uVar2 < 2);
  return in_lr;
}


