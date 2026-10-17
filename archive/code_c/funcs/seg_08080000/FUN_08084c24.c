// undefined FUN_08084c24(void)
// entry 0x8084c24


undefined4 FUN_08084c24(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_08084ac0();
  if (cVar1 == '\0') {
    FUN_08084b10(param_1);
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08084c60));
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08084c64));
  }
  return in_lr;
}


