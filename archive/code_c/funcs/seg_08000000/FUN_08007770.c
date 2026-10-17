// undefined FUN_08007770(void)
// entry 0x8007770


undefined8 FUN_08007770(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(DAT_080077b0 + 0x1d0) & 0x7f;
  if (uVar1 == 4) {
    iVar2 = *(int *)((uint)(*(byte *)(DAT_080077b0 + DAT_080077b8) >> 4) * 4 + 0x20 + DAT_080077b4);
    param_1 = FUN_08129050(param_1 + DAT_080077bc,0x3c000);
    param_1 = param_1 + 0xf000;
  }
  else {
    if ((((param_1 < 0) || (param_2 < 0)) || (DAT_080077d8 < param_1)) || (DAT_080077dc < param_2))
    {
      uVar1 = 0xf;
      goto LAB_0800781a;
    }
    iVar2 = *(int *)((uint)(*(byte *)(DAT_080077b0 + DAT_08007824) >> 4) * 4 + uVar1 * 8 +
                    DAT_08007820);
  }
  uVar1 = (uint)((*(ushort **)(iVar2 + 0x74))
                 [((uint)*(byte *)((param_2 >> 0xc) + DAT_0800782c) <<
                  (**(ushort **)(iVar2 + 0x74) & 0xff)) +
                  (uint)*(byte *)((param_1 >> 0xc) + DAT_08007828) + 4] >> 0xc);
  if (uVar1 == 0xf) {
    uVar1 = 0xf0;
  }
LAB_0800781a:
  return CONCAT44(in_lr,uVar1);
}


