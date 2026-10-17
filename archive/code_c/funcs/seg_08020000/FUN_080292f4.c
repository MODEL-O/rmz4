// undefined FUN_080292f4(void)
// entry 0x80292f4


longlong FUN_080292f4(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  uint in_lr;
  
  puVar2 = DAT_08029378;
  iVar1 = DAT_08029374;
  FUN_08001d30(DAT_08029374,
               ((uint)*DAT_08029378 - (uint)(*(ushort *)(DAT_08029374 + 6) >> 6)) * 0x20 + 0x10000);
  puVar4 = DAT_08029380;
  iVar3 = DAT_0802937c;
  FUN_08002208(DAT_0802937c,((uint)*DAT_08029380 - (uint)*(byte *)(DAT_0802937c + 7)) * 0x20 + 0x200
              );
  FUN_08001d30(iVar1 + 0x28,
               ((uint)puVar2[2] - (uint)(*(ushort *)(iVar1 + 0x2e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0x28,((uint)puVar4[2] - (uint)*(byte *)(iVar3 + 0x2f)) * 0x20 + 0x200);
  FUN_0802ada8();
  return (ulonglong)in_lr << 0x20;
}


