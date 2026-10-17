// undefined FUN_08007770(void)
// entry 0x8007770


undefined4 FUN_08007770(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uVar1 = *(ushort *)(0x02000ab0 + 0x1d0) & 0x7f;
  if (uVar1 == 4) {
    iVar2 = *(int *)((uint)(*(byte *)(0x02000ab0 + 0x0002c010) >> 4) * 4 + 0x20 + 0x0882c5d4);
    param_1 = FUN_08129050(param_1 + 0xffff1000,0x3c000);
    param_1 = param_1 + 0xf000;
  }
  else {
    if ((((param_1 < 0) || (param_2 < 0)) || (0x00770fff < param_1)) || (0x004f5fff < param_2))
    {
      uVar1 = 0xf;
      goto LAB_0800781a;
    }
    iVar2 = *(int *)((uint)(*(byte *)(0x02000ab0 + 0x0002c010) >> 4) * 4 + uVar1 * 8 +
                    0x0882c5d4);
  }
  uVar1 = (uint)((*(ushort **)(iVar2 + 0x74))
                 [((uint)*(byte *)((param_2 >> 0xc) + 0x0882b1d4) <<
                  (**(ushort **)(iVar2 + 0x74) & 0xff)) +
                  (uint)*(byte *)((param_1 >> 0xc) + 0x0882b9d4) + 4] >> 0xc);
  if (uVar1 == 0xf) {
    uVar1 = 0xf0;
  }
LAB_0800781a:
  return uVar1;
}


