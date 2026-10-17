// undefined FUN_08002bcc(void)
// entry 0x8002bcc


void FUN_08002bcc(uint param_1)

{
  int iVar1;
  iVar1 = FUN_08002ad0(param_1 & 0xffff);
  if (iVar1 != 0) {
    FUN_08128714(*(undefined4 *)
                  ((uint)*(ushort *)((param_1 & 0xffff) * 8 + 0x0813bc00 + 4) * 0xc + 0x0813bb58
                  ),0x0000ffff,0x100);
  }
  return;
}


