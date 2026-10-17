// undefined FUN_0800c66c(void)
// entry 0x800c66c


undefined4 FUN_0800c66c(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  if ((param_1 <= 0x000effff) && ((uint)(param_2 + 0xfffec000) <= 0x00013fff)) {
    puVar2 = (ushort *)(0x02000ab0 + 0x7e0);
    if (puVar2[(uint)*puVar2 * (param_2 + 0x5a000 >> 0xc) + (param_1 >> 0xc) + 2] != 1) {
      uVar1 = -(uint)(puVar2[(uint)*puVar2 * (param_2 + 0x5a000 >> 0xc) + (param_1 >> 0xc) + 2] ^
                     puVar2[(uint)*puVar2 * (param_2 >> 0xc) + (param_1 >> 0xc) + 2]) >> 0x1f;
      goto LAB_0800c6d2;
    }
  }
  uVar1 = 0;
LAB_0800c6d2:
  return uVar1;
}


