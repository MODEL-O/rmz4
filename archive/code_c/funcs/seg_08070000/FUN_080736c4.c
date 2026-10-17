// undefined FUN_080736c4(void)
// entry 0x80736c4


undefined4 FUN_080736c4(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)((uint)param_2 * 4 + DAT_080736fc);
  if (*(byte *)(param_1 + 0xb8) == 0xff) {
    FUN_0801cf00(param_1,uVar1 & 0xffff);
  }
  else if ((uVar1 != DAT_08073700) ||
          (uVar1 != *(uint *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_080736fc))) {
    FUN_0801cf00(param_1,uVar1 & 0xffff);
  }
  *(byte *)(param_1 + 0xb8) = param_2;
  return in_lr;
}


