// undefined FUN_08002bcc(void)
// entry 0x8002bcc


undefined4 FUN_08002bcc(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_08002ad0(param_1 & 0xffff);
  if (iVar1 != 0) {
    FUN_08128714(*(undefined4 *)
                  ((uint)*(ushort *)((param_1 & 0xffff) * 8 + DAT_08002c04 + 4) * 0xc + DAT_08002c00
                  ),DAT_08002c08,0x100);
  }
  return in_lr;
}


