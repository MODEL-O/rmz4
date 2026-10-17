// undefined FUN_08111960(void)
// entry 0x8111960


undefined4 FUN_08111960(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = (undefined4 *)(param_1 + 0x238);
  FUN_0810a1b4(DAT_08111990,DAT_08111994,0x40);
  for (param_2 = param_2 & 0xff; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = FUN_0810c5c8(0,0);
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  }
  return in_lr;
}


