// undefined FUN_080026d0(void)
// entry 0x80026d0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080026d0(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  puVar3 = DAT_08002720;
  uVar2 = (ushort)DAT_0800271c;
  uVar1 = (ushort)DAT_08002724 & *(int *)DAT_08002720;
  *(int *)DAT_08002720 = uVar1;
  puVar4 = DAT_08002728;
  _DAT_04000000 = uVar1 | uVar2 & _DAT_04000000;
  *(int *)DAT_08002728 = puVar3 + 2;
  puVar4[1] = DAT_0800272c;
  puVar4[2] = DAT_08002730;
  return;
}


