// undefined FUN_0800291c(void)
// entry 0x800291c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800291c(void)

{
  ushort *puVar1;
  undefined4 *puVar2;
  puVar2 = 0x04000040;
  puVar1 = 0x02000a50;
  _DAT_04000000 = (ushort)0x00001fff & _DAT_04000000 | (*(ushort *)0x02000a50);
  (*(undefined4 *)0x04000040) = *(undefined4 *)(0x02000a50 + 2);
  puVar2[1] = *(undefined4 *)(puVar1 + 4);
  puVar2[2] = *(undefined4 *)(puVar1 + 6);
  return;
}


