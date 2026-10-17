// undefined FUN_0800c66c(void)
// entry 0x800c66c


undefined4 FUN_0800c66c(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  if ((param_1 <= DAT_0800c6c0) && ((uint)(param_2 + DAT_0800c6c4) <= DAT_0800c6c8)) {
    puVar2 = (ushort *)(DAT_0800c6cc + 0x7e0);
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


