// undefined FUN_0800291c(void)
// entry 0x800291c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800291c(void)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = DAT_0800296c;
  puVar1 = DAT_08002968;
  _DAT_04000000 = (ushort)DAT_08002964 & _DAT_04000000 | *DAT_08002968;
  *DAT_0800296c = *(undefined4 *)(DAT_08002968 + 2);
  puVar2[1] = *(undefined4 *)(puVar1 + 4);
  puVar2[2] = *(undefined4 *)(puVar1 + 6);
  return in_lr;
}


