// undefined FUN_080069bc(void)
// entry 0x80069bc


void FUN_080069bc(uint param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  iVar2 = 0x02000a70;
  pbVar3 = (byte *)(((param_1 & 0xffff) >> 3) + 0x02000a70);
  bVar1 = *pbVar3;
  if (((int)(uint)bVar1 >> (param_1 & 7) & 1U) != 0) {
    *pbVar3 = bVar1 & ~(byte)(1 << (param_1 & 7));
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  return;
}


