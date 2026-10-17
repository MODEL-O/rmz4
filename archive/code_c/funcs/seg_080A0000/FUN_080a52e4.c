// undefined FUN_080a52e4(void)
// entry 0x80a52e4


undefined4 FUN_080a52e4(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30[0] = *DAT_080a5368;
  local_30[1] = DAT_080a5368[1];
  local_30[2] = DAT_080a5368[2];
  local_30[3] = DAT_080a5368[3];
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar2 = *DAT_080a536c * DAT_080a5370 + DAT_080a5374;
  *DAT_080a536c = uVar2 & 0x7fffffff;
  uVar2 = ((uVar2 & 0x7fffffff) >> 0x10 & 1) + 3;
  if (uVar2 != 0) {
    do {
      local_20 = *(undefined4 *)(param_1 + 0x54);
      local_1c = *(undefined4 *)(param_1 + 0x58);
      FUN_080d4c8c(&local_20,local_30[bVar1] + (uVar2 & 3) * 0x1c,0,uVar3 | uVar3 << 4);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return in_lr;
}


