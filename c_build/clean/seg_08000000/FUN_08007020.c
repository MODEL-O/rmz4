// undefined FUN_08007020(void)
// entry 0x8007020


undefined4 FUN_08007020(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  iVar1 = DAT_08007060;
  if (*(short *)(DAT_08007060 + 0x1d0) == 4) {
    param_1 = FUN_08129050(param_1 + DAT_08007064,0x3c000);
    param_1 = param_1 + 0xf000;
  }
  param_2 = param_2 >> 0xc;
  uVar2 = DAT_0800706c;
  if ((((uint)(param_1 >> 0xc) < 0x771) && (-1 < param_2)) && (param_2 <= DAT_08007068)) {
    puVar3 = (ushort *)(iVar1 + 0x7e0);
    uVar2 = (uint)*(ushort *)
                   ((uint)puVar3[param_2 * (uint)*puVar3 + (param_1 >> 0xc) + 2] * 2 +
                   *(int *)(iVar1 + 0x1b8));
  }
  return uVar2;
}


