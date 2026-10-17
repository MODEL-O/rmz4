// undefined FUN_080026d0(void)
// entry 0x80026d0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080026d0(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  puVar3 = 0x02000a00;
  uVar2 = (ushort)0x0000f0e8;
  uVar1 = (ushort)0x00000f17 & (*(ushort *)0x02000a00);
  (*(ushort *)0x02000a00) = uVar1;
  puVar4 = 0x040000d4;
  _DAT_04000000 = uVar1 | uVar2 & _DAT_04000000;
  (*(undefined4 *)0x040000d4) = puVar3 + 2;
  puVar4[1] = 0x04000008;
  puVar4[2] = 0x8400000e;
  return;
}


