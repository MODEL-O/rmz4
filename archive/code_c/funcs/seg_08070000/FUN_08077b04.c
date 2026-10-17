// undefined FUN_08077b04(void)
// entry 0x8077b04


undefined4 FUN_08077b04(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xc6) + 1 & 1;
  *(byte *)(param_1 + 0xc6) = bVar1;
  if (bVar1 == 0) {
    FUN_08079188(param_1);
  }
  else {
    FUN_080790a8(param_1);
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08077b40));
  return in_lr;
}


