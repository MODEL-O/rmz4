// undefined FUN_08002a98(void)
// entry 0x8002a98


undefined4 FUN_08002a98(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_08002ad0(param_1 & 0xffff);
  if (iVar1 != 0) {
    FUN_0812794c(*(undefined4 *)
                  ((uint)*(ushort *)((param_1 & 0xffff) * 8 + DAT_08002acc + 4) * 0xc + DAT_08002ac8
                  ),6);
  }
  return in_lr;
}


