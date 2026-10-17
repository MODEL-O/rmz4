// undefined FUN_08002a98(void)
// entry 0x8002a98


void FUN_08002a98(uint param_1)

{
  int iVar1;
  iVar1 = FUN_08002ad0(param_1 & 0xffff);
  if (iVar1 != 0) {
    FUN_0812794c(*(undefined4 *)
                  ((uint)*(ushort *)((param_1 & 0xffff) * 8 + 0x0813bc00 + 4) * 0xc + 0x0813bb58
                  ),6);
  }
  return;
}


